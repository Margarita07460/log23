#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int col_student = 3;
int i;
int number = 1;
char tmp_find[40];
char tmp_find_save[40];



struct student
{
	char famil[20];
	char name[20];
	char facult[20];
	int Nomzach;
} stud[3];


int main() {
	SetConsoleCP(1251);
	setlocale(0, "rus");


	for (i = 0; i < col_student; i++) {
		printf("Введите фамилию %d-го студента -> ", number);
		scanf("%s", stud[i].famil);
		number++;
	}

	number = 1;
	for (i = 0; i < col_student; i++) {
		printf("Введите имя %d-го студента -> ", number);
		scanf("%s", stud[i].name);
		number++;
	}

	number = 1;
	for (i = 0; i < col_student; i++) {
		printf("Введите название факультета %d-го студента -> ", number);
		scanf("%s", stud[i].facult);
		number++;
	}

	number = 1;
	for (i = 0; i < col_student; i++) {
		printf("Введите номер зачётной книжки %d-го студента -> ", number);
		scanf("%d", &stud[i].Nomzach);
		number++;
	}

	printf("\n");

	for (i = 0; i < col_student; i++) {
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % d \n",
			stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}


	printf("\n");
	printf("Введите фамилию студента для поиска -> ");
	scanf("%s", &tmp_find);
	for (i = 0; i < col_student; i++) {
		if (strcmp(stud[i].famil, tmp_find) == 0) {
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % d \n",
				stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
	}
}