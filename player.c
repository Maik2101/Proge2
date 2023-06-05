#include "player.h"

int posicionX = 0;
int posicionY = 0;
char movi = 0;

void movimiento(char movi) {
    printf("Bienvenido\n");

    while (1) {
        printf("Posición actual del jugador: (%d, %d)\n", posicionX, posicionY);
        printf("Ingrese una tecla (W, A, S, D) para moverte: ");
        scanf(" %c", &movi);

        switch (movi) {
            case 'W':
            case 'w':
                posicionY--;
                break;
            case 'A':
            case 'a':
                posicionX--;
                break;
            case 'S':
            case 's':
                posicionY++;
                break;
            case 'D':
            case 'd':
                posicionX++;
                break;
            default:
                printf("Tecla no válida solos W, A, S o D.\n");
                break;
        }

        printf("\n");
        if (valimovi (posicionX, posicionY)){
            posicionX;
            posicionY;
            movi++;
        
        }
        else{
            printf("No valido el movimiento");
        }

        int acabajuego()
        {
            if(posicionX ==4 && posicionY==4){
                printf("Genial ganaste");
            }
            if(movi<=8){
                printf("QUE buenisima, !ERES UN PRO!!\n");
            }
            else if (movi<=15){
                printf("Nada mal Novato");
            }
        else{
            printf("Noob");
        }
        return 1;
        }


       