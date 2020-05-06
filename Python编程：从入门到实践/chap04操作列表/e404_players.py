players = ['charles', 'martina', 'michael', 'florence', 'eli']
print(players[0:3])  #['charles', 'martina', 'michael']
#遍历切片
print("Here are the first three players on my team:")
for player in players[:3]:
	print(player.title())
#复制列表list
my_foods = ['pizza', 'falafel', 'carrot cake']
friend_foods = my_foods[:]
print("My favorite foods are:")
print(my_foods)
print("\nMy friend's favorite foods are:")
print(friend_foods)