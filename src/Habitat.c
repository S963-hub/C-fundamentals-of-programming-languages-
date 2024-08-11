#include "Bitki.h"
#include "Bocek.h"
#include "Sinek.h"
#include "Pire.h"
#include <string.h>
#include "Canli.h"
#include "Habitat.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



void ana_method(FILE *dosya) {
    
    int **matrix = NULL; 
    char **harf_matrix = NULL; 
    int satir_sayisi = 0;
    int *sutun_sayisi = NULL; 

    
    char satir[1000]; 
    while (fgets(satir, 1000, dosya) != NULL) {
        int sutun = 0;
        int *gecici_satir = NULL;
        char *token;

        
        token = strtok(satir, " \n");
        while (token != NULL) {
           
            sutun++;

           
            gecici_satir = (int *)realloc(gecici_satir, sutun * sizeof(int));
            gecici_satir[sutun - 1] = atoi(token);

         
            token = strtok(NULL, " \n");
        }

        
        satir_sayisi++;

      
        matrix = (int **)realloc(matrix, satir_sayisi * sizeof(int *));
        matrix[satir_sayisi - 1] = gecici_satir;

       
        sutun_sayisi = (int *)realloc(sutun_sayisi, satir_sayisi * sizeof(int));
        sutun_sayisi[satir_sayisi - 1] = sutun;
    }

   
    harf_matrix = (char **)malloc(satir_sayisi * sizeof(char *));
    for (int i = 0; i < satir_sayisi; i++) {
        harf_matrix[i] = (char *)malloc(sutun_sayisi[i] * sizeof(char));
    }


    int i = 0;
for (int i = 0; i < satir_sayisi; i++) {
    harf_matrix[i] = (char *)malloc((sutun_sayisi[i] + 1) * sizeof(char)); 
    for (int j = 0; j < sutun_sayisi[i]; j++) {
        int sayi = matrix[i][j];
        char *harf;
        if (1 <= sayi && sayi <= 9) {
            bitki b = bitkiolustur(sayi, ' ');
            harf = bitkigorunum(b);
            bitkiyoket(b);
        } 
        else if (10 <= sayi && sayi <= 20) {
            bocek bk = bocekolustur(sayi, ' ');
            harf = bocekgorunum(bk);
            bocekyoket(bk);

        } else if (21 <= sayi && sayi <= 50) {
            sinek s = sinekolustur(sayi, ' ');
            harf = sinekgorunum(s);
            sinekyoket(s);
        } else if (51 <= sayi && sayi <= 99) {
            pire p = pireolustur(sayi, ' ');
            harf = piregorunum(p);
            pireyoket(p);
                

        } else {
            harf = " ";
        }
        harf_matrix[i][j] = *harf; 
    }
    harf_matrix[i][sutun_sayisi[i]] = '\0'; 
}


printf("\nOkunan Harf Matrisi:\n");
for (int i = 0; i < satir_sayisi; i++) {
    for (int j = 0; j < sutun_sayisi[i]; j++) {
        printf("%c ", harf_matrix[i][j]); 
    }
    printf("\n"); 
}
printf("\n"); 
printf("\n"); 
printf("\n"); printf("\n"); 
printf("\n"); 

printf("\n"); 
printf("\n"); 
printf("\n"); 
printf("baslamak icin Herhangi bir tusa basiniz");
printf("\n"); 


getch();
savasma(harf_matrix,matrix,satir_sayisi,*sutun_sayisi);
    for (int i = 0; i < satir_sayisi; i++) {
        free(harf_matrix[i]);
    }
    free(harf_matrix);
}



char Xdondur()
{
    return 'X';
}






void savasma(char **harfmatris, int **rakammatris, int satir, int sutun)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            
           if (i == 0 && j == 0)
            {
                j++;
            }
            if (harfmatris[x][y] == harfmatris[i][j])
            {
                if(rakammatris[x][y] == rakammatris[i][j])
                {
                    harfmatris[i][j] = Xdondur();
                }
                else
                {
                    if (rakammatris[x][y] < rakammatris[i][j])
                    {
                        harfmatris[x][y] = Xdondur();
                        x=i;
                        y=j;
                    }
                    else
                    {
                        harfmatris[i][j] = Xdondur();
                    }

                }
                
            }
            else
            {
                
            switch (harfmatris[x][y])
            {
            case 'C':
                if (harfmatris[i][j] == 'P' || harfmatris[i][j] == 'B')
                {
                    harfmatris[i][j] = Xdondur();
                }
                else
                {
                    harfmatris[x][y] = Xdondur();
                    x=i;
                    y=j;                       
                }
                break;
                case 'B':
                if (harfmatris[i][j] == 'P' || harfmatris[i][j] == 'S')
                {
                    harfmatris[i][j] = Xdondur();
                }
                else
                {
                    harfmatris[x][y] = Xdondur();
                    x=i;
                    y=j;
                }
                break;
                case 'S':
                if (harfmatris[i][j] == 'P' || harfmatris[i][j] == 'C')
                {
                    harfmatris[i][j] = Xdondur();
                }
                else
                {
                    harfmatris[x][y] = Xdondur();
                    x=i;
                    y=j;
                }
                break;
                case 'P':
                harfmatris[x][y] = Xdondur();
                    x=i;
                    y=j;

                break;
            default:
                break;
            }
            }
            
            
            //cikti
             system("cls");
                    for (int i = 0; i < satir; i++) {
                        for (int j = 0; j < sutun; j++) {
                             printf("%c ", harfmatris[i][j]); 
                             }
                      printf("\n"); 
                    }
            
        }

    }

printf("\n");
printf ("kazanan : %c : ( %i , %i )\n\n",harfmatris[x][y],x,y);

}

