#include"header.h"
void modify_name_marks(void)
{
	struct stu *p=head;
	if(p==0)
	{
		printf("file not found..\n");
		return ;
	}
	int num,per;
	int f=0;
	char name[20],ch,s[10],i;
	printf("enter r/R:search rollno\n");
	scanf(" %c",&ch);
	if(ch=='r' ||ch=='R')
	{
		printf("enter the num\n");
		scanf("%d",&num);
		while(p)
		{
			if(num==p->rollno)
			{
				printf("enter the name and percentage:\n");
				scanf("%s %f",p->name,&p->percentage);
				f=1;
			}
			p=p->next;
		}
		if(f==0)
			printf("rollno not found..\n");
	}


}
