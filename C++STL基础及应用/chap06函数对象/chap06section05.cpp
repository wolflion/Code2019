// 6.5 �ۺ�ʾ��
// ����6.12��e6_12.cpp �����Բ�ͳ����ε����

#include<functional>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Shape   // �ڻ����ж���������Ķ�̬�麯��
{
public:
    virtual bool ShowArea() = 0;
};

class Circle:public Shape
{
public:
    Circle(float r):r(r){}
    bool ShowArea(){   // ���ض�̬�麯��
        cout<<3.14f*r*r<<endl;
        return true;
    }
private:
    float r;
};

class Rectangle:public Shape
{
public:
    Rectangle(float width, float height):width(width),height(height){}
    bool ShowArea(){   // ���ض�̬�麯��
        cout<<width*height<<endl;
        return true;
    }
private:
    float width,height;
};

class AreaCollect   //������״�����ָ�뼯����
{
public:
    bool Add(Shape* pShape) //�����״����ָ�뺯��
    {
        v.push_back(pShape);
    }
    vector<Shape *>v;
};
