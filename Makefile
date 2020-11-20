#This is a list
text:list.c textlist.c list1.c
	gcc -g list.c list.c -o list
	gcc -g list.c list1.c -o list1
	./list
	./list1
clean:
	rm list list1
