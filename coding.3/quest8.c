#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int piper[2];
	pipe(piper);

	int childa = fork();
	if(childa == 0){
	close(piper[0]);
	dup2(piper[1],1);
	printf("This is being piped by the piper");
	}
	else{
	int childb = fork();
		if (childb == 0){
		char storage[100];
		read(STDIN_FILENO, storage, 100);
		printf("%s",storage); 
	}
	}
}
