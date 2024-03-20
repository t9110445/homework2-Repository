
#include <stdio.h>
int main()
{
    printf("[----- [이지현]  [2023078007] -----]");

    int i;
    int *ptr;
    int **dptr;

    i = 1234; // i에 1234 값을 할당합니다.
    
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i); // i 변수의 값 출력
    printf("address of i == %p\n", &i); // i 변수의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr 변수가 가리키는 주소 출력 
    printf("address of ptr == %p\n", &ptr); // ptr 변수의 주소 출력

    ptr = &i;  // ptr 변수에 i의 주소를 할당합니다.

    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); // i 변수의 값 출력
    printf("address of i == %p\n", &i); // i 변수의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr 변수가 가리키는 주소 출력
    printf("address of ptr == %p\n", &ptr); // ptr 변수의 주소 출력
    printf("value of *ptr == %d\n", *ptr); // ptr 변수가 가리키는 주소에 저장된 값 출력 

    dptr = &ptr; // dptr 변수에 ptr 변수의 주소를 할당합니다.

    printf("\n[checking values after dptr = &ptr] \n"); 
    printf("value of i == %d\n", i); // i 변수의 값 출력
    printf("address of i == %p\n", &i); // i 변수의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr 변수가 가리키는 주소 출력 
    printf("address of ptr == %p\n", &ptr); // ptr 변수의 주소 출력
    printf("value of *ptr == %d\n", *ptr); // ptr 변수가 가리키는 주소에 저장된 값 출력 
    printf("value of dptr == %p\n", dptr); // dptr 변수가 가리키는 주소 출력
    printf("address of dptr == %p\n", &dptr); // dptr 변수의 주소 출력
    printf("value of *dptr == %p\n", *dptr); // dptr 변수가 가리키는 주소에 저장된 값 출력 
    printf("value of **dptr == %d\n", **dptr); // dptr 변수가 가리키는 주소에 저장된 값의 주소에 저장된 값 출력

    *ptr = 7777; // ptr이 가리키는 곳에 7777을 저장합니다.

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); // i 변수의 값 출력 
    printf("value of *ptr == %d\n", *ptr); // ptr 변수가 가리키는 곳에 저장된 값 출력
    printf("value of **dptr == %d\n", **dptr); // dptr 변수가 가리키는 주소에 저장된 값의 주소에 저장된 값 출력

    **dptr = 8888; // dptr이 가리키는 곳에 8888을 저장합니다.

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); // i 변수의 값 출력 
    printf("value of *ptr == %d\n", *ptr); // ptr 변수가 가리키는 곳에 저장된 값 출력 
    printf("value of **dptr == %d\n", **dptr); // dptr 변수가 가리키는 주소에 저장된 값의 주소에 저장된 값 출력

    return 0;
}

