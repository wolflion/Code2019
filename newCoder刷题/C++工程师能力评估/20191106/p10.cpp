int main()
{
	char str[] = "glad to test something";
	char *p = str;
	cout<<*p<<endl;  // g
	cout<<p<<endl;  // glad to test something
	p++;            
	cout<<p<<endl;  // lad to test something
	cout<<*p<<endl; // l
	int *p1 = reinterpret_cast<int *>(p);  //把char转成int
	p1++;                                 // 这个++就是4了； 【主要就在这一层的转换上】
	cout<<p1<<endl;
	p = reinterpret_cast<char *>(p1);  // 再把int转成char
	//printf("result is %s\n", p);
	cout<<p<<endl;
	system("pause");
}