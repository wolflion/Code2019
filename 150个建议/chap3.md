### chap3     65（81/357）

#### item27：区分内存分配的方式

#### item28：new/delete与new[]/delete[]必须配对使用
+ **不要对数组类型做typedef**

#### item29：区分new的三种形态
+ new operator
+ operator new
+ placement new

#### item30：new内存失败后的正确处理
+ **在C++里，如果new分配内存失败，默认是抛出异常**。所以一般的Test-for-NULL处理方式不再被推荐和支持。

#### item31：了解new_handler的所作所为

