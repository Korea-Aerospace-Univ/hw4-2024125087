#include <stdio.h>   

int main(void)       // 프로그램 시작
{
    int N;           // 문자열의 길이를 저장할 변수
    char str[N+1];   // 문자열을 저장할 배열

    int i;           // 반복문에서 사용할 변수

    int count_alpha = 0;  // 현재 연속된 알파벳 개수
    int max_alpha = 0;    // 지금까지 나온 알파벳 최대 연속 개수
    int count_num = 0;    // 현재 연속된 숫자 개수
    int max_num = 0;      // 지금까지 나온 숫자 최대 연속 개수

    scanf("%d", &N);      // 문자열 길이 입력받아서 N에 저장
    scanf("%s", str);     // 문자열 입력받아서 str에 저장

    for (i = 0; i < N; i++)   // 문자열의 처음부터 끝까지 하나씩 확인
    {
        // 현재 문자가 알파벳 소문자인지 확인
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count_alpha++;   // 알파벳이니까 연속 알파벳 개수 +1

            // 지금까지의 최대값보다 크면 갱신
            if (count_alpha > max_alpha)
                max_alpha = count_alpha;

            count_num = 0;   // 숫자 연속은 끊겼으니까 0으로 초기화
        }
        
        // 현재 문자가 숫자인지 확인
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count_num++;     // 숫자니까 연속 숫자 개수 +1

            // 지금까지의 최대값보다 크면 갱신
            if (count_num > max_num)
                max_num = count_num;

            count_alpha = 0; // 알파벳 연속은 끊겼으니까 0으로 초기화
        }
    }

    // 최종 결과 출력
    printf("%d\n", max_alpha); // 가장 길었던 알파벳 연속 길이 출력
    printf("%d\n", max_num);   // 가장 길었던 숫자 연속 길이 출력

    return 0;  // 종료
}
