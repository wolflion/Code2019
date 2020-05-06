#8.2 传递实参（位置实参、关键字实参）

#8.2.1 位置实参
def describe_pet(animal_type, pet_name):
	"""显示宠物的信息"""
	print("\nI have a " + animal_type + ".")
	print("My " + animal_type + "'s name is " + pet_name.title() + ".")
describe_pet('hamster', 'harry')
describe_pet('dog', 'willie') #调用函数多次  【如果参数位置不对，会出现信息错误】

#8.2.2 关键字实参  【直接在实参中将名称和值关联起来了】
describe_pet(animal_type='hamster', pet_name='harry')
describe_pet(pet_name='harry', animal_type='hamster') # 与上一个调用等价，**要把形参名写准确**

#8.2.3 默认值
def describe_pet_default(pet_name, animal_type=’dog‘):   #这个写在后面，否则位置实参就调用不对了  【先列出没有默认值的形参，再列出有默认值的】
	"""显示宠物的信息"""
	print("\nI have a " + animal_type + ".")
	print("My " + animal_type + "'s name is " + pet_name.title() + ".")
describe_pet_default('willie')

#8.2.4 等效的函数调用   【随便按哪种方式调用，只要结果对就行】

#8.2.5 避免实参错误  【看Traceback的错误提示即可】