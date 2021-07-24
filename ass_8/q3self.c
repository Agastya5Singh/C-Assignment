# include<stdio.h>
int main()
{
	int a,b,c,sum;
	float d,e;
	printf("enter the prise of first object\n");
	scanf("%d",&a);
	printf("enter the prise of second object\n");
	scanf("%d",&b);
	printf("enter the prise of third object\n");
	scanf("%d",&c);
    sum=a+b+c;
    printf("%d\n",sum);
	if(sum>=6000)//40
	{
        d=sum*0.4;
		
	}
	 else if(sum>=4000)//30
	{
		d=sum*0.3;
		
	}
	 else if(sum>=2000)//20
	{
		d=sum*0.2;
		
	}
	printf("%f\n",d);

	  if((a+b||b+c||a+c)>=5000)//10
	  {
	  	e=sum*0.5;
	  }
	  else if(a+b||b+c||a+c>=3000)//10
	  {
	  	if (sum>=4000 && sum<6000)
	  		{e=sum*0.4;}
	  	else if (sum>=6000)
	  		{e=sum*0.5;}
	  }
	  printf("%f\n",e);
	return 0;	
}   