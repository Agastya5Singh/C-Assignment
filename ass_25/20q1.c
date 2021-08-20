#include<stdio.h>
struct stu
{
  int roll;
  int sem;
  char name[20];
  float CGPA;
};
int main()
{
    struct stu a;
    scanf("%d",&a.roll);
    scanf("%d",&a.sem);
    scanf("%s",&a.name);
    scanf("%f",&a.CGPA);
    printf("%d,%d,%s,%f",a.roll,a.sem,a.name,a.CGPA);
    return 0;
    
}

