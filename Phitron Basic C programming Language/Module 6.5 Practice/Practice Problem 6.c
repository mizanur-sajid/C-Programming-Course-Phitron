/*Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data : 42
Expected Output : Its very hot.
*/
#include<stdio.h>
int main()
{
    int Temp;
    scanf("%d",&Temp);
    if(Temp < 0){
        printf("Freezing wweather");
    }
    else if(0<=Temp && Temp < 10){
        printf("Very Cold weather");
    }
    else if(10<=Temp && Temp<20){
        printf("Cold weather");
    }
    else if(20<=Temp && Temp <30){
        printf("Normal in Temp");
    }
    else if(30<=Temp && Temp<40){
        printf("Its Hot");
    }
    else
    {
        printf("Its very hot");
    }
    return 0;
}
