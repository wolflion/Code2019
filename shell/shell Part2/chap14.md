### chap14 处理用户输入  287（302/621）
+ 14.1、命令行参数
	+ 14.1.1读取参数
		+ **位置参数变量**是标准的数字：`$0`是程序名，`$1`是第1个参数，直到第9个参数`$9`。
		+ 每个参数都是用空格分隔的，**在参数值中包含空格，必须要用引号（单引和双引都可以）**。
		+ 命令行参数超过9个，**在变量数字周围加上花括号，`${10}`。[test14-04.sh]
	+ 14.1.2读取脚本名
		+ **用`$0`获取shell在命令行启动的脚本名**。[test14-05.sh]
		+ **`basename`命令返回不包含路径的脚本名。**[test14-05b.sh]
	+ 14.1.3测试参数
		+ **使用参数前一定要检查其中是否存在数据**。[test14-07.sh]
+ 14.2、特殊参数变量
	+ 14.2.1参数统计
		+ **`$#`特殊变量含有脚本运行时携带的命令行参数的个数**。
	+ 14.2.2抓取所有的数据
+ 14.3、移动变量
+ 14.4、处理选项
+ 14.5、将选项标准化
+ 14.6、获得用户输入
	+ 14.6.1基本的读取
	+ 14.6.2超时
	+ 14.6.3隐藏方式读取
	+ 14.6.4从文件中读取
+ 14.7、小结