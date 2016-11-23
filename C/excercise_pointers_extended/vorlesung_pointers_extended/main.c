#include <stdio.h>
#include <stdlib.h>


struct person{
    char firstname[255];
    char surname[255];
}typedef Person;

int main()
{
    Person person;
    readName(&person);
    printf("Name der Person: %s, %s", person.firstname, person.surname);
    printf("%d", sizeof(char));

}

void readName(Person *person){
    scanf("%s\n", person->firstname);
    scanf("%s", person->surname);
}
