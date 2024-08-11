#ifndef HABITAT_H
#define HABITAT_H
#include <stdio.h>

struct Habitat
{
int x;
};
typedef struct Habitat* habitat;
habitat super;
void ana_method(FILE *dosya);
void savasma(char **harfmatris, int **rakammatris, int satir, int sutun);
char Xondur();



int satirsayisi;

int sutunsayisi;

#endif 
