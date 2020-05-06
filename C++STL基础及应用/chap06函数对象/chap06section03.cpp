//6.3 二元函数
// 例6.3 e6_3.cpp 利用二元函数使学生成绩升序排列
#include<functional>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    int grade;
public:
    Student(string name, int grade)
    {
        this->name = name;
        this->grade = grade;
    }
    bool operator<(const Student& s) const
    {
        return grade < s.grade;
    }
};

ostream& operator<<(ostream& os, const Student& s)
{
    os<<s.name<<"\t"<<s.grade<<"\n";
    return os;
}

template<class _inPara1, class _inPara2>
class binary_sort:public binary_function<_inPara1, _inPara2, bool>
{
public:
    bool operator()(_inPara1 in1, _inPara2 in2)
    {
        return in1 < in2;
    }
};

int main()
{
    Student s1("zhangsan",60);
    Student s2("lisi",80);
    Student s3("wangwu",70);
    Student s4("zhaoliu",90);

    vector<Student>v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    v.push_back(s4);

    sort(v.begin(),v.end(),binary_sort<Student&, Student&>()); //按升序排列
    copy(v.begin(), v.end(), ostream_iterator<Student>(cout,"")); // 升序结果输出
}
