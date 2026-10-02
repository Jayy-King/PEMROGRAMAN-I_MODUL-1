#include <stdio.h>

int main() {
    int pasukan_yuzhong = 958730;
    char *pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    int jumlah_pahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);
    
    int pasukan_per_pahlawan = pasukan_yuzhong / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_yuzhong);
    printf("Pahlawan yang dikirim: ");
    for (int i = 0; i < jumlah_pahlawan; i++) {
        printf("%s", pahlawan[i]);
        if (i < jumlah_pahlawan - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);

    return 0;
}