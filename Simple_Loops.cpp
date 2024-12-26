// 1
#include<stdio.h>
int main()
{
	int x;
	x=1;
	loop: if(x<6)
	{
		printf("%d\n",x);
		x++;
		goto loop;
	}
}

// 2
#include<stdio.h>
int main()
{
	int x=5;
	loop:if (x>0)
	{
		printf("%d\n",x);
		x--;
		goto loop;
	}
}

// 3
#include<stdio.h>
int main()
{
	int x=1,sum=0;
	loop:if(x<6)
	{
		sum=sum+x;
		x++;
		goto loop;
	}
	printf("%d",sum);
}

// 4
#include <stdio.h>
int main()
{
	int x=5,sum=0;
	loop:if(x>0)
	{
		sum=sum+x;
		x--;
		goto loop;
	}
	printf("%d",sum);
}

// 5
#include<stdio.h>
int main()
{
	int x=1;
	loop:if(x<10)
	{
		printf("%d\n",x);
		x=x+2;
		goto loop;
	}
	
}
