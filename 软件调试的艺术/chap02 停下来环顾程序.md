+ 52/229

+ 2.1 暂停机制
	+ 断点
	+ 监视点：表达式值发生变化
	+ 捕获点：特定事件

+ 2.2 断点概述
	+ 断点行数：**显示的是将要执行的代码行**，其实并没有执行。

+ 2.3 跟踪断点
	+ `info breakpoints`，简写为`i b`
	+ `delete`删除断点、监视点、捕获点

+ 2.4 设置断点
	+ `break filename:function`
	+ `tbreak` **临时断点使用tbreak命令设置**
	+ 其它break参数

+ 2.5 展开GDB示例
	+ `list`命令

+ 2.6 断点的持久性
	+ **修改和重新编译代码时没有退出GDB，那么在下次执行GDB的run命令时，GDB会感知到代码已修改，并自动重新加载新版本**。

+ 2.7 删除和禁用断点
	+ 删除
		+ `delete breakpoint_list`
		+ `delete` 删除所有断点
		+ `clear`
	+ 禁用
		+ `disable`
		+ `enable`

+ 2.8 进一步介绍浏览断点属性

+ 2.9 恢复执行   70/229
	+ 在GDB中
		+ `step`
		+ `next`
		+ `continue`
		+ `finish`
		+ `until`

+ 2.10 条件断点  79/229

+ 2.11 断点命令列表

+ 2.12 监视点