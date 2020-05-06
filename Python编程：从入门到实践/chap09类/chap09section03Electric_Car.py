#9.3 继承
class Car():
	def _init_(self, make, model, year):
		self.make = make
		self.model = model
		self.year = year
		self.odometer_reading = 0  
	
	def get_descriptive_name(self):
		long_name = str(self.year) + ' ' + self.make + ' ' + self.model
		return long_name.title()                 
	
	def read_odometer(self):           
		print("This car has " + str(self.odometer_reading) + " miles on it.")
		
	def update_odometer(self, mileage):
		if mileage >= self.odometer_reading:
			self.odometer_reading = mileage
		else:
			print("You can't roll back an odometer!")
	
	def increment_odometer(self, miles):
		self.odometer_reading += miles
		
class Battery(): # 9.3.5 新增一个类
	def _init_(self, battery_size = 70):  # 如果不提供，默认是70
		self.battery_size = battery_size
	
	def describe_battery(self): 
		print("This car has a " + str(self.battery_size) + "-KWh battery.")
		
	def get_range(self):
		# 打印一条消息，指出电瓶的续航里程
		if self.battery_size == 70:
			range = 240
		elif self.battery_size == 85:
			range = 270
		message = "This car can go approximately " + str(range)
		message += " miles on a full charge."
		print(message)

class ElectricCar(Car):
	#电动汽车
	def _init_(self, make, model, year):
		super()._init_(make,model,year)  #初始化父类的属性，super()是一个特殊函数
		self.battery_size = 70   # 9.3.3 子类自已的属性
		self.battery = Battery()  # 9.3.5 
	
	def describe_battery(self):  # 9.3.3 子类的方法
		print("This car has a " + str(self.battery_size) + "-KWh battery.")
		
my_tesla = ElectricCar('tesla', 'model s', 2016)
print(my_tesla.get_descriptive_name())
my_tesla.describe_battery()
my_tesla.battery.describe_battery()  # 9.3.5 
my_tesla.battery.get_range()

#2.7的差异 super(ElectricCar, self)，需要两个实参：子类名 和 对象self

# 9.3.3 给子类定义属性和方法

# 9.3.4 重写父类的方法， **直接在子类里重写一个与父类的同名方法**  fill_gas_tank()  print("This car doesn't need a gas tank!")

# 9.3.5 将实例用作属性

# 9.3.6 模拟实物 **解决问题时，可以从较高的逻辑层面（而不是语法层面）考虑；你考虑的不是Python，而是如何使用代码来表示实物**