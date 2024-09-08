#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int child = fork();
	if(child == 0){
		execl("/bin/ls", "ls", NULL);
	}
}

/*
To allow for different ways of using the same general function and make it easier to use in certain circumstances
*/
