#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int x = 10;

int main(){
	x = 100;
	int child = fork();
	if (child == 0){
		x++;
		printf("Child X Value = %d\n", x);
	}
	else {
		printf("Parent X Value = %d\n", x);
	}
}

/*******
Question 1: The value is whatever x is when the Child Process is launched, if x and the child change it then they have two different values as can be seen in my test function.
*******/
