//Define the length charecter
#include<stdio.h>
int main()
{
    char a[10] = "ab";
    char b[100] = "cd";

//    int lena = strlen (a);
//    int lenb = strlen (b);
//
//    int lenc = lena + lenb;
//    char c [lenc+1];
//
//    for (int i= 0;i<lena;i++){
//        c[i] = a[i];
//    }
//    for (int i= 0;i<lena;i++){
//        c[lena+i] = b[i];
//    }
//    c[lena + lenb] = '\0';
//    printf("%s",c);
//      strncat(a,b, 4);
//      a[9]='\0';
//      printf("%s ",a);
        strcat(a,b);
        printf("%s",b);
}
