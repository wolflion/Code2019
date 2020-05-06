dimensions = (200,50)
print(dimensions[0])
print(dimensions[1])
#dimensions[0] = 100 # 尝试修改元组里的值是不允许的
#遍历元组中的所有值
for dimension in dimensions:
	print(dimension)

#可以修改元组变量，dimensions = (200,50),改成dimensions = (400,100)  这样的意义在哪?