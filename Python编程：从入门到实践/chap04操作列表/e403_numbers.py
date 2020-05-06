for value in range(1,5):
	print(value) #只打印1-4，不包括5
	
numbers = list(range(1,6))  #创建的是个list，是这个的[1,2,3,4,5]
print(numbers)
even_numbers = list(range(2,11,2))
print(even_numbers)

squares = []
for value in range(1,11):
	square = value**2
	square.append(square)
print(squares)

squares_other = [value**2 for value in range(1,11)]
print(squares_other)