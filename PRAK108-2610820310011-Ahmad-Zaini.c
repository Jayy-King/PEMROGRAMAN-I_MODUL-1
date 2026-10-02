#include <stdio.h>

int main() {
    float putaran = 5.0;
    float jarak = 14.0;
    
    float keliling_1_putaran = jarak / putaran;
    float phi = 3.141592653589793;
    float r = keliling_1_putaran / (2 * phi);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}