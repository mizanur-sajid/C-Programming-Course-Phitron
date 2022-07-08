//How to return function value from structure.
#include<stdio.h>
struct ArrayHolder{
    int array[100]; //We need to know the size of array
};

struct ArrayHolder makeNarray(int n){
    struct ArrayHolder ans;
    for(int i=0;i<n;i++){
        ans.array[i]=i+1;
    }
    return ans;
}
int main()
{
    int n=10; //It has a problem, we should decleard the array size, we can not take the array size instance.
    //scanf("%d",&n);

    struct ArrayHolder ans = makeNarray(n);
    for(int i=0;i<n;i++){
        printf("%d ", ans.array[i]);
    }
}
