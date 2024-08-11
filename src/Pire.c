#include "Pire.h"
#include "Canli.h"
#include <stdlib.h>

pire pireolustur(int sayi, char harf)
{
    pire this = (pire)malloc(sizeof(struct Pire));
    this->super = bocekolustur(sayi, harf);
    this->sayi = sayi;
    this->yoket = &pireyoket;
    this->super->super->gorunum = &piregorunum;

    return this;
}

char* piregorunum(const pire this) {
    char *harf = (char *)malloc(2 * sizeof(char));
    harf[0] = 'P';
    harf[1] = '\0';
    return harf;
}

void pireyoket(pire p) {
    if (p == NULL)
        return;

    bocekyoket(p->super);
    free(p);
}