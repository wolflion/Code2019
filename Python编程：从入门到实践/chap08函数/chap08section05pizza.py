#8.5 传递任意数量的实参


#8.5.1 结合使用位置实参和任意数量实参

#8.5.2 使用任意数量的关键字实参
def build_profile(first, last, **user_info):
	"""创建一个字典，其中包含我们知道的有关用户的一切"""
	profile = {}
	profile['first_name'] = first
	profile['last_name'] = last
	for key, value in user_info.items():
		profile[key] = value
	return profile
	
user_profile = build_profile('albert', 'einstein',
							location = 'princeton',
							field = 'physics')
print(user_profile)
	