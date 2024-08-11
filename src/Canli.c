#include "Canli.h"
#include <stdlib.h>

canli canliolustur(char harf)
{
    canli this = (canli)malloc(sizeof(struct Canli)); 
    this->yoket = &canliyoket;

    return this;
}


void canliyoket(canli c) {
    if (c == NULL)
        return;

    free(c);
}

