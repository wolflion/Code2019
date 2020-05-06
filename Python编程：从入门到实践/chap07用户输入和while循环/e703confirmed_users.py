unconfirmed_users = ['alice', 'brian', 'candace']
confirmed_users = []
while unconfirmed_users:
	confirmed_user = unconfirmed_users.pop()
	print("Verifying user: " + current_user.title())
	confirmed_users.append(current_user)
# 显示所有已验证的用户
	