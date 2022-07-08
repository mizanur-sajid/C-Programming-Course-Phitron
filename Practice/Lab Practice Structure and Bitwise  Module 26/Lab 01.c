#include<stdio.h>
struct Result{
    int vagfol;
    int vagses;
};

struct Result divided(int x, int y){
    return (struct Result) {x/y, x%y};
}

int main(){
    int a = 10, b = 3;

    struct Result result = divided(a,b);
    printf("%d %d\n", result.vagfol,result.vagses);
}
