run-task-1:
	echo "The quick brown fox jumps over the lazy dog\n" | wc -w
	
run-task-2:
	echo "The quick brown fox jumps over the lazy dog\n" | tr [:lower:] [:upper:]
	
run-task-4: run-task-3
	(tail -1 dkit.html && head -1 dkit.html) | tr '<, >' '[, ]' > mangled.txt
	
run-task-3:
	curl https://www.dkit.ie > dkit.html

clean:
	rm dkit.html mangled.txt
