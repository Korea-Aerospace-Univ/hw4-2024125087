#include <stdio.h>  

int main(void)
{
    int answer;      // 정답 값을 저장할 변수
    int guess;       // 입력하는 guess 값을 저장할 변수
    int count = 0;   // 몇 번 시도했는지 세는 변수 

    scanf("%d", &answer);   // 정답 숫자를 입력받아서 answer에 저장

    do
    {
        scanf("%d", &guess); // 추측한 숫자를 입력받아서 guess에 저장
        count++;             // 시도 횟수를 1 증가

        /*대소 관계를 출력*/
        if (guess > answer)          // 추측값이 정답보다 크면
        {
            printf("%d>?\n", guess); // "입력값 > ?" 형태로 출력 
        }
        else if (guess < answer)     // 추측값이 정답보다 작으면
        {
            printf("%d<?\n", guess); // "입력값 < ?" 형태로 출력
        }
        else                         // 추측값이 정답과 같으면
        {
            printf("%d==?\n", guess);// "입력값 == ?" 형태로 출력
        }

    } while (guess != answer); // 정답을 맞출 때까지 반복

    printf("%d\n", count);     // 총 몇 번 시도했는지 출력
    
    return 0;                  // 종료
}
