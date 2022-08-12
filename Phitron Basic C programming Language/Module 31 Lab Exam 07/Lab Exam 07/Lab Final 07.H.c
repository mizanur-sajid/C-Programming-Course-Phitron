#include<stdio.h>
#include<string.h>
int main (){
    char str[100]; //declaring a string
    fgets(str,100,stdin); //taking input from user
    int len = strlen(str); //finding length of string
   int counter=0; //declaring a counter
   int a; //declaring a variable
    for(int i = 0;i<len;i++){ //loop to check the string

        if(str[i]==a){ //checking if the character is same as previous one
            counter++; //if same then incrementing the counter
            if(counter>=7){ //checking if the counter is greater than 7
                break; //if yes then breaking the loop
            }
        }
        else{
            a = str[i]; //if not same then assigning the character to a
            counter=1; //and setting the counter to 1
        }
    }
    if(counter>=7){ //checking if the counter is greater than 7
        printf("YES\n"); //if yes then printing yes
    }
    else{
        printf("NO\n"); //if not then printing no
    }
}

