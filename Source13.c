#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define length 200
int main(void) {

	int g;
	char a[length];
	int i = 0;
	FILE* file;
	char* dyn;
	file = fopen("file.txt", "w");

	while (strcmp(dyn, ".\n") != 0) {
		dyn = (char*)malloc(16 * sizeof(char));
		printf("Type in a string, please: ");
		scanf("%[^.]%*c", dyn);
		break;
	}
	g = strlen(dyn);

	//used this loop to find the length of the line
   /* for(i=0;i<63;i++){
	  fgets(a,length,file);
	  dyn = (char *)realloc(dyn, i + 16 * sizeof(char) );
	  strcat(dyn, " ");
	}
   */

	dyn = (char*)realloc(dyn, 63 + 16 * sizeof(char));

	if (strlen(dyn) <= 79) {
		fprintf(file, "%d:%s\n", g, dyn);
	}
	else {
		printf("Some Error occured, please check if the length of your string does not exceed the limit of the line(79 characters)");
	}

	free(dyn);
	fclose(file);

	return 0;
}