#include <stdio.h>
struct employee
{
int empID;
int type;
union date{
char a[11];
int age;
}s;
}e1,e2,e3;

int main()
{
int w,ee1,ee2,ee3;
printf("Enter the Employee ID of first employee: ");
scanf("%d",&e1.empID);
printf("Press to specify employee type 1.Part time\n2.Full time ");
scanf("%d",&e1.type);
printf("Press 1. To enter D.O.B. in DD/MM/YYYY format (including /)\n2. To enter age (number only) ");
scanf("%d",&w);
switch(w)
{
case 1: printf("Enter D.O.B. in DD/MM/YYYY format (including /)");
	scanf("%s",e1.s.a);
	ee1=1;
	break;
case 2: printf("Enter age (number only) ");
	scanf("%d",&e1.s.age);
	ee1=2;
	break;
}
printf("Enter the Employee ID of second employee: ");
scanf("%d",&e2.empID);
printf("Press to specify employee type 1.Part time\n2.Full time ");
scanf("%d",&e2.type);
printf("Press 1. To enter D.O.B. in DD/MM/YYYY format (including /)\n2. To enter age (number only) ");
scanf("%d",&w);
switch(w)
{
case 1: printf("Enter D.O.B. in DD/MM/YYYY format (including /)");
	scanf("%s",e2.s.a);
	ee2=2;
	break;
case 2: printf("Enter age (number only) ");
	scanf("%d",&e2.s.age);
	ee2=2;
	break;
}
printf("Enter the Employee ID of third employee: ");
scanf("%d",&e3.empID);
printf("Press to specify employee type 1.Part time\n2.Full time ");
scanf("%d",&e3.type);
printf("Press 1. To enter D.O.B. in DD/MM/YYYY format (including /)\n2. To enter age (number only) ");
scanf("%d",&w);
switch(w)
{
case 1: printf("Enter D.O.B. in DD/MM/YYYY format (including /)");
	scanf("%s",e3.s.a);
	ee3=1;
	break;
case 2: printf("Enter age (number only) ");
	scanf("%d",&e3.s.age);
	ee3=2;
	break;
}

printf("\n\n ");

printf("The Employee ID of first employee: %d\n",e1.empID);
if(e1.type == 1)
printf("PART TIME employee: \n");
else
printf("FULL TIME employee: \n");
if(ee1==1)
printf("D.O.B.: %s\n",e1.s.a);
else
printf("Age %d\n",e1.s.age);
printf("\n\n ");


printf("The Employee ID of secomd employee: %d\n",e2.empID);
if(e2.type == 1)
printf("PART TIME employee: \n");
else
printf("FULL TIME employee: \n");
if(ee2==1)
printf("D.O.B.: %s\n",e2.s.a);
else
printf("Age %d\n",e2.s.age);
printf("\n\n ");

printf("The Employee ID of third employee: %d\n",e3.empID);
if(e3.type == 1)
printf("PART TIME employee: \n");
else
printf("FULL TIME employee: \n");
if(ee3==1)
printf("D.O.B.: %s\n",e3.s.a);
else
printf("Age %d\n",e3.s.age);
printf("\n\n ");

return 0;
}