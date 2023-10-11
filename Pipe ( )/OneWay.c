#include<stdio.h>
int main()
{
	int fd[2],rv;
	
	rv=pipe(fd);
	if(fd<0)//create pipe
	{
		printf("pipe creation failed");
		return -1;
	}
	
	int id = fork();
	if(id<0)
	{
		printf("Child creation faild");
		return -1;
	}
	
	if(id == 0)//child
	{
		//create msg
		char sendMsg[50]={"Hi im son,dad where are you..!"};
		write(fd[1],sendMsg,sizeof(sendMsg));
		
	}else{
		//parant
		char readMsg[50];
		read(fd[0],readMsg,sizeof(readMsg));
		
		printf("Msg received by child: %s",readMsg);
	}
	return 0;
}