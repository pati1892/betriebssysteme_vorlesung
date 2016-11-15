#include <stdio.h>
#include <string.h>

typedef struct file{
	char name[255];
	char directory[255];
	char owner[255];
	int date; 
	int size;
}File;

void foo(File);

int main(){
	File file;
	strcpy(file.name, "struct");
	foo(file);

}

void foo(File file){

	printf("%s\n", file.name);
}
