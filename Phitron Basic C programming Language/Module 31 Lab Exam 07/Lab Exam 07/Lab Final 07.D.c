#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int t, n, x, a[200001] = {}, e = -1, i; //declaring variables

int main() { //main function
	scanf("%d", &t); //scanning the number of test cases
	while (t--) { //loop for test cases
		e = -1; //initializing e to -1
		scanf("%d", &n); //scanning the number of elements in the array
		for (i = 0; i < n; i++) { //loop for scanning the array
			scanf("%d", &x); //scanning the array elements
			a[x]++; //incrementing the count of the element
			if (a[x] > 2) //checking if the count of the element is greater than 2
				e = x; //if yes, then the element is the answer
		}
		printf("%d\n", e);
	}
	return 0;
}

