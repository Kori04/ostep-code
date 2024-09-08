
#include <string.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
	char line[6] = "Test";
	char second[8] = "LineTo";
	int test = open("text.txt",O_RDWR);
	
	int child = fork();

	if (child == 0){
	write(test, line, strlen(line));
        write(test, second, strlen(second));	
	}
	else{       
	 write(test, line, strlen(line));
        write(test, second, strlen(second)); 
	}

	close(test);
}

/*
Yes they can both open each other, they can also write over each other
*/
