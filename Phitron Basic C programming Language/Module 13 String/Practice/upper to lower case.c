 #include <stdio.h>
 int main()
 {
     char country[4];
     int i;
     scanf("%s\n", country);
     //length = 10;
     for(i = 0; i < country; i++) {
         if(country[i] >= 97 && country[i] <= 122) {
             country[i] = 'A' + (country[i] - 'a');
         }
     }
     printf("%s\n", country);
     return 0;
 }
