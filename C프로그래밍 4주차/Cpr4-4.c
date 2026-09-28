#include <stdio.h>
#define STUDENT 10

int main()
{
	int score[STUDENT];
	int sum = 0;
	int i, average;

	for (i=0; i < STUDENT; i++)
	{
		printf("학생들의 성적을 입력하십시오:");
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < STUDENT; i++)
	{
		sum += score[i];
	}
	average = sum / STUDENT;
	printf("학생들의 평균 성적: %d\n", average);

	return 0;
}