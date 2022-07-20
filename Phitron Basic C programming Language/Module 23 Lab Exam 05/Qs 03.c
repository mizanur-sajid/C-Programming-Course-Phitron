#include<stdio.h>
#include<string.h>
void makeStrCopy(char in[], char out[]){
    out = strcpy(out,in);
}
int main(){
    char in[20]="hello";
    char out[20];
    makeStrCopy(in,out);
    printf("%s ",out);
}
