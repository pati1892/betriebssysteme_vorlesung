#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int file_exists(const char[]);

int main(){
	
	FILE *fp;
	char path[] = "/home/patrick/test.txt";
	char c;
	if(file_exists(path)){
		printf("File already exists. Press [Y] for override file\n");
		scanf("%c", &c);
	}

	if(('y' == c) || !file_exists(path)){
		char text[255];
		printf("Enter text:\n");
		fgets(&text, 255, stdin);
		fp=fopen(path, "w+");
		fprintf(fp, text);	
	}
	return 0;
	

}

int file_exists(const char file[]){
	struct stat attr;
	return (stat(file , &attr) == 0);
}

