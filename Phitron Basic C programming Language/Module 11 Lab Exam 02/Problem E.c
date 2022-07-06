#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x,d1,d2,s1,s2;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);

    if(x%(a+c)>a){
        s1=(x/(a+c))*a+a;
    }else{
        s1=(x/(a+c))*a+(x%(a+c));
    }
    d1=s1*b;

    if(x%(d+f)>d){
        s2=(x/(d+f))*d+d;
    }else{
        s2=(x/(d+f))*d+(x%(d+f));
    }
    d2=s2*e;

    if(d1>d2)
        printf("Takahashi\n");
    else if(d2>d1)
        printf("Aoki\n");
    else
        printf("Draw\n");
    return 0;
}
