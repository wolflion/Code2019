#9.1创建和使用类
class Dog():                                                   #首字母大写的名称指的是类。()是空的，要从空白创建这个类。
	"""一次模拟小狗的简单尝试"""
	def _init_(self, name, age):                      #_init_()是个特殊的方法，根据Dog类创建新实例时，会自动运行它。self是必不可少，且位置在其它形参前面
		"""初始化属性name和age"""
		self.name = name
		self.age = age                                 # 这个相当属性，self可以被类内访问
		
	def sit(self):
		#模拟小狗被命令时蹲下
		print(self.name.title() + " is now sitting.")
		
	def roll_over(self):                              
		#模拟小狗被命令行打滚
		print(self.name.title() + " rolled over!")
		
# 2.7时必须加上 object ，即  class Dog(object):

# 9.1.2 根据类创建实例
my_dog = Dog('willie', 6)  #_init_()方法没有显式的return
print("My dog's name is " + my_dog.name.title() + ".")
print("My dog is" + str(my_dog.age) + " years old.")
my_dog.sit()
my_dog.roll_over()
#也可以创建多个实例，就不写了