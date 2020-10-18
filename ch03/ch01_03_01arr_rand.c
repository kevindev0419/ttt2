#include <stdio.h> //printf() scanf()
#include <stdlib.h> //rand()
#include <time.h> //time()

// 데이터 묶음 배열 선언 및 사용
// 외부라이브러리 사용방법
// 연산자 이해
// 반복문 두번째 복습

//5이상 10미만
void main()  //entry point
{
    srand(time(NULL)); 
    int arr0[10]; //배 열선언
    for(int i =0; i<10; i++)
    {
        arr0[i] = rand()%5 +5; //%연산자 활용방법 배열값 대입
        //printf("%d ",rand()%5 +5);  
    }
    //printf("\n");

    printf("rand arr[5~9] : ");
    for(int i=0; i<10; i++)
    {
        printf("%d ",arr0[i]);  //배열값 참조
    }
    printf("\n");
}
