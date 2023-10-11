#include<stdio.h>
int main()
{
	int fd1[2],fd2[2];
	int rv1,rv2;
	
	rv1=pipe(fd1);//pipe 1
	if(fd1<0)
	{
		printf("pipe 1 create faild");
		return -1;
	}
	
	rv2=pipe(fd2);//pipe 2
	if(fd2<0)
	{
		printf("pipe 2 create faild");
		return -1;
	}
	
	//fork
	int id=fork();
	if(id == 0)//create child
	{
		char sendMsg[50]={"Hi im pipe1 son ,where is dad"};
		write(fd1[1],sendMsg,sizeof(sendMsg));
		
		
		//pipe 2 son
		char readMsg[50];
		read(fd2[0],readMsg,sizeof(readMsg));
		printf("\n\n Msg received by pipe 2 dad : %s",readMsg,sizeof(readMsg));
		
	}
	else//parant
	{
		char readMsg[50];
		read(fd1[0],readMsg,sizeof(readMsg));
		
		printf("\n\nMsg received by pipe1 child : %s",readMsg,sizeof(readMsg));
		
		
		//parant to child pipe2
		char sendMsg[50]={"Hi im pipe 2 dad, where is son"};
		write(fd2[1],sendMsg,sizeof(sendMsg));
	}
	return 0;
}