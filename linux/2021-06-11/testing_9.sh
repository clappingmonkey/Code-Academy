#!/bin/bash

TEST_FILE=task9
. test_data2

if [ ! -f "$TEST_FILE" ]; then
	echo "Binary file is not available, creating..." && gcc -g 20210201-9.c -o $TEST_FILE
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
	./$TEST_FILE $test1
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test2
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test3
	STATUS=$? && check_status STATUS

done

exit 0