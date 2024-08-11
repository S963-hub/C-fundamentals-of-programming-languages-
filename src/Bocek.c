#include "Bocek.h"
#include <stdlib.h>

bocek bocekolustur(int sayi, char harf)
{
    bocek this = (bocek)malloc(sizeof(struct Bocek));
    this->super = canliolustur(harf);
    this->super->gorunum = &bocekgorunum;
    this->sayi = sayi;
    this->yoket = &bocekyoket;

    return this;
}

char* bocekgorunum(const bocek this) {
    char *harf = (char *)malloc(2 * sizeof(char));
    harf[0] = 'C';
    harf[1] = '\0';
    return harf;
}

void bocekyoket(bocek b)
{
    if (b == NULL)
        return;

    canliyoket(b->super);
    free(b);
}
