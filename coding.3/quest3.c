#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int child = fork();
	if (child == 0){
		printf("Hello\n");
	}
	else{
		wait(NULL);
		printf("Goodbye\n");
	}
}
/*
Not really an easy way to do it without wait as that is the point of the wait command
*/
