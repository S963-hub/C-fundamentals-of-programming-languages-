#ifndef Bocek_H
#define Bocek_H

#include "Canli.h"

struct Bocek
{
    canli super;
    char harf;
    int sayi; 
    void (*yoket)(struct Bocek*);
};
typedef struct Bocek* bocek;
bocek bocekolustur(int sayi, char harf);
void bocekyoket(bocek);
char* bocekgorunum(bocek);

#endif
