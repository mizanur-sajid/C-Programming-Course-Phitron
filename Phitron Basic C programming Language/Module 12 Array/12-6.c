//how to define rating from a array.
#include<stdio.h>
int main()
{
    int num_of_users;
    scanf("%d", &num_of_users);

    int ratings[num_of_users];
    for(int i=0;i<num_of_users;i++){
        scanf("%d",&ratings[i]);
    }
    int sum =0;
    for(int i=0;i<num_of_users;i++){
        sum += ratings[i];
   }
    double average = (double)sum/num_of_users;
    printf("Average: %lf\n",average);

    //find to counter array. how many times exits a number in the array.
    int count[6]={0};
      for (int i=0; i<num_of_users; i++){
        int x = ratings[i];
        count[x]++;
      }
      for (int i=1; i<=5; i++){
        printf("%d -> %d\n", i, count[i]);
      }
}
