#include "Sinek.h"
#include "Canli.h"
#include "Bocek.h"
#include <stdlib.h>

sinek sinekolustur(int sayi, char harf)
{
    sinek this = (sinek)malloc(sizeof(struct Sinek));
    this->super = bocekolustur(sayi, harf);
    this->sayi = sayi;
    this->yoket = &sinekyoket;
    this->super->super->gorunum = &sinekgorunum;

    return this;
}

char* sinekgorunum(const sinek this) {
    char *harf = (char *)malloc(2 * sizeof(char));
    harf[0] = 'S';
    harf[1] = '\0';
    return harf;
}

void sinekyoket(const sinek this)
{
    free(this);
}
