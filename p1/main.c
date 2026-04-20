#include <stdio.h>

int main(void)
{
    int answer;
    int guess;
    int count = 0;
    //정답을 입력받고 answer에 저장
    
    scanf("%d", &answer);
    
    do
    {
        //정수를 스캔하고 시도횟수에 1 더하기
        scanf("%d", &guess);
        count++;
        //대소 관계를 출력
        if (guess > answer)
        {
            printf("%d>?\n", guess, guess);
        }
        else if (guess < answer)
        {
            printf("%d<?\n", guess, guess);
        }
        else
        {
            printf("%d==?\n", guess, guess);
        }
    //guess랑 answer이랑 같아지면 반복종료
    } while (guess != answer);
    //시도횟수 출력
    printf("%d\n", guess, count);

    return 0;
}
