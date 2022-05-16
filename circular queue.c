#include<stdio.h>
#include<stdlib.h>
#define max 5
void enqueue(int x);
void dequeue();
void display();
int cqueue [max],front=-1,rear=-1;
void main()
{
	int ch,x;
	printf("circular queue operations...\n");
	printf("1.enqueue\n2.dequeue\n3.front\n4.rear\n5.display\n6.exit\n");
	while(1)
	{
		printf("enter your choice to perform the operation\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the element into the circular queue\n");
		           scanf("%d",&x);
		           enqueue(x);break;
		    case 2:dequeue();break;
		    case 3:display();break;
		    case 4:exit(1);
		    default:printf("invalid choice\n");
		}
	}
}
void enqueue(int x)
{
	if(((rear==max-1)&&(front==0))||(front=rear+1))
	    printf("circluar queue is full\n");
	else
	{
		if((rear==max-1)&&(f!=0))
		    rear=-1;
		if(front==-1)
		    front=0
		cqueue[++r]=x;
	}
}
void dequeue()
{
	if(front==-1)
	    printf("circular queue is empty\n");
	else
	{
		printf
	}
}
