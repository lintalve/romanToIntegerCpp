#include <cstdio>
#include <cstdlib>

int main(){

    int length = 10;
    int digit;
    printf("enter a digit \n");
    scanf("%i", &digit);

    void* raw_mem = malloc(sizeof(int)*length);
    printf("%p \n", raw_mem);
    int i = 0;
    while(i< length-1){  //you can push iterator out of the clause
        printf("%p \n", (int*)raw_mem + i);   //you can't perform pointer arifmetic on a void*
        int* intPtr = (int*)raw_mem + i;
        *intPtr = rand();
        *intPtr = digit % 10;
        digit /= 10;
        printf("%u \n", length - (*intPtr));
        i++;
    }


    return 0;
}