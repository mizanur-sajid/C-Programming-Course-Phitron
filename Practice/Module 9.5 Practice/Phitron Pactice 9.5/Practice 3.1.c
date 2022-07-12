/*1, 3, 5, 7, 9, 11 ….., 99 (১ থেকে ১০০ পর্যন্ত বিজোড় সংখ্যা)
1, 2, 4, 5, 7, 8, …, 100  (১ থেকে ১০০ পর্যন্ত 3 দ্বা2রা বিভাজ্য নয় এমন সংখ্যা)

#include<stdio.h>
int main()
{
    int a=1;
    while(a<=100){
        a+=2;
        printf("%d\n",a-2);

    }
}


#include<stdio.h>
int main()
{
  int i=0;
  while(i<=100){
    i++;
    if(i%3 == 0)    continue;
    printf("%d\n",i);
  }
}
*/
#include<stdio.h>
int main()
{
    int i=0;
    while(i<=60){
        i++;
        if(60%i ==0)      continue;
        printf("%d\n",i);
    }
}

