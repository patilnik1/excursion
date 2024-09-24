// c++ program of stack for integer perform  different operation on stack(push,pop,peek,display)

#include <stdio.h>
# define MAX_SIZE 5
int top =-1;
int A[MAX_SIZE];
void push(int x)
 {
	if (top == MAX_SIZE-1)
	{
		printf("Error:overflow\n");
		return;
	}
	top --;
}
void print()
{
	if (top== -1)
	printf("\nError:Underflow\n");
	return;
}
if ( top >= -1)
printf("\nError:Underflow\n");
return;
 }

printf("stack:");
for (int i=0;i<=top;i++)
{
	printf("%d",A[i]);
}
printf("\n");
void peek (int index)
{
	if (index<=0)
	{
		printf("\nError:index should start from 1\n");
		return;
	}
	if ((top-index+1) <0)
	{
		printf("\nError:Underflow on peek\n");
	}
	printf("\n peek operation for index: %d,value:%d\n","indexA[top - index+1]");
}
//void change( int index,int x)*
//if (index<=0)
{
//	printf("\n Error:index should start from 1");
//	return;
}
//if ([top=index+1]<0);
{
//	printf("\n Error: Underflow on change\n");
//	return;
}
A(top-index+1)=x;
print();
}
int main()
{
	peek(2);
	push(10); print();
	push(20); print();
	push(30); print();
	pop(); print();
	push(50); print();
	peek(5);
	peek(3);
	peek(1);
	change(1,100);
	change(4,100);
	return 0;
}
}
}
