#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
    int i;
    int score[SIZE];
    int sum = 0;

    printf("Enter 5 scores.\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    printf("Average score: %d\n", sum / SIZE);

    return 0;
}