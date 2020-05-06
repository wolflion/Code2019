#8.6 将函数存储在模块中

#8.6.1 导入整个模块  （**模块是扩展名为.py的文件**）
import pizza
pizza.make_pizza(16, 'pepperoni')
pizza.make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')

#8.6.2 导入特定的函数  【from module_name import function_name，用逗号分隔函数名】

#8.6.3 使用as给函数指定别名
from pizza import make_pizza as mp
mp(16, 'pepperoni')
mp(12, 'mushrooms', 'green peppers', 'extra cheese')

#8.6.4 使用as给模块指定别名
import pizza as p
p.make_pizza(16, 'pepperoni')
p.make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')

#8.6.5 导入模块中的所有函数  （*星号运算符）  【from pizza import *】