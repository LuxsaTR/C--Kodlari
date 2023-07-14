#include <stdio.h>

int main() {
    printf("\n                                                                             CARPIM TABLOSU\n");
    printf("\n                                                                                                                                           \n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}

