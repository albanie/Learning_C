#include <stdio.h>

void f1() {
    int i;
    int array[100];

    for (i=0; i<100;i++) {
        array[i] = i;
    }
}

void f2() {
    int x = 17;
    float array[10];
    int y = 123;

    printf("%d\n", array[-2]);
    printf("%d\n", array[-1]);
    printf("%d\n", array[10]);
    printf("%d\n", array[11]);
}

int main()
{
    f1();
    f2();    
}
