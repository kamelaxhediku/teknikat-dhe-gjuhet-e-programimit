#include <stdio.h>

char konverto_noten(int nota_numerike) {
    int shifra_dhjeteshe = nota_numerike / 10;
    char nota_shkronje;

    switch (shifra_dhjeteshe) {
        case 10:
        case 9:
            nota_shkronje = 'A';
            break;
        case 8:
            nota_shkronje = 'B';
            break;
        case 7:
            nota_shkronje = 'C';
            break;
        case 6:
            nota_shkronje = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            nota_shkronje = 'F';
            break;
        default:
            printf("Numri i dhene eshte i pavlefshem.\n");
    }

    return nota_shkronje;
}

int main() {
    int nota_numerike;
    char nota_shkronje;

    printf("Jepni noten ne forme numerike: ");
    scanf("%d", &nota_numerike);

    nota_shkronje = konverto_noten(nota_numerike);

    if (nota_shkronje != '\0') {
        printf("Nota me shkronje: %c\n", nota_shkronje);
    }

    return 0;
}