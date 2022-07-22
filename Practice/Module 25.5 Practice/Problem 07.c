/**Complete the implementation of the toBinary function. Remember that it had the signature
void toBinary(unsigned int val, char str[], int k)
The function stores the binary representation of val in str as a k bit binary number.
**/
//1. We are passing the value of v, str and k to the function toBinary.
//2. In the function, we are initializing k = 0.
//3. Then we are using a while loop to convert the decimal number into binary.
//4. We are storing the binary number in str[].
//5. Then we are reversing the string and printing it.
#include <stdio.h>
#include <string.h>
void toBinary(unsigned int val, char str[], int k)
{
    k = 0;
    while (val > 0)
    {
        int digit = val % 2;
        val /= 2; // val = val/2
        str[k] = '0' + digit; // str[k] = '0' + val%2
        k++;                // k++
    }
    str[k] = '\0';
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    char str[100];
    unsigned int v = 23;
    int k;
    toBinary(v, str, k);
    printf("%s\n", str);
}
