#include<stdio.h>
#include<string.h>
int main()
{
    int a;//declaring a variable
    scanf("%d",&a);//taking input
    char str[a];//declaring a string
    int zero=0,one=0;//declaring two variables
    scanf("%s",str);//taking input
    str[strlen(str)]='\0';//adding null character at the end of the string
    for(int i=0;i<a;i++){//loop to count the number of zeros and ones
        if(str[i]=='n'){//if the character is n
            one++;//incrementing the value of one
        }
        else if(str[i]=='z'){//if the character is z
           zero++;//incrementing the value of zero
        }
    }
    for(int i=0;i<one;i++){//loop to print the number of ones
        printf("1 ");//printing 1
    }
    for(int i=0;i<zero;i++){//loop to print the number of zeros
        printf("0 ");//printing 0
    }

    return 0;
}
