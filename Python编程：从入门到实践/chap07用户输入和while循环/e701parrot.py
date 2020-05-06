message = input("Tell me something, and I will repeat it back to you: ") # 还是要从consle上输入才行吧
print(message)

#greeter.py
name = input("Please enter your name: )
print("Hello, " + name + "!")

#使用input()时，Python将用户输入解读为字符串
#age = input("How old are you?")  会输出'21'


#用int()把字符串转成整型  rollercoaster.py
height = input("How tall are you, in inches? ")
height = int(height)

if height >= 36:
	print("\nYou're tall enough to ride!")
else:
	print("\nother.")


#求模运算符 %

#2.7里用的是raw_input()函数读字符串；input()会被解读为Python代码。