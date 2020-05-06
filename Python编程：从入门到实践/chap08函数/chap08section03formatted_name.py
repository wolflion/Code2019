#8.3 返回值

#8.3.1 返回简单值
def get_formatted_name(first_name, last_name):
	#返回整洁的姓名
	full_name = first_name + ' ' + last_name
	return full_name.title()
	
musician = get_formatted_name('jimi', 'hendrix')
print(musician)

#8.3.2 让实参变成可选的
def get_formatted_name_middle(first_name, last_name, middle_name=''):  #给实参middle_name指定一个默认值--空字符串
	if middle_name:
		full_name = first_name + ' ' + middle_name + ' ' + last_name
	else:
	       full_name = first_name + ' ' + last_name
	return full_name.title()
	
musician = get_formatted_name_middle('jimi', 'hendrix')
print(musician)
musician1 = get_formatted_name_middle('john', 'hooker', 'lee')
print(musician1)

#8.3.3 返回字典
def build_person(first_name, last_name):
	person = {'first': first_name, 'last': last_name}
	return person
	
musician_person = build_person('jimi', 'hendrix')
print(musician_person)

def build_person_age(first_name, last_name, age=''):
	person = {'first': first_name, 'last': last_name}
	if age:
		person['age'] = age
	return person
	
musician_person_age = build_person('jimi', 'hendrix',age=27)
print(musician_person_age)

#8.3.4 结合使用函数和while循环
