#ifndef CANLI_H
#define CANLI_H

typedef struct Canli {
    char harf;
    char* (*gorunum)(); 
    void (*yoket)();
} 
*canli;

canli canliolustur(char harf);
void canliyoket(canli c);

#endif