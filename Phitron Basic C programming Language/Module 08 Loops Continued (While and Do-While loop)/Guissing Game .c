#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    srand(time(0));
    int hidden = rand()%100 + 1;
    //printf("%d\n", hidden);
    int num_of_guess =0;

    while (num_of_guess < 10){
        int guess;
        scanf("%d", &guess);

        if(guess == hidden){
            printf("You are right.");
            break;
        }
        else if(guess > hidden){
            printf("Guess smaller\n");
        }
        else{
            printf("Guess larger\n");
        }
        num_of_guess++;
    }
    if(num_of_guess == 10){
        printf("You failed\n");
    }
}

