#include <stdio.h>

int main() {
    int harga_A = 400000, harga_B = 350000;

    int akhir_A = harga_A - (harga_A * 13 / 100);
    int akhir_B = harga_B - (harga_B * 21 / 100);

    printf("Harga sepatu A adalah %d\n", harga_A);
    printf("Harga sepatu B adalah %d\n", harga_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", akhir_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", akhir_B);

    return 0;
}