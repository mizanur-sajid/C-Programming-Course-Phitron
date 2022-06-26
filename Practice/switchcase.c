
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int8_t code;
	float r, b, h, a;
	float area;

	printf("Area calculation program\n");
	printf("Circle -->\n");
	printf("Triangle -->\n");
	printf("Trapezoid -->\n");
	printf("Square --->\n");
	printf("Rectangle -->\n");
	printf("Enter the code here: ");
	scanf("%c",&code);

	switch(code){
	case 'c':
		printf("Circle Area calculation\n");
		printf("Enter radius(r) value");
		scanf("%f",&r);
		area = 3.1415 *r *r;
		break;

	case 't':
		printf("Triangle Area calculation\n");
		printf("Enter base(b) value");
		scanf("%f",&b);
		printf("Enter height(h) value");
		scanf("%f",&h);
		area = (b * h/2);
		break;

	case 'z':
		printf("Trapezoid Area calculation\n");
		printf("Enter base1(b) value");
		scanf("%f",&a);
		printf("Enter base2(b) value");
		scanf("%f",&b);
		printf("Enter height(h) value");
		scanf("%f",&h);
		area = (a+b)/2 * h;
		break;

	case 's':
		printf("Square Area calculation\n");
		printf("Enter side(a) value");
		scanf("%f",&a);
		area = (a * a);
		break;

	case 'r':
		printf("Rectangle Area calculation\n");
		printf("Enter width(w) value");
		scanf("%f",&a);
		printf("Enter length(l) value");
		scanf("%f",&b);
		area = (a *b);
		break;

	default:
		printf("Invalid input\n");
		area = -1;
	}//end of body of switch

	if( !(area < 0) ) {
		printf("Area = %f\n",area);
	}



	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
