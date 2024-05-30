#include<stdio.h>
#include<string.h>

void input_name(int* stdt_num, char stdt_name[10][20]) {
	scanf("%d ", stdt_num);
	for (int i = 0; i < *stdt_num; i++)
	{
		gets_s(stdt_name[i], 20);
	}
}

void input_score(char stdt_name[20], char sub_name[4][8], int score[5]) {

	for (int j = 0; j < 4; j++)
	{
		printf("%s의 %s점수:", stdt_name, sub_name[j]);
		scanf("%d", &score[j]);
	}

}

void cale_total(int num, char stu[10][20], char sub[4][8], int score[11][5], int f) {
	if (f) {
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				score[i][4] += score[i][j];
			}
		}
	}
	else {
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < num; j++)
			{
				score[num][i] += score[j][i];
			}
		}
	}
}

void print_score(int num, char stu[10][20], char sub[4][8], int score[11][5]) {
	char name[20];
	scanf(" %s", name);

	for (int i = 0; i < num; i++)
	{
		if (!strcmp(stu[i], name))
		{
			printf("%s의 총점: %d", stu[i], score[i][4]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (!strcmp(sub[i], name))
		{
			printf("%s의 총점: %d", sub[i], score[num][i]);
		}
	}

}

int main() {
	int student_num = 0;
	int score[11][5] = { 0 };
	char student_name[10][20] = { 0 };
	char subject_name[4][8] = { "국어","수학","영어","과학" };
	int suborstu;
	char name[20];

	input_name(&student_num, student_name);
	for (int i = 0; i < student_num; i++)
	{
		input_score(student_name[i], subject_name, score[i]);
	}
	printf("학생의 총점과 과목 총점준 무엇을 원하는가?\n 1.학생  2. 과목\n");
	scanf("%d", &suborstu);
	cale_total(student_num, student_name, subject_name, score, suborstu - 1);
	print_score(student_num, student_name, subject_name, score);

}
