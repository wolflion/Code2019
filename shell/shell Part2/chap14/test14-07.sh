#!bin/bash
# testing parameters before use
#
if [ -n "$1" ]   # ʹ��-n��������������в���$1���Ƿ�������
then
	echo Hello $1, glad to meet you.
else
  echo "Sorry, you did not identify yourself. "
fi

# test14-07.sh Rich
# test14-07.sh 