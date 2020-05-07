class Info
{
public:
    Info():Info(1,'a') {}
    Info(int i) : Info(i,'a') {}
    Info(char e) : Info(1,e) {}

private:
    Info(int i, char e):type(i),name(e)
    {
        //
    }
    int type{1};
    char name{'a'};
    //...
};
// g++ -c -std=c++11 3-2-4.cpp
