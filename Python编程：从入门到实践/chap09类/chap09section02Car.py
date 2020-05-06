#9.2 使用类和实例
class Car():
	def _init_(self, make, model, year):
		self.make = make
		self.model = model
		self.year = year
		self.odometer_reading = 0  #类中的属性要有初始值，除了形参传递，也可以直接赋值
	
	def get_descriptive_name(self):
		long_name = str(self.year) + ' ' + self.make + ' ' + self.model
		return long_name.title()                   # 这地方的return，是不是可以随便整，也无须啥返回类型验证？
	
	def read_odometer(self):            #读取新加的默认属性值
		print("This car has " + str(self.odometer_reading) + " miles on it.")
		
	def update_odometer(self, mileage):
		if mileage >= self.odometer_reading:
			self.odometer_reading = mileage
		else:
			print("You can't roll back an odometer!")
			
	def increment_odometer(self, miles):
		self.odometer_reading += miles
		
my_new_car = Car('audi', 'a4', 2016)
print(my_new_car.get_descriptive_name())

# 9.2.2  给属性指定默认值，（1）可以直接修改
my_new_car.odometer_reading = 23
my_new_car.read_odometer()

#（2）写一个update()方法

#（3）还是写一个方法，进行递增
