#include<stdio.h>

void input_score(char name[4][8], char subject[4][8],int score[5][5]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%s�� %s ����:", *(name + i), *(subject + j));
			scanf("%d", &score[i][j]);
		}
	}
}

void cale_total(int score[5][5]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			score[4][i] += score[j][i];
			score[i][4] += score[i][j];
		}
	}
}

void print_score(char name[4][8], char subject[4][8], int score[5][5]) {
	for (int i = 0; i < 4; i++)
	{
		printf("%s�� ����= %d\n", *(name + i), score[i][4]);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%s�� ����= %d\n", *(subject + i), score[4][i]);

	}
}

int main() {
	int score[5][5] = { 0 };//�ʱ�ȭ�ؾߵȴ� ����...
	char name[4][8] = {"����", "ö��", "��ö", "����"};
	char subject[4][8] = { "����","����", "����", "����" };

	input_score(name, subject, score);

	cale_total(score);

	print_score(name, subject, score);

}
