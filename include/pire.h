#ifndef Pire_H
#define Pire_H

#include "Bocek.h"

struct Pire
{
    bocek super;
    char harf;
    int sayi;
    void (*yoket)(struct Pire*);
};

typedef struct Pire* pire;

pire pireolustur(int sayi, char harf);
void pireyoket(pire);
char* piregorunum();

#endif
