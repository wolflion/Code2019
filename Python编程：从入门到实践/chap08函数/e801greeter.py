def greet_user():   #函数定义
	"""显示简单的问候语"""   #块注释
	print("Hello!")
greet_user()  # 调用函数

# 向函数传递信息
def greet_user(username):
    print("Hello, " + username.title() + "!")
greet_user('jesse')
	