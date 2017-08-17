// main 
#include <stdio.h>


int feature1(char string[]);

int main(void) {
	printf("main\n");
	feature1("feature1");
	return 0;
}

// feature1
int feature1(char string[])
{
	printf("%s\n", string);
	return 0;
}
