// 6.5 综合示例
// 【例6.12】e6_12.cpp 编程求圆和长方形的面积

#include<functional>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Shape   // 在基类中定义求面积的多态虚函数
{
public:
    virtual bool ShowArea() = 0;
};

class Circle:public Shape
{
public:
    Circle(float r):r(r){}
    bool ShowArea(){   // 重载多态虚函数
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
    bool ShowArea(){   // 重载多态虚函数
        cout<<width*height<<endl;
        return true;
    }
private:
    float width,height;
};

class AreaCollect   //各种形状对象的指针集合类
{
public:
    bool Add(Shape* pShape) //添加形状对象指针函数
    {
        v.push_back(pShape);
    }
    vector<Shape *>v;
};
