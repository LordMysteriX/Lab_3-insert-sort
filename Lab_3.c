#include "pch.h"
#include <stdio.h>


int main() {


	int x[5][5];
	for (int i = 0; i < 5; i++) {
		for (int z = 0; z < 5; z++) {
			scanf_s("%d", &x[i][z]);

		}
	}

	for (int i = 0; i < 5; i++) {
		for (int z = 1; z < 5; z++) {
			int g = x[z][i];
			for (int k = z - 1; k >= 0; k--) {
				if (x[k][i] < g) {
					x[k + 1][i] = x[k][i];
						if (k == 0) {
							x[k][i] = g;
						}
				}
				else {
					x[k + 1][i] = g;
					break;
				}
			} 
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (int z = 0; z < 5; z++) {
			printf("%d	", x[i][z]);
		}
	}
	printf("\n");
	printf("=====================>");

	int m = 0, b = 1;
	for (int i = m + 1; i < b + 1; i++) {
		for (int z = 0; z < 1; z++) {
			int res_1 = x[1][0];
			int res_2 = x[2][0] * x[2][1];
			int res_3 = x[3][0] * x[3][1] * x[3][2];
			int res_4 = x[4][0] * x[4][1] * x[4][2] * x[4][3];
			printf("\n");
			printf("res 1: %d\n", res_1);
			printf("res 2: %d\n", res_2);
			printf("res 3: %d\n", res_3);
			printf("res 4: %d\n", res_4);
			printf("res 5: %d\n", res_1 + res_2 + res_3 + res_4);
		}
	}
}






