int main()
{
	char str[] = "glad to test something";
	char *p = str;
	cout<<*p<<endl;  // g
	cout<<p<<endl;  // glad to test something
	p++;            
	cout<<p<<endl;  // lad to test something
	cout<<*p<<endl; // l
	int *p1 = reinterpret_cast<int *>(p);  //��charת��int
	p1++;                                 // ���++����4�ˣ� ����Ҫ������һ���ת���ϡ�
	cout<<p1<<endl;
	p = reinterpret_cast<char *>(p1);  // �ٰ�intת��char
	//printf("result is %s\n", p);
	cout<<p<<endl;
	system("pause");
}