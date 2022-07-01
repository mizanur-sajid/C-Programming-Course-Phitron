#include <stdio.h>
#include<stdbool.h>
int main()
{
    int t, s, a, p;
    bool fail=false;
     float grade=0;
      printf("Enter number of terms: ");
       scanf("%d",&t);
     for (int j = 0; j < t; j++)
     {  printf("Enter number of Subjects: ");
         scanf("%d",&s);
          int sum=0;
    for (int i = 0; i < s; i++)

    {  printf("Enter Marks Subject %d :",i+1);
           scanf("%d",&a);

        if (a >= 80 && a <= 100)
        {
            p = 5;
        }
        else if (a >= 70 && a < 80)
        {
            p = 4;
        }
        else if (a >= 60 && a < 70)
        {
            p = 3;
        }
        else if (a >= 50 && a < 60)
        {
            p = 2;
        }
        else if (a >= 40 && a < 50)
        {
            p = 1;
        }
        else
        { fail=true;
            p = 0;
        }
        sum+=p;
    }
    if (fail)
    {
       printf("fail\n");
       grade=0;

    }
    else{
       printf("sum %d,subject %d\n",sum,s);
     grade+=(float)sum/(float)s;
    printf("grade %d : %f\n ",t+1,grade);
    }

     }
     float cgpa;
     if (fail)
     {
       cgpa=0;
     }
     else{
         cgpa=grade/t;

     }


    printf("cgpa is %.2f",cgpa);
    return 0;
}
