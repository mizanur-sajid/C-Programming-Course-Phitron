 /*a.1
     22
     333
     4444

#include<stdio.h>
int main()
{
    int rows=4;
    int j=1;
    int i = 1;

    while(i<=rows){
        j=1;
    while(j<=i){
        printf("%d",i);
        j++;
    }
    i++;
    printf("\n");
    }
    return 0;
}
*
**
***
****
#include <stdio.h>

int main()
{
  int Rows, i = 1, j;
  char Ch;

  printf("Please Enter any Symbol\n");
  scanf("%c", &Ch);

  printf("Please Enter the Number of Rows:  ");
  scanf("%d", &Rows);

  printf("\nPrinting Right Angled Triangle \n \n");
  while ( i <= Rows)
  {
     for ( j = 1 ; j <= i; j++ )
     {
  	printf("%c", Ch);
     }
     printf("\n");
     i++;
  }
  return 0;
}

1
23
456
78910
*/
#include<stdio.h>
int main()
{
    int i=1;
    int j= 1;
    int rows=4;
    int count = 1;
    while(i<=rows){
        j=1;
    while(j<=i){
        printf("%d",j);
        j+=1;
    }
    i++;
    printf("\n");
    }
}



















