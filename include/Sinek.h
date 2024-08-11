#ifndef Sinek_H
#define Sinek_H
#include "Bocek.h"
#include "Canli.h"

struct Sinek
{
    bocek super;
    char harf;
    int sayi;
    void (*yoket)(struct Sinek*);
};
typedef struct Sinek* sinek;
sinek sinekolustur(int sayi,char harf);
void sinekyoket(sinek);
char* sinekgorunum();

#endif