#include <stdio.h>

int sayi, puan;
char ders[10];

void cift_mi() {
    printf("\n Ders giriniz: ");
    scanf("%s", ders);
    printf("\n %s dersini girdiniz", ders);

    printf("\n %s dersinin puanýný giriniz: ", ders);
    scanf("%d", &puan);
    printf("\n %s dersinden %d puan aldiniz", ders, puan);
    printf("\n-----------------------------------------------\n");

    if (puan < 45)
        printf("%s dersinden malesef kaldiniz \n", ders);
    else if (puan == 45)
        printf("%s dersinden kýlpayý geçtiniz \n", ders);
    else if (puan > 45)
        printf("%s dersini geçtiniz \n", ders);
}

int main() {
    while (1) {
        cift_mi();
    }
    return 0;
}

