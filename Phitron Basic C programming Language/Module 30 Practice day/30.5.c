/**
Write a C code which takes an string of small alphabets as input which size will be maximum 100 and do the following:
Print the index of vowels in that string. Index of that string starts from 0.

For example:
Input:
abdeufigoh
Output:
0 3 4 6 8
**/
#include<stdio.h>
int main(){
    int index;
    char arr[] = "abdeufigoh";
    int length = strlen(arr);
    for(index=0;index<length;index++){
        if(arr[index] == 'a' || arr[index] == 'e' ||
            arr[index] == 'i' || arr[index] == 'o' ||
        arr[index] == 'u'){
        printf("%d ",index);
        }
    }
    return 0;

}
