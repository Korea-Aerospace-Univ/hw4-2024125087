#include <stdio.h>

int main(void)
{
    int N;                  // 문자열 길이 저장
    char str[N+1];          // 문자열 저장 ( N개 + '\0')

    int i; 

    int count_alpha = 0;    // 연속된 알파벳 개수
    int max_alpha = 0;      // 알파벳 최대 연속 개수
    int count_num = 0;      // 연속된 숫자 개수
    int max_num = 0;        // 숫자 최대 연속 개수

    scanf("%d", &N);        // 문자 개수 입력
    scanf("%s", str);       // 문자열 입력

    // 문자열을 앞에서부터 하나씩 진행
    for (i = 0; i < N; i++)
    {
        // 현재 문자가 알파벳(소문자)면 알파벳 연속 개수에 1 더하기
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count_alpha++; 

            // 지금까지 최대값보다 크면 갱신
            if (count_alpha > max_alpha)
                max_alpha = count_alpha;

            count_num = 0;  // 숫자는 끊겼으니까 0으로 초기화
        }
        // 현재 문자가 숫자인 경우
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count_num++;    // 숫자 연속 개수 증가

            // 최대값 갱신
            if (count_num > max_num)
                max_num = count_num;

            count_alpha = 0; // 알파벳은 끊겼으니까 연속 개수 0으로 초기화
        }
    }

    // 지금까지 갱신된 각각의 최대 연속 개수를 출력 
    printf("%d\n", max_alpha);
    printf("%d\n", max_num);

    return 0;
}
