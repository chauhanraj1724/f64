#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=30;
clrscr();
	 a+=2;
	 printf("%d\n",a);

	 a-=2;
	 printf("%d\n",a);

	 a*=2;
	 printf("%d\n",a);

	 a/=2;
	 printf("%d\n",a);

	 a%=2;
	 printf("%d\n",a);

	 b&=a;
	 printf("%d\n",b);

	 a^=2;
	 printf("%d\n",a);

	 a|=2;
	 printf("%d\n",a);
getch();
}