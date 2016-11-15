#include <stdio.h>
#include <string.h>

typedef struct dir{
	char path[255];
	
}Path;

typedef struct file{
	char name[255];
	Path path;
	char owner[255];
	int date; 
	int size;
	int permission;
}File;



void foo(File);

int main(){
	File file;
	strcpy(file.name, "struct");
	file.permission = 0b1010;
	strcpy(file.path.path, "C/abc");
	foo(file);

}

void foo(File file){

	printf("%s\n", file.name);
	printf("%d\n", file.permission);
	printf("%s\n", file.path.path);
}
