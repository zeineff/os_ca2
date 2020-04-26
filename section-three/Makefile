run-task-1:
	cat access.log | tail -10

run-task-2:
	cat access.log | cut -d ' ' -f 1 | uniq

run-task-3:
	cat access.log | grep 404 | cut -d ' ' -f 3,4,5

run-task-4:
	cat access.log | grep MSIE > access.ie.log

run-task-5:
	cat access.log | grep ".* \([5-9]\|[0-9]\{2,\}\) \""
