#include <stdio.h>  
int main(void){
	int max = 0;
	int min = 0;
	printf("min and max : ");
	scanf("%d %d", &min, &max);
	for (int i = min; i < max; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d X %d=%d\n", (i), (j + 1), ((i) * (j + 1)));

		}

	}

	return 0;

	
	



	return 0;

}
