#include<stdio.h>
void string_concat(char A[], char B[]){
    int i;int len=0;
    for(i=0;A[i]!='\0';i++){
        len++;
    }
    for(i=0;B[i]!='\0';i++){
        A[len+i]=B[i];
    }
    A[len+i] ='\0';
}


int main()
{
    char A[]="Ariful";
    char B[]=" Islam";
    string_concat(A,B);
    printf("%s ",A);
    return 0;
}
