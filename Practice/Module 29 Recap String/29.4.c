#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",&arr);
    int count[26] = {0};
    for(int i=0;i<strlen(arr);i++)
    {
        char  value = arr[i];
        count[value - 'a']++;
    }
    for(char value = 'a'; value<='z';value++)
    {
        if(count[value-'a']>0){
            printf("value -> %c count -> %d\n",value,count[value-'a']);
        }
    }
    return 0;
}
