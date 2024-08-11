#include "Bitki.h"
#include <stdlib.h>

bitki bitkiolustur(int sayi, char harf) {
    bitki this = (bitki)malloc(sizeof(struct Bitki));
    this->super = canliolustur(harf);
    this->harf = harf;
    this->sayi = sayi;
    this->yoket = &bitkiyoket;
    
    return this;
}

char* bitkigorunum(const bitki this) {
    char *harf = (char *)malloc(2 * sizeof(char)); 
    harf[0] = 'B';
    harf[1] = '\0'; 
    return harf;
}


void bitkiyoket(bitki b) {
    if (b == NULL)
        return;

    canliyoket(b->super);
    free(b);
}