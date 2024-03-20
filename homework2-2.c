
#include <stdio.h>
int main()
{
    printf("[----- [이지현]  [2023078007] -----]");
    int i;
    int *ptr;
    int **dptr;

    i = 1234;
    
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i); 
    printf("address of i == %p\n", &i); 
    printf("value of ptr == %p\n", ptr); 
    printf("address of ptr == %p\n", &ptr);

    ptr = &i; /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); 
    printf("address of i == %p\n", &i); 
    printf("value of ptr == %p\n", ptr); 
    printf("address of ptr == %p\n", &ptr); 
    printf("value of *ptr == %d\n", *ptr);

    dptr = &ptr;

    printf("\n[checking values after dptr = &ptr] \n"); 
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr); 
    printf("address of ptr == %p\n", &ptr); 
    printf("value of *ptr == %d\n", *ptr); 
    printf("value of dptr == %p\n", dptr); 
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);
    printf("value of **dptr == %d\n", **dptr);

    *ptr = 7777;

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); 
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    **dptr = 8888;

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); 
    printf("value of *ptr == %d\n", *ptr); 
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}
