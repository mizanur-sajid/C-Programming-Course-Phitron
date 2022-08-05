#include<stdio.h>
int main()
{
    int n=10;
    int count=0;
    int note;
    for(int i=1;i<=10;i++){
        scanf("%d", &note);
        if(note == 100){
            count ++;
        }
    }
    printf("%d\n",count);
    return 0;
}
