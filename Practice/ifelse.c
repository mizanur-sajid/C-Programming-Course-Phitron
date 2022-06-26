#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int32_t num1, num2;

	printf("Enter the number here : ");
	scanf("%d",&num1);

	printf("Enter the number here : ");
	scanf("%d",&num2);

	if(num1 == num2){
		printf("Both number are equal.\n");
	}

	else if(num1 > num2){
		printf("Number1 is bigger then number2\n");
	}

	else{
		printf("Number2 is bigger then number1\n");
	}


	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
