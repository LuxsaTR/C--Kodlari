#include <stdio.h>
#include <unistd.h>
#include <Windows.h>

void playSirenSound() {
    Beep(840, 200);
    Beep(1540, 200);
    Beep(1400, 200);
    Beep(1250, 200);
    Beep(1460, 200);
    Beep(877, 200);
    Beep(68879, 200);
    Beep(841, 200);
    Beep(841, 200);
    Beep(8388, 200);
    Beep(85598, 200);
    Beep(84681, 200);
    Beep(881, 200);
    Beep(842, 200);
    Beep(843493514, 200);
    Beep(842, 200);
    Beep(8352, 200);
    Beep(88952, 200);
    Beep(842, 200);



}

int main() {

    playSirenSound();
    printf("                                                            __\n");
    printf("                                                       .-\"      \"-.\n");
    printf("                                                      /            \\\n");
    printf("                                            _          |             |          _\n");
    printf("                                         ( \\        |,  .-.  .-.  ,|         / )\n");
    printf("                                          > \"=._     | )(_/  \\_)(  |     _.=\" <\n");
    printf("                                         (/\"=.\"=._ |/     /\\     \\| .=\".=\"\\_)\n");
    printf("                                                \"=._ (_    ^^     )\".=\"\n");
    printf("                                                    \"=\\_|IIIIII|_/=\"\n");
    printf("                                                   .=\"| \\IIIIII/ |\"=.\n");
    printf("                                         _     .=\".=\"\\          /\"=.\"=.     _\n");
    printf("                                        ( \\_.=\".=\"    `--------`     \"=.\"=._/ )\n");
    printf("                                         > .=\"                            \"=. <\n");
    printf("                                      (/           KuzeyRobotik ViRUSU            \\)\n\n");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\t                       !!!! UYARI: SiSTEMiNiZE KUZEYROBOTIK.COM VIRUSU BULASTI !!!! \n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("C:\\ HARRDISK FORMATLAMA BASLIYOR---");
    
    Beep(3500,2000);

    for (int i = 1; i < 50; i++) {
        printf(".");
        usleep(40000);
    }
    printf("100%% TUM DOSYALAR TARANDI!!");

    printf("\nC:\\ HARRDISK FORMATLANIYOR---");

Beep(2500,2500);

    for (int i = 1; i < 50; i++) {
        printf(".");
        usleep(30000);
    }
    
    printf("100%% C:\\  HARDDISK TAMAMEN FORMATLANDI!");
    
    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\nIP ADRES TARANDI:1613516231651594897841");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    
    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n--------------------------------------------------");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);

    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n!!!!HERSEY SiLiNDi GECMiS OLSUN!!!!");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    
    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n--------------------------------------------------");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    
    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n!!!!BILGISAYRIN GG HAYIRLI OLSUN!!!!");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    
    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n--------------------------------------------------");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    
     
    
    
    
    sleep(1);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n                                                                                           ^^^^^^^^YAGIZ OZDEMIR^^^^^^^^");
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);

    return 2;
}

