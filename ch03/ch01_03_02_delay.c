#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include  <windows.h> //delay 함수

void main()
{
    srand(time(NULL)); //rand() 사용전에 초기화 
    srand(3); // 임의값 초기화
    //5이상 10미만인 자연수를 랜덤하게 배열에 담아보자.       
    int arr0[10];
    for(int i=0; i<9; i++)    
        arr0[i] = rand() % 5  + 5;        //0~3만 사이의값
    
    printf("rand arr[5~9] : ");
    for(int i=0; i<9; i++)
    {
        printf("%d ", arr0[i]);
        Sleep(1000);
    }
    printf("\n");    
}