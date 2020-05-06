//14 类模板h和cpp分离编写解决方案_rec
#include "day01_e14.hpp"   // 写成.h就不行  【要包含cpp才行，相当于把cpp文件拷贝进来了】

//声明和实现不能分开写，所以要写成hcpp，把.h和.cpp合成到一起了

int main()
{
    Person<int> p(10,20);
    p.show();

    return 0;
}
