class Info
{
public:
    Info():Info(1) {}  // ί�ɹ��캯��
    Info(int i) : Info(i,'a') {} // ����Ŀ�깹�캯����Ҳ��ί�ɹ��캯��
    Info(char e) : Info(1,e) {}

private:
    Info(int i, char e):type(i),name(e) // Ŀ�깹�캯��
    {
        //
    }
    int type;
    char name;
    //...
};
// g++ -c -std=c++11 3-2-5.cpp
