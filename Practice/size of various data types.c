#include <stdio.h>

/*
Write a C program sanf_data1.c to print the size of various data types (32-bit or 64-bit systems):
char c, *cp;
void v, *vp;
int i, *pi;
long l, *pl;
long long ll, *pll;
float f;
double df;
sizeof(100), sizeof(0xFFFFFFFF), sizeof(0xFFFFFFFFFF)
*/

int main()
{
	char c, *cp;
	short s, *sp;
	int i, *ip;
	long l, *lp;
	long long ll, *llp;
	float f;
	double df;
	//void v, *vp;
	void *vp;
	
	printf("sizeof c = %lu, %lu\n", sizeof(char), sizeof(c));
	printf("sizeof cp = %lu, %lu, %lu\n", sizeof(char *), sizeof( *cp), sizeof(cp));
	printf("sizeof s = %lu, %lu\n", sizeof(short), sizeof(s));
	printf("sizeof sp = %lu, %lu, %lu\n", sizeof(short *), sizeof(*sp), sizeof(sp));
	
	printf("sizeof i = %lu, %lu\n", sizeof(int), sizeof(i));
	printf("sizeof l = %lu, %lu\n", sizeof(long), sizeof(l));
	printf("sizeof f = %lu, %lu\n", sizeof(float), sizeof(f));
	printf("sizeof df = %lu, %lu\n", sizeof(double), sizeof(df));
	printf("sizeof vp = %lu, %lu\n", sizeof(void *), sizeof(vp));
	printf("sizeof v = %lu\n", sizeof(void ));
	printf("%lu, %lu, %lu \n", sizeof(100), sizeof(0xFFFFFFFF), sizeof(0xFFFFFFFFFF);
}
	