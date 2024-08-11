#include "Bitki.h"
#include "Bocek.h"
#include "Sinek.h"
#include "Pire.h"
#include "Canli.h"
#include "Habitat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {

    FILE *dosya;
    dosya = fopen("Veri.txt", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    ana_method(dosya);
    fclose(dosya);

    return 0;
}
