#include"header.h"
struct stu*head=0;
int main()
{
	int c=0;
	char ch;
	while(1)
	{
		printf("enter the info..\n");
		printf("a/A)add\n P/p)print_data\n D/d)delete_all\n E/e)delete_node\n O/o)sort_data\n C/c)countNode\n S/s)save\n R/r)reverse\n V/v)search_by_name_marks\n m/M)modify_according_to_rollno\n Z/z)exit\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'A':
			case 'a':add();break;
			case 'P':
			case 'p':print();break;
			case 'D':
			case 'd':delete_all();break;
			case 'E':
			case 'e':delete_node();break;
			case 'O':
			case 'o':sort_data();break;
			case 'C':
			case 'c':c=count();
				 printf("c=%d\n",c);break;
			case 'S':
			case 's':save();break;
			case 'R':
			case 'r':reverse();break;
			case 'V':
			case 'v':search_name_marks();break;
			case 'M':
			case 'm':modify_name_marks();break;
			case 'Z':
			case 'z':return 0;
		}
	}
}

