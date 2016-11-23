#include <stdio.h>
#include <stdlib.h>


void myStrCpy(char dest[], char *src){
    char c;
    int i =0;
   int length = sizeof(*dest);
    printf("Dest size stry cpy: %d\n", length);
/*printf("Dest size stry cpy: %d\n", sizeof(dest));
    while((c=src[i]) != '\0'){
        if(i+1 == maxLength){
            dest[i] = '\0';
            break;
        }
        dest[i] = c;
        ++i;
    }*/
}

int main()
{
    char a[] = "Hallo";
    char b[20]="123456789";
   // printf("Dest size: %d\n", sizeof(b));
    myStrCpy(b, a);
   // printf("Dest size after stry cpy %d\n", sizeof(b));
    //printf("%s", b);

}
