#ifndef Bitki_H
#define Bitki_H

#include "Canli.h"

struct Bitki
{
    canli super;
    char harf;
    int sayi;
    void (*yoket)(struct Bitki*);
};

typedef struct Bitki* bitki;

bitki bitkiolustur(int sayi, char harf);
void bitkiyoket(bitki);
char* bitkigorunum(const bitki);

#endif
