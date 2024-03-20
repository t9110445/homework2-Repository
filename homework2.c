//[-----[이지현]  [2023078007]-----]
#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType; //정수형, 실수형, 문자형 변수 선언

    printf("Size of char : %ld byte\n", sizeof(charType)); //sizeof로 chatType의 크기를 구함
    printf("Size of int : %ld bytes\n", sizeof(integerType)); //sizeof로 integerType의 크기를 구함
    printf("Size of float : %ld bytes\n", sizeof(floatType)); //sizeof로 floatType의 크기를 구함
    printf("Size of double : %ld bytes\n", sizeof(doubleType)); //sizeof로 doubleType의 크기를 구함

    printf("-------------------------------------\n");

    printf("Size of char : %ld byte\n", sizeof(char)); //sizeof로 char 자료형의 크기를 구함
    printf("Size of int : %ld bytes\n", sizeof(int)); //sizeof로 int 자료형의 크기를 구함
    printf("Size of float : %ld bytes\n ", sizeof(float)); //sizeof로 float 자료형의 크기를 구함
    printf("Size of double : %ld bytes\n", sizeof(double)); //sizeof로 double 자료형의 크기를 구함

    printf("--------------------------------------\n");

    printf("Size of *char : %ld byte\n", sizeof(char*)); //char를 가리키는 포인터의 크기를 구함
    printf("Size of *int : %ld bytes\n", sizeof(int*)); //int를 가리키는 포인터의 크기를 구함
    printf("Size of *float : %ld bytes\n", sizeof(float*)); //float를 가리키는 포인터의 크기를 구함
    printf("Size of *double : %ld bytes\n", sizeof(double*)); //double을 가리키는 포인터의 크기를 구함

    return 0;
}
