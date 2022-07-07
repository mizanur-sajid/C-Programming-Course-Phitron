#include<stdio.h>
int string_length(char str[]){
    int i, length = 0;
    for(i=0;str[i] !='\0';i++){
        length ++;
    }
    return length;
}
int main(){
    char ch[100];
    int length;
    while(1==scanf("%s",ch)){
        length = string_length(ch);
        printf("length: %d\n",length);
    }
    return 0;
}
