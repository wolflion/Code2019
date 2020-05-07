class Info
{
public:
    Info()
    {
        InitRest();
    }
    Info(int i):type(i)
    {
        InitRest();
    }
    Info(char e):name(e)
    {
        InitRest();
    }

private:
    void InitRest()
    {
        /* 其他初始化 */
    }
    int type {1};
    char name {‘a’};  // 把构造函数要用的默认值，放在这里设置了
    // ...
};

// g++ -c -std=c++11 3-2-2.cpp
