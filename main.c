#include <stdio.h>
#define N 50

int longitud(char cadena[N]);
void convertirMayus(char cadena[N]);
void concatenar(char origen[N], char destino[N]);
void intercambiar(char cad1[N], char cad2[N], int longitud);
void rotarDerecha(char cadena[N], int veces, int longitud);

int main() {
    int i;
    char cadena1[] = "hola";
    char cadena2[] = "nube";
    intercambiar(cadena1, cadena2,longitud(cadena1));
    for (i = 0; i < 5; ++i) {
        printf("%c", cadena1[i]);

    }
    printf("\n");
    for (i = 0; i < 5; ++i) {
        printf("%c", cadena2[i]);

    }
    printf("\n");
    convertirMayus(cadena1);
    convertirMayus(cadena2);
    for (i = 0; i < 5; ++i) {
        printf("%c", cadena1[i]);

    }
    printf("\n");
    for (i = 0; i < 5; ++i) {
        printf("%c", cadena2[i]);

    }
    printf("\n");
    rotarDerecha(cadena1, 3, longitud(cadena1));
    rotarDerecha(cadena2, 3, longitud(cadena2));
    printf("\n");
    concatenar(cadena1, cadena2);
    for (i = 0; i < longitud(cadena2); ++i) {
        printf("%c", cadena2[i]);

    }
    return 0;
}

int longitud(char cadena[N]){
    int i;
    i = 0;
    while(i < N && cadena[i] != '\0'){
        i++;
    }
    return i;
}

void convertirMayus(char cadena[]){
    int i, distancia;
    distancia = 'a' - 'A';
    i = 0;

    while('\0' != cadena[i]){
        if(cadena[i] >= 'a' && cadena[i] <= 'z'){
            cadena[i] = cadena[i] - distancia;
        }else{
            cadena[i] = cadena[i];
        }
        i++;
    }
}

void concatenar(char origen[N], char destino[N]){
    int longOrigen, longDestino, i;
    longOrigen = longitud(origen);
    longDestino = longitud(destino);

    for(i = 0; i <= longOrigen; i++){
       destino[longDestino + i] = origen [i];
    }
}

void intercambiar(char cad1[N], char cad2[N], int longitud){
    char aux;
    int i;

    for(i = 0; i < longitud; i++){
        aux = cad1[i];
        cad1[i] = cad2[i];
        cad2[i] = aux;
    }
    cad1[i] = '\0';
    cad2[i] = '\0';
}

void rotarDerecha(char cadena[N], int veces, int longitud){
    int i, j, k;
    char aux;

    for(j = 1; j <= veces; j++){
        for(k = 0; k < N; k++){
            printf("%c", cadena[k]);
        }
        printf("\n");
        aux = cadena[longitud - 1];
        for (i = longitud - 1; i > 0; ++i) {
            cadena[j] = cadena[j - 1];
        }
        cadena[0] = aux;
    }
}
