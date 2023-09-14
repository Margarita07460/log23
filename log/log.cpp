#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int* a;
int n, m;
int i, j;
int s[100][100]; 


void main() {
	srand(time(NULL));

	setlocale(0, "rus");
	printf("Введите количество строк\n");
	scanf("%d", &n);
	printf("Введите количество столбцов\n");
	scanf("%d", &m);
	printf("\n");

	a = (int*)malloc(n * m * sizeof(int));

	printf("Массив:\n");

	for (i = 0; i < n; i++) { 
		for (j = 0; j < m; j++) {
			a[i * m + j] = rand() % 100;
			printf("%5d ", a[i * m + j]);
		}
		printf("\n");
	}
	printf("\n");


	int min = a[m]; 
	int max = a[m]; 

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (a[i * m + j] > max) {
				max = a[i * m + j];
			}

			if (a[i * m + j] < min) {
				min = a[i * m + j];
			}
		}
	}

	printf("Min: %d\n", min);
	printf("Max: %d\n\n", max);
	printf("Разница между минимальным и максимальным элументами %d\n\n", max - min);



	int p = 0; 
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			s[0][p] += a[i * m + j];
		}
		p++;
	}


	printf("Сумма столбцов:\n");
	for (p = 0; p < m; p++) {
		printf("%5d ", s[0][p]);
	}
	printf("\n");

	free(a);

}