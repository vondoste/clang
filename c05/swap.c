#include <stdio.h>

void swap(int *px, int *py);

int main() {
    int x = 5309;
    int y = 867;
    printf("x= %d y= %d\n", x, y);
    swap(&x, &y);
    printf("x= %d y= %d\n", x, y);
    return 0;
}

/* interchange *px and *py */
void swap(int *px, int *py) {
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

