#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int col_student = 3;
int i;
int number = 1;
char tmp_find[40];
char tmp_find_save[40];
char ch;





struct student
{
	char famil[20];
	char name[20];
	char facult[20];
	char Nomzach[20];
}   stud[3];


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
		scanf("%s", &stud[i].Nomzach);
		number++;
	}

	printf("\n");

	/*for (i = 0; i < col_student; i++) {
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % d \n",
			stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}*/


	printf("\n");

	do {
		system("cls");
		printf("МЕНЮ:\n");
		printf("1 - Поиск по фамилии\n");
		printf("2 - Поиск по имени\n");
		printf("3 - Поиск по названию факультета\n");
		printf("4 - Поиск по номеру зачетной книжки\n");

		printf("ecs - выход\n");


		ch = _getch();

		switch (ch) {
		case '1':
			system("cls");
			printf("Ведите фамилию студента\n ");
			scanf("%s", &tmp_find);
			printf("\n");
			for (i = 0; i < col_student; i++) {
				if (strcmp(stud[i].famil, tmp_find) == 0) {
					printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % s \n",
						stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
				}

			}



			system("pause");
			break;
		}


		switch (ch) {
		case '2':
			system("cls");
			printf("Введите имя студента\n ");
			scanf("%s", &tmp_find);
			printf("\n");
			for (i = 0; i < col_student; i++) {
				if (strcmp(stud[i].name, tmp_find) == 0) {
					printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % s\n ",
						stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
				}

			}



			system("pause");
			break;
		}

		switch (ch) {
		case '3':
			system("cls");
			printf("Введите название факультета, на котором обучается студент\n ");
			scanf("%s", &tmp_find);
			printf("\n");
			for (i = 0; i < col_student; i++) {
				if (strcmp(stud[i].name, tmp_find) == 0) {
					printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % s\n",
						stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
				}

			}



			system("pause");
			break;
		}


		switch (ch) {
		case '4':
			system("cls");
			printf("Введите номер зачетной книжки студента\n");
			scanf("%s", &tmp_find);
			printf("\n");
			for (i = 0; i < col_student; i++) {
				if (strcmp(stud[i].Nomzach, tmp_find) == 0) {
					printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки % s\n ",
						stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
				}

			}



			system("pause");
			break;
		}
		


	} while (ch != 27);

}