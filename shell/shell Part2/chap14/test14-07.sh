#!bin/bash
# testing parameters before use
#
if [ -n "$1" ]   # 使用-n测试来检查命令行参数$1中是否有数据
then
	echo Hello $1, glad to meet you.
else
  echo "Sorry, you did not identify yourself. "
fi

# test14-07.sh Rich
# test14-07.sh 