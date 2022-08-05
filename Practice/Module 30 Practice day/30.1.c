/**
There is a bug in the code of Module Video 29-5. You will not get the correct result when you try to add “999” and “222”.
Find that problem and try to think how the problem will be solved.
**/
#include<stdio.h>
int main()
{
    char a[100],b[100],jogfol[101],c[101],d[101];//declaring the variable
    scanf("%s %s",&a,&b);//taking the input
    strcpy(c,a);//copying the first number to c
    strrev(c);//reversing the first number
    strcpy(d,c);//copying the first number to d
    strcpy(c,b);//copying the second number to c
    strrev(c);//reversing the second number
    strcpy(b,c);//copying the second number to b
    int i=0,j=0,k=0,hate=0;//declaring the variable
    while(i<strlen(d) && j<strlen(b)){ //adding the number digit by digit
        int sum = (d[i]-'0') + (b[j]-'0')+hate;//adding the digits
        jogfol[k]=(sum%10+'0');//storing the result in jogfol
        hate=sum/10;//string the carry
        i++;//incrementing the i
        j++;//incrementing the j
        k++;//incrementing the k
    }
    while(i<strlen(d))//adding the remaining digit of the first numbers
    {
       int sum = (d[i]-'0')+hate;//adding the digits
        jogfol[k]=(sum%10+'0');//storing the  results in jogfal
        hate=sum/10;//storing the carry
        i++;//incrementing the i
        k++;//incrementing the k
    }
    while(j<strlen(b))
    {
        int sum = (b[j]-'0')+hate;
        jogfol[k]=(sum%10+'0');
        hate=sum/10;
        j++;
        k++;
    }
    if(hate!=0){
        jogfol[k]=hate+'0';
        k++;
    }
    jogfol[k]='\0';
    strrev(jogfol);
    printf("%s",jogfol);

}
