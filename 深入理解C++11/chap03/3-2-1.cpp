class Info
{
public:
    Info():type(1),name('a')
    {
        InitRest();
    }
    Info(int i):type(i),name('a')
    {
        InitRest();
    }
    Info(char e):type(1),name(e)
    {
        InitRest();
    }

private:
    void InitRest()
    {
        /* ������ʼ�� */
    }
    int type;
    char name;
    // ...
};

// g++ -c 3-2-1.cpp
