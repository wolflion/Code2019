int main()
{
    Date date(2008,11,1);//起始日期
    Controller controller(date);
    string cmdLine;
    const char* FILE_NAME="commands.txt";
    ifstream fileIn(FILE_NAME);  // 以读模式打开文件
    if(fileIn)      // 如果正常打开，就执行文件中的每一条命令
    {
        while(getLine(fileIn,cmdLine))
        {
            try
            {
                controller.runCommand(cmdLine);
            }catch(exception &e)
            {
                cout<<"Bad line in "<<FILE_NAME<<": "<<cmdLine<<endl;
                cout<<"Error: "<<e.what()<<endl;
                return 1;
            }
        }
        fileIn.close();  // 关闭文件
    }

    ofstream fileOut(FILE_NAME,ios_base::app);  // 以追加模式打开文件
    cout<<"(a)add account (d)deposit (w)withdraw (s)show (c)change day (n)next month (q)query (e)exit"<<endl;
    while(!controller.isEnd())  // 从标准输入读入命令并执行，直到退出
    {
        cout<<controller.getDate()<<"\tTotal:"<<Account::getTotal()<<"\tcommand>";
        string cmdLine;
        getline(cin,cmdLine);
        try
        {
            if(controller.runCommand(cmdLine))
                fileOut<<cmdLine<<endl;   // 将命令写入文件
        }catch(AccountException &e)
        {
            cout<<"Error(#"<<e.getAccount()->getId()<<"):"<<e.what()<<endl;
        }catch(exception &e)
        {
            cout<<"Error: "<<e.what()<<endl;
        }
    }
    return 0;
}
