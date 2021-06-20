#!/bin/bash

TEST_FILE=task3
TEST_DATA=test_data3
. $TEST_DATA

if [ ! -f "$TEST_FILE" ]; then
	echo "Binary file is not available, creating..." && gcc -g 20210210-3.c -o $TEST_FILE
else
	echo "Binary file detected, continue with the data from $TEST_DATA"
fi

check_status() {
	if [ "$STATUS" -ne "0" ]
	then
		echo "ERROR! - $STATUS. OH NO, IT IS GONNA BLOW!"
	else
		echo "ALL GOOD, MOVE ALONG!"
	fi
}

for test in $"test_data"
do
	./$TEST_FILE $test1
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test2
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test3
	STATUS=$? && check_status STATUS

	./$TEST_FILE $test4
	STATUS=$? && check_status STATUS

done

exit 0
