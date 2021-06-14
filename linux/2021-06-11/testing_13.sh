#!/bin/bash

TEST_FILE=task13
. test_data

if [ ! -f "$TEST_FILE" ]; then
	echo "Binary file is not available, creating..." && gcc -g 20210111-13.c -o $TEST_FILE
fi

check_status() {
	if [ "$STATUS" -ne "0" ]
	then
		echo "ERROR! OH NO, IT IS GONNA BLOW!"
	else
		echo "ALL GOOD, MOVE ALONG!"
	fi
}
	
for test in $"test_data1"
do
	./$TEST_FILE $test1 $test2
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test3 $test4
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test5 $test6
	STATUS=$? && check_status STATUS

done

exit 0