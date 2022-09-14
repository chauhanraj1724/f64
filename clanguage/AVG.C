#include<stdio.h>
#include<conio.h>
void main()
{
int c,r,m,ans;
float avg;
clrscr();

      printf("enter the value");
	scanf("%d",&c);
	printf("you have entered %d\n",c);

      printf("enter the value");
	scanf("%d",&r);
	printf("you have entered %d\n",r);

      printf("enter the value");
	scanf("%d",&m);
	printf("you have eneterd %d\n",m);

      ans=c+r+m;
	printf("value of add is %d\n",ans);

      avg=((float)c+(float)r+(float)m)/3;
	printf("\nvalue of avg is %f ",avg);

getch();
}