#include <stdio.h>
#include <stdlib.h>

const int H = 3;
const int W = 3; // size playground
char myPlayground[3][3];
void init_playground(void);

int main(void)
{
	printf("Hellooo \n");
	init_playground();
	return 0;
}

void init_playground(void)
{
	for (int i = 0; i < 3; ++i)
	{
		/* code */
		for(int y = 0; y < W; ++y)
		{
			printf("*");
		}
		printf("\n");
	}
}