// #include <stdio.h>
#include <string.h>


// Exercise 1: Declaring some struct typedefs
typedef struct {
	int numerator, denominator;
	double value;
	char test_string[140];
} ratio_s;


ratio_s new_ratio(int num, int den) {
	return (ratio_s) {.numerator=num, .denominator=den, .value=num/(double)den};
}


void define_string(char* a) {

	printf("%s\n", a);
	// Create a new type 
	ratio_s new_ratio = (ratio_s){.test_string="TEST"};
	printf("%s\n", new_ratio.test_string);
	// char copy[140];
	// strncpy(copy,a,140);
	// strncpy((ratio_s) {.test_string},a,140);
	// return (ratio_s) {.test_string};
}


int main() {

	printf("Hello, world!\n");

	// Exercise 0: Declaring some variables.
	int integer_1 = 0;
	int integer_2 = 1000000;
	int integer_3 = 900000;

	double double_1 = 0.30;
	double double_2 = 0.50;
	double double_3 = 0.20;

	float float_1 = 0.0001;
	float float_2 = 0.1001;
	float float_3 = 0.0101;

	char evr_1[] = "EVR WARNING LO";
	char evr_2[] = "EVR WARNING FATAL";
	char evr_limited[140] = "TEST";

	// Exercise : How much space does a type take?

	//	Integers
	printf("Size of integer_1: %zu\t", sizeof(integer_1));
	printf("\n");
	printf("Size of integer_2: %zu\t", sizeof(integer_2));
	printf("\n");
	printf("Size of integer_3: %zu\t", sizeof(integer_3));
	printf("\n");
	printf("Size of integer_2 + integer_3: %zu\t", sizeof(integer_2 + integer_3));
	printf("\n");

	//	Doubles
	printf("Size of double_1: %zu\t", sizeof(double_1));
	printf("\n");
	printf("Size of double_2: %zu\t", sizeof(double_2));
	printf("\n");
	printf("Size of double_3: %zu\t", sizeof(double_3));
	printf("\n");

	//	Floats
	printf("Size of float_1: %zu\t", sizeof(float_1));
	printf("\n");
	printf("Size of float_2: %zu\t", sizeof(float_2));
	printf("\n");
	printf("Size of float_3: %zu\t", sizeof(float_3));
	printf("\n");

	//	Char Arrays, or Strings
	printf("Size of evr_1, not including NULL byte: %zu\t", sizeof(evr_1));
	printf("\n");
	printf("Size of evr_2, not including NULL byte: %zu\t", sizeof(evr_2));
	printf("\n");
	printf("Size of evr_limited, not including NULL byte: %zu\t", sizeof(evr_limited));
	printf("\n");


	ratio_s two_thirds_ratio = new_ratio(2,3);
	printf("Size of two_thirds_ratio: %zu\t", sizeof(two_thirds_ratio));
	printf("\n");

	define_string("TESTING");
	// printf("Size of stringified: %zu\t", sizeof(stringified));
	printf("\n");

	//	Printing Variable Values
	// printf("stringified test string value: %s\t", two_thirds_ratio.test_string);
	printf("\n");

}