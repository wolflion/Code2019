#!bin/bash
# Testing parameters
#
if [ $# -n 2 ]   # ʹ�ò���ǰ���Բ���������
then
	echo
	echo Usage: test14-09.sh a b
	echo
else
	total = $[ $1 + $2 ]
  echo
  echo The total is $total
  echo
fi

# test14-09.sh
# test14-09.sh 10
# test14-09.sh 10 15 