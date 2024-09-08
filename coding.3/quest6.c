#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int child = fork();
	if (child == 0){
		printf("Child Print First\n");
	}
	else{
		int out = waitpid(child, NULL, NULL);
		printf("Parent Print Second = %d\n", out);
	}
}
/*
When you have multiple child programs running concurrently
*/
