#include<stdio.h>
int main()
{
	int st[25],top=-1,data;
	int op,n,i,j;
	char ch;
	do
	{
		j=1;
	printf("Enter the size of the stack:");
	scanf("%d",&n);
	do
	{
	printf("\nChoose:\n1.To insert element-PUSH\t2.To Delete an element-POP\t3.To retrieve top most element-PEEP\t");
	printf("4.To Display\n5.Exit\nOption:");
	scanf("%d",&op);
	switch(op)
{
	case 1:
		printf("PUSH Operation\n");
			
				if(top==n-1)
				printf("\nStack overflow");
				else
				{
					printf("Enter the data: ");
					scanf("%d",&data);
					top++;
					st[top]=data;
				}
			break;
	case 2:
		printf("POP Operation\n");
		
				if(top==-1)
		printf("Stack is empty - Stack underflow\n");
		else
		{
			printf("%d has been deleted\n",st[top]);
			top--;
		}
		break;
		case 3:
			printf("PEEP Operation\n");
				if(top==-1)
				printf("Stack Underflow\n");
				else
				printf("Top element = %d\n",st[top]);
			break;
		case 4:
			printf("The Stack is:\n");
			if(top==-1)
			printf("Stack Underflow-Empty\n");
			else
			{
				for(i=0;i<=top;i++)
				{
				printf("%d\t",st[i]);
				}
			}
		
			break;
		default:
			printf("Exit Successful\n");
			j=0;
			break;
}
	
}while(j==1);
printf("\nDo you want to start over(y/n):");
scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');
}
