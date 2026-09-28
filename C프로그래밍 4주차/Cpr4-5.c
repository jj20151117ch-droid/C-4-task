#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 10

int main()
{
    char ans1;
    int ans2, i;
    int seats[SIZE] = { 0 };

    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는n) ");
        scanf(" %c", &ans1);

        if (ans1 == 'n')
            break;
        if (ans1 != 'y')
        {
            printf("y 또는 n만 입력하세요.\n");
            continue;
        }

        printf("-------------------------------\n");
        printf("  1  2  3  4  5  6  7  8  9  10\n");
        printf("-------------------------------\n");

        for (i = 0; i < SIZE; i++)
            printf("  %d", seats[i]);
        printf("\n");

        printf("몇 번째 좌석을 예약하시겠습니까 ");
        scanf("%d", &ans2);

        if (ans2 < 1 || ans2 > SIZE)
        {
            printf("1~%d 사이의 번호를 입력하세요.\n", SIZE);
            continue;
        }

        if (seats[ans2 - 1] == 0)   // 예약되지 않았으면
        {
            seats[ans2 - 1] = 1;
            printf("예약되었습니다.\n");
        }
        else                        // 이미 예약되었으면
            printf("이미 예약된 자리입니다.\n");
    }
    return 0;
}