#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],f,*s=a+1;//declaring variables
    for(gets(a);*s;)f|=*s++>96;//getting input and checking if it is in lower case
    for(s=a;*s;)*s++^=!f*32;//converting to upper case
    puts(a);//printing the output

}
}
