/*void makeNArray(int n, int squares[]) populates squares with first n square numbers.
For example, makeNarray(4, squares) will populate squares with 1, 4, 9, 16. Implement the function.
- void makeNArray(int n, int squares[])ফাংশনটি 1 থেকে n পর্যন্ত সংখ্যাগুলোর বর্গ squares নামক এরে তে রাখবে।
যেমন, makeNArray(4, squares)ফাংশন টি 1,4,9,16 উৎপন্ন করে squares এরে তে রাখবে। এই ফাংশন টি তৈরি করুন।*/

#include<stdio.h>

void makeNArray(int n, int squares[]){

    for(int i=1;i<=n;i++){
    printf("%d ",squares[i]);
}
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[100];
    for(int i = 1;i<=n;i++){
        arr[i] = i * i;
    }
    makeNArray(n,arr);
    return 0;
}
