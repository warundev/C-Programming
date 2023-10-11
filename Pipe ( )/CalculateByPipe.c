#include<stdio.h>
int main()
{
	int fd1[2],fd2[2];
	int rv1,rv2;
	
	rv1=pipe(fd1);//pipe1
	if(fd1<0)
	{
		printf("pipe1 create failed");
		return -1;
	}
	
	rv2=pipe(fd2);//pipe2
	if(fd2<0)
	{
		printf("pipe2 create failed");
		return -1;
	}
	
	int id=fork();//child
	if(id<0)
	{
		printf("Child Create failed");
		return -1;
	}
	if(id==0)
	{
		//child create
		//pipe 1
		int num1,num2,sum;
		read(fd1[0],&num1,sizeof(num1));
		read(fd1[0],&num2,sizeof(num2));

		sum= num1 + num2;
		//pipe 2 
		write(fd2[1],&sum , sizeof (sum));
	}
	else{
		//parant create
		//pipe 1
		int num1,num2,sum;
		printf("Enter the number 01 : ");
		scanf("%d",&num1,sizeof(num1));
		
		printf("Enter the number 02 : ");
		scanf("%d",&num2,sizeof(num2));
		
		write(fd1[1],&num1,sizeof(num1));
		write(fd1[1],&num2,sizeof(num2));

		//pipe 2
		read(fd2[0],&sum,sizeof(sum));
		printf("Result : %d",sum,sizeof(sum));
	}
	return 0;
}