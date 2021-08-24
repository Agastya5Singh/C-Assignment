#include <stdio.h>
struct student
{
int roll;
struct date{
int dd;
int mm;
int yy;
}jod,dob;
}s1,s2;

int age(int dd, int dm, int dy, int jd, int jm, int jy)
{
int age;
if(jm<=dm)
{
age=jy-dy;
}
else if(jm>dm)
{
age=jy-dy+1;
}
else if((jm==dm)&&(jd<=dd))
{
age=jy-dy;
}
else
{
age=jy-dy+1;
}
return age;
}

int main()
{
int a1,a2;
printf("Enter the roll number of first student: ");
scanf("%d",&s1.roll);
printf("Enter the joining date of first student: ");
scanf("%d%d%d",&s1.jod.dd,&s1.jod.mm,&s1.jod.yy);
printf("Enter the date of birth of first student: ");
scanf("%d%d%d",&s1.dob.dd,&s1.dob.mm,&s1.dob.yy);
printf("Enter the roll number of second student: ");
scanf("%d",&s2.roll);
printf("Enter the joining date of second student: ");
scanf("%d%d%d",&s2.jod.dd,&s2.jod.mm,&s2.jod.yy);
printf("Enter the date of birth of second student: ");
scanf("%d%d%d",&s2.dob.dd,&s2.dob.mm,&s2.dob.yy);
a1=age(s1.dob.dd,s1.dob.mm,s1.dob.yy,s1.jod.dd,s1.jod.mm,s1.jod.yy);
a2=age(s2.dob.dd,s2.dob.mm,s2.dob.yy,s2.jod.dd,s2.jod.mm,s2.jod.yy);
printf("\n\n ");
printf("\nThe roll number of first student: %d",s1.roll);
printf("\nThe joining date of first student: %d.%d.%d",s1.jod.dd,s1.jod.mm,s1.jod.yy);
printf("\nThe date of birth of first student: %d.%d.%d",s1.dob.dd,s1.dob.mm,s1.dob.yy);
printf("\nThe Age of first student: %d",a1);
printf("\nThe roll number of second student: %d",s2.roll);
printf("\nThe joining date of second student: %d.%d.%d",s2.jod.dd,s2.jod.mm,s2.jod.yy);
printf("\nThe date of birth of second student: %d.%d.%d",s2.dob.dd,s2.dob.mm,s2.dob.yy);
printf("\nThe Age of second student: %d",a2);
return 0;
}