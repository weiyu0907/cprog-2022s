#include <stdio.h>

int main() {
    int x,y;

    x=1;
    while(x<=9) {
        y=1;
        while(y<=9) {
            printf("%4d",x*y);
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;
}