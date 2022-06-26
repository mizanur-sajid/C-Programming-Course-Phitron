#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr1, *ptr2;
    ptr1 = (int*)malloc(sizeof(int)); //malloc takes one parameter.also (int*) declaration the type of malloc
    ptr2 = (int*)calloc(5,sizeof(int)); //(int*) declaration the type of calloc.
                                      //5,size of(int) calloc takes two parameter.
    if(ptr1 == NULL || ptr2 == NULL){
        printf("Memory not allocated.\n");
    }else{
        printf("Memory allocation successfully.\n");

        //free(ptr);//if we want to free our allocated memory then we will use "free".
        //printf("Memory free successfully ");

        //We want to reallocate the memory then,
        ptr1 = realloc(ptr1, 50);
        printf("Memory successfully reallocation.\n");

        ptr2 = realloc(ptr2, 50);
        printf("Memory successfully reallocation. \n");

    }
return 0;
}


//Difference between malloc and alloc.
//Initialization: malloc wont initialize its position.
//But calloc initialize its position. For example when we declaration the alloc it
//will initialize everything by 0.

//Number of arguments:unlike malloc(),calloc() takes two arguments-
//number of blocks and size of each block.
