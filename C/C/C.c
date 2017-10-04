#include "stdafx.h"
#include <stdio.h>

const int array1[] = {1,3,5,7,9};
const int array2[] = {0,2,4,6,8};

int array_sum(const int * first_array, const int * second_array, const size_t count) {	
	int sum = 0;
	for (size_t i = 0; i < count; i++) {
		sum = sum + first_array[i]*second_array[i];
	}
	return sum;
}

int is_prime(const unsigned long n) {
	int result = 1;
	for (int i = 2; i<n/2; i++) {
		if (!n%i){
			result = 0;
			break;
		}
	}
	return result;
}

int main( int agc, char** argv) {
	unsigned long input;
	printf("Give me the number!\n");
	int right_input=scanf_s("%lu", &input);
	if(right_input){
		if (is_prime(input)){
			printf("The number %d is prime\n", input);
		}else {
			printf("The number %d is not prime\n", input);
		}
	}
	else {
		printf("wrong input\n");
	}

	printf("The scalar product is: %d\n", array_sum(array1,array2,sizeof(array1)/sizeof(int)));
	return 0;
}