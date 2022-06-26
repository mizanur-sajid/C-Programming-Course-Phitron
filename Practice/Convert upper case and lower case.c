#include<stdio.h>
int main(){
    char country[]={'B','A','N','G','L','A','D','E','S','H'};
    int i,length;
    length=10;
    for(i=0;i<10;i++){
        if(country[i]>=65 && country[i]<=90){
            country[i]='a'+(country[i] - 'A');
         //if(country[i]>=97 && country[i]<=122){
            //country[i]='A'+(country[i] - 'a');
        }
    }
    printf("%s\n",country);
    return 0;
}
