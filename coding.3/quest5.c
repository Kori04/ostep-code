#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int child = fork();
	if (child == 0){
		int outc = wait(NULL);
		printf("Child Print First = %d\n", outc);
	}
	else{
		int out = wait(NULL);
		printf("Parent Print Second = %d\n", out);
	}
}
/*
It is printing the address of the child
It prints "-1" because there is no child it has
*/
