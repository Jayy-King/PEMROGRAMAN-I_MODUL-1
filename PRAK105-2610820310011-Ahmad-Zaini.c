#include <stdio.h>

int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    int sisa_ab = a % b; // 9 % 5 = 4
    int sisa_xy = x % y; // 8 % 8 = 0
    int total = sisa_ab + sisa_xy;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total);

    return 0;
}