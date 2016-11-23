#include <stdio.h>
#include <stdlib.h>

struct element{
    int value;
    struct element *next;
}typedef Element;

void printElement(Element *head){
    while(head != NULL){
        printf("%d\n", head->value);
        head = head->next;
    }
}

Element *add(Element *head, int value){
    while((head->next) != NULL){
        head = head->next;
    }
    Element *element = (Element*)malloc(sizeof(Element));
    element->value = value;
    head->next = element;
    element->next = NULL;
    return element;

}

int main(){

    Element *head = (Element*)malloc(sizeof(Element));
    head->value = 1;

    Element *second = (Element*)malloc(sizeof(Element));
    second->value = 2;
    head->next = second;
    second->next = NULL;

    add(head, 3);
    add(head, 4);
    add(head, 5);
    add(head, 6);
    add(head, 7);
    printElement(head);

}

