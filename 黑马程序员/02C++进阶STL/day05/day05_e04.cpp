//
// Created by lionel on 2019/8/19.
//

//04 multimap案例框架搭建_rec.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*5个员工，有属性；分到不同部门；显示部门信息*/

class Worker
{
public:
    string mName;
    string mTele;
    int mAge;
    int mSalary;
};

void Create_Worker(vector<Worker>& vWork)
{
    //
}

void WorkerByGroup(vector<Worker>&vWork, multimap<int,Worker>& workGroup)
{
    //
}

void PrintWorkerByGroup( multimap<int,Worker>& workGroup)
{
    //
}

int main()
{
    //存放新员工的信息
    vector<Worker> vWork;
    // multimap保存分组信息
    multimap<int,Worker> workGroup;
    // 创建员工
    Create_Worker(vWork);
    // 员工分组
    WorkerByGroup(vWork,workGroup);
    // 打印每一部门的员工信息
    PrintWorkerByGroup(workGroup);

    return 0;
}

