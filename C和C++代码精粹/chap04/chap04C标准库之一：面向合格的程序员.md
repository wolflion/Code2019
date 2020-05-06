## 内容

+ 标准C库由在15个头文件中声明的函数、类型定义和宏组成。
+ `size_t`是无符号整型
+ 第I组：每个C程序员都应该知道的知识
  + <ctype.h>字符处理
  + <stdio.h>输入/输出
  + <stdlib.h>复杂的工具
  + <string.h>文本处理
+ 第II组：职业程序员
  + <assert.h>支持有保护的程序的断言
  + <limits.h>整型运算的系统参数
  + <stddef.h>通用整型和常量
  + <time.h>时间处理
+ 第III组：需要时可发挥很大作用的工具
  + <errno.h>
  + <float.h>
  + <locale.h>文化自适应
  + <math.h>
  + <setjmp.h>非局部分支
  + <signal.h>
  + <stdarg.h>可变长度参数表

### 4.1、<ctype.h>

+ **支持处理单个字符的典型操作**
  + 字符测试函数 `isdigit()`
  + 字符映射函数  `toupper()`

### 4.2、<stdio.h>

+ 格式化I/O
+ 字符I/O
+ 其它函数

### 4.3、<stdlib.h>

### 4.4、<string.h>

+ 复制、连结、比较、查找（`strspn(),strcspn(),trcspn()`）、其它