import unittest    # Python标准库中的模块unittest提供了代码测试工具.
from chap11section01name_function import get_formatted_name

class NamesTestCase(unittest.TestCase):
	#测试python
	def test_first_last_name(self):
		# 能够正确地处理像Janis Joplin这样的姓名吗?
		formatted_name = get_formatted_name('janis', 'joplin')
		self.assertEqual(formatted_name, 'Janis Joplin')

unittest.main()

#11.1.3 不能通过的测试

# 11.1.4 测试未通过时怎么办

# 11.1.5 增加新的测试