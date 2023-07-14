#include <stdio.h>
#include <stdlib.h>

int banknotMiktarKontrolu(double miktar, int banknotlar[], int banknot_sayisi) {
    for (int i = 0; i < banknot_sayisi; i++) {
        if (miktar == banknotlar[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int secim;
    double para = 1000.0;
    int banknotlar[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100,
                        105, 110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 165, 170, 175, 180,
                        185, 190, 195, 200, 205, 210, 215, 220, 225, 230, 235, 240, 245, 250, 255, 260,
                        265, 270, 280, 285, 290, 295, 300, 305, 310, 315, 320, 325, 330, 335, 340, 345,
                        350, 355, 360, 365, 370, 375, 380, 385, 390, 395, 400, 405, 410, 415, 420, 425,
                        430, 435, 440, 445, 450, 455, 460, 465, 470, 475, 480, 485, 490, 495, 500, 505,
                        510, 515, 520, 525, 530, 535, 540, 545, 550, 555, 560, 565, 570, 575, 580, 585,
                        590, 595, 600, 605, 610, 615, 620, 625, 630, 635, 640, 645, 650, 670, 675, 680,
                        685, 690, 695, 700, 705, 710, 715, 720, 725, 730, 735, 740, 745, 750, 755, 760,
                        765, 770, 775, 780, 785, 790, 795, 800, 805, 810, 815, 820, 825, 830, 835, 840,
                        845, 850, 855, 860, 865, 870, 875, 880, 885, 890, 895, 900, 905, 910, 915, 920,
                        925, 930, 935, 940, 945, 950, 955, 960, 965, 970, 975, 980, 985, 990, 995, 1000};
    int banknot_sayisi = sizeof(banknotlar) / sizeof(banknotlar[0]);
    double miktar;


       
       		printf("\n                                             -----------  OZDEMIR BANK  -----------\n");

       
    while (1) {
     	
    	
        printf("\n");                                                                                                                     
		printf("1- Bakiye Sorgulama\n");
        printf("2- Para Yatirma\n");
        printf("3- Para Cekme\n");
        printf("4- Cikis\n");
        printf("\nSeciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Bakiyeniz: %.2f TL\n\n", para);
                break;

            case 2:
                printf("Yatirmak Istediginiz Tutar (5, 10, 15, 20, 25, ..., 1000): ");
                scanf("%lf", &miktar);
                if (miktar < 0 || !banknotMiktarKontrolu(miktar, banknotlar, banknot_sayisi)) {
                    printf("Gecersiz miktar! Sadece listedeki banknotlarý kullanabilirsiniz.\n");
                } else {
                    para += miktar;
                    printf("\n-------------------------------------------\n");
                    printf("Yatirdiginiz Tutar: %.2f TL\n", miktar);
                    printf("Guncel Bakiyeniz: %.2f TL\n", para);
                    printf("-------------------------------------------\n");
                }
                break;

            case 3:
                printf("Cekmek Istediginiz Tutar (5, 10, 15, 20, 25, ..., 1000): ");
                scanf("%lf", &miktar);
                if (miktar < 0 || !banknotMiktarKontrolu(miktar, banknotlar, banknot_sayisi)) {
                    printf("Gecersiz miktar! Sadece listedeki banknotlarý kullanabilirsiniz.\n");
                } else if (miktar > para) {
                    printf("Yetersiz bakiye! Cekmek istediginiz tutar mevcut bakiyeden fazla.\n");
                } else {
                    
                    int banknot_200 = 0, banknot_100 = 0, banknot_50 = 0,
                        banknot_20 = 0, banknot_10 = 0, banknot_5 = 0;

                    while (miktar >= 200.0) {
                        miktar -= 200.0;
                        banknot_200++;
                    }
                    while (miktar >= 100.0) {
                        miktar -= 100.0;
                        banknot_100++;
                    }
                    while (miktar >= 50.0) {
                        miktar -= 50.0;
                        banknot_50++;
                    }
                    while (miktar >= 20.0) {
                        miktar -= 20.0;
                        banknot_20++;
                    }
                    while (miktar >= 10.0) {
                        miktar -= 10.0;
                        banknot_10++;
                    }
                    while (miktar >= 5.0) {
                        miktar -= 5.0;
                        banknot_5++;
                    }

                    para -= banknot_200 * 200.0 + banknot_100 * 100.0 +
                            banknot_50 * 50.0 + banknot_20 * 20.0 + banknot_10 * 10.0 + banknot_5 * 5.0;

                    printf("\n-------------------------------------------\n");
                    printf("200 TL Banknot Sayisi: %d adet\n", banknot_200);
                    printf("100 TL Banknot Sayisi: %d adet\n", banknot_100);
                    printf("50 TL Banknot Sayisi: %d adet\n", banknot_50);
                    printf("20 TL Banknot Sayisi: %d adet\n", banknot_20);
                    printf("10 TL Banknot Sayisi: %d adet\n", banknot_10);
                    printf("5 TL Banknot Sayisi: %d adet\n", banknot_5);
                    printf("Guncel Bakiyeniz: %.2f TL\n", para);
                    printf("-------------------------------------------\n");
                }
                break;

            case 4:
                printf("\nProgramdan cikiliyor...");
                printf("\nLutfen Herhagi Bir Tusa Basiniz...");
                return 0;

            default:
                printf("\n-------------------------------------------\n");
                printf("Yanlis Secim Yaptiniz\n");
                printf("-------------------------------------------\n");
                break;
        }
    }

    return 0;
}
