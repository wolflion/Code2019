# 9.4 导入类

# 9.4.1 导入单个类
from chap09section02Car imprt Car    # 打开 chap09section02Car 模块中的Car类
my_new_car = Car('audi', 'a4', 2016)
print(my_new_car.get_descriptive_name())
my_new_car.odometer_reading = 23
my_new_car.read_odometer()

# 9.4.2 在一个模块中存储多个类 my_electric_car.py
from chap09section03Electric_Car import ElectricCar
my_tesla = ElectricCar('tesla', 'model s', 2016)
print(my_tesla.get_descriptive_name())
my_tesla.battery.describe_battery()
my_tesla.battery.get_range()

# 9.4.3 从一个模块中导入多个数 my_cars.py
from chap09section03Electric_Car import ElectricCar, Car   # 用逗号分隔各个类
my_beetle = Car('volkswagen', 'beetle', 2016)
print(my_beetle.get_descriptive_name())

my_tesla = ElectricCar('tesla', 'roadster', 2016)
print(my_tesla.get_descriptive_name())


# 9.4.4 导入整个模块
from chap09section03Electric_Car
my_beetle1 = Car('volkswagen', 'beetle', 2016)
print(my_beetle1.get_descriptive_name())

my_tesla1 = ElectricCar('tesla', 'roadster', 2016)
print(my_tesla1.get_descriptive_name())

# 9.4.5 导入模块中的所有类  from chap09section03Electric_Car import *     [不推荐这种方式,可以用module_name.class_name这种语法]

# 9.4.6 在一个模块中导入另一个模块
from chap09section02Car imprt Car
from chap09section03Electric_Car import ElectricCar   #假设电动车模块里没有Car类,就需要这么写
my_beetle2 = Car('volkswagen', 'beetle', 2016)
print(my_beetle2.get_descriptive_name())  

my_tesla2 = ElectricCar('tesla', 'roadster', 2016)
print(my_tesla2.get_descriptive_name())

# 9.4.7 自定义工作流程  **先找出让你能够编写出可行代码的方式,再尝试让代码更为组织有序**