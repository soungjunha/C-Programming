#include<stdio.h>

void input_score(char name[4][8], char subject[4][8],int score[5][5]) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%s의 %s 점수:", *(name + i), *(subject + j));
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
		printf("%s의 총점= %d\n", *(name + i), score[i][4]);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%s의 총점= %d\n", *(subject + i), score[4][i]);

	}
}

int main() {
	int score[5][5] = { 0 };//초기화해야된다 ㅅㅂ...
	char name[4][8] = {"영희", "철수", "영철", "영수"};
	char subject[4][8] = { "국어","영어", "수학", "과학" };

	input_score(name, subject, score);

	cale_total(score);

	print_score(name, subject, score);

}
