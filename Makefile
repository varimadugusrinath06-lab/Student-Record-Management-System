#Makefile
exe :main.o delete_node.o print.o delete_all.o add.o sort_data.o count.o save.o reverse.o search_name_marks.o modify_name_marks.o

	cc main.o delete_node.o print.o delete_all.o add.o sort_data.o count.o save.o reverse.o search_name_marks.o  modify_name_marks.o -o exe

main.o:main.c
	cc -c main.c
delete_node.o:delete_node.c
	cc -c delete_node.c
print.o:print.c
	cc -c print.c
delete_all.o:delete_all.c
	cc -c delete_all.c
add.o:add.c
	cc -c add.c
sort_data.o:sort_data.c
	cc -c sort_data.c
count.o:count.c
	cc -c count.c
save.o:save.c
	cc -c save.c
reverse.o:reverse.c
	cc -c reverse.c
search_name_marks.o:search_name_marks.c
	cc -c search_name_marks.c
modify_name_marks.o:modify_name_marks.c
	cc -c modify_name_marks.c
