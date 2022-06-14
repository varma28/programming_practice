#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *customThreadfun()
{
	for(int i = 0;i<4;i++)
	{
		printf("i'm custom thread\n");
		sleep(5);
	}
	return NULL;
}

int main()
{
	pthread_t thread;
	int status;

	status = pthread_create(&thread,NULL,customThreadfun,NULL);

	if(!status)
	{
		printf("Custom thread created sucessfully\n");
	}
	else
	{
		printf("Unable to create the custom thread\n");
		return 0;
	}

	for(int i=0; i<4; i++)
	{
		printf("I'm in the main function\n");
		sleep(5);
	}

	return 0;

}
