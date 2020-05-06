class A
{
public:
    virtual void func(int val = 1)
    { std::cout<<"A->"<<val <<std::endl;}
    virtual void test()
    { func();}
};
class B : public A
{
public:
    void func(int val=0)
{std::cout<<"B->"<<val <<std::endl;}
};
int main(int argc ,char* argv[])
{
    B*p = new B;
    p->test();
return 0;
}

//https://www.nowcoder.com/test/question/done?tid=29180728&qid=25405#summary