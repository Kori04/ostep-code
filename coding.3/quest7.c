#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int child = fork();
	if (child == 0){
		close(STDOUT_FILENO);
		printf("The Child Printing");
	}
	else {
	printf("Parent Printing\n");
	}
}
/*
It prevents the child from printing anything at all.
*/
