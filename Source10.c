#pragma warning (disable:4996)
#include <stdio.h>
#define length 50
int main() {

	FILE* file;
	file = fopen("file.txt", "r");
	char arr[length];
	float a;
	float value = 0;
	double count = 0;
	float  sum = 0;
	float sum1;

	fgets(arr, length, file);
	sscanf(arr, "%f", &a);

	for (count = 0; count < a; count++) {
		if (feof(file) != 1 && fgets(arr, length, file) != NULL) {
			sscanf(arr, "%f", &value);
			sum += value;
		}
	}
	if (file == NULL) {
		printf("No such file was found :(");
		return 0;
	}




	if (count != a) {
		printf("Error! Tried to read %.0f numbers, %0.f numbers were read.\n", a, count);
		return 0;
	}
	sum1 = (float)sum / a;
	printf("Average is: %.3f", sum1);


	fclose(file);

	return 0;
}
