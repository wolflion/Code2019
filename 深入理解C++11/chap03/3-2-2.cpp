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
        /* ������ʼ�� */
    }
    int type {1};
    char name {��a��};  // �ѹ��캯��Ҫ�õ�Ĭ��ֵ����������������
    // ...
};

// g++ -c -std=c++11 3-2-2.cpp
