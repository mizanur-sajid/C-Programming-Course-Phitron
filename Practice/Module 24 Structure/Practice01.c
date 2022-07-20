#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct Person {
    char firstname[20];
    char lastname[20];
    int age;
    bool alive;
}Person;

int main(void){
    Person me = {
        .firstname = "Ariful",
        .lastname = "Islam",
        .age = 29,
        .alive = 1
    };
    printf("First-name: %s\nLast-name: %s\nAge: %d\nAlive: ",me.firstname,me.lastname,me.age,me.alive);
    me.alive ? printf("Yes\n") : printf("No\n");
    return 0;
}
