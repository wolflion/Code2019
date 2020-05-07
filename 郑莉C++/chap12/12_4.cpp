int main()
{
    Date date(2008,11,1);//��ʼ����
    Controller controller(date);
    string cmdLine;
    const char* FILE_NAME="commands.txt";
    ifstream fileIn(FILE_NAME);  // �Զ�ģʽ���ļ�
    if(fileIn)      // ��������򿪣���ִ���ļ��е�ÿһ������
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
        fileIn.close();  // �ر��ļ�
    }

    ofstream fileOut(FILE_NAME,ios_base::app);  // ��׷��ģʽ���ļ�
    cout<<"(a)add account (d)deposit (w)withdraw (s)show (c)change day (n)next month (q)query (e)exit"<<endl;
    while(!controller.isEnd())  // �ӱ�׼����������ִ�У�ֱ���˳�
    {
        cout<<controller.getDate()<<"\tTotal:"<<Account::getTotal()<<"\tcommand>";
        string cmdLine;
        getline(cin,cmdLine);
        try
        {
            if(controller.runCommand(cmdLine))
                fileOut<<cmdLine<<endl;   // ������д���ļ�
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
