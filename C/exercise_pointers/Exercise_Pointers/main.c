#include <stdio.h>
#include <stdlib.h>


void myStrCpy(char* dest, char* src){
    char c;
    int i =0;
    while((c=src[i]) != '\0'){
        dest[i] = c;
        ++i;
    }
}

int main()
{
    char a[] = "Hallo";
    char b[20];
    myStrCpy(b, a);
    printf("%s", b);
}
