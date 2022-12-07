#include <iostream>
#include "lib.h"
using namespace std;

bool funzione(char p){
    if (p=='a' || p=='b'|| p=='c'|| p=='d'|| p=='e'|| p=='f'|| p=='g'|| p=='h'|| p=='i'|| p=='j'|| p=='k'|| p=='l'|| p=='m'|| p=='n'|| p=='o'|| p=='p'|| p=='q'|| p=='r'|| p=='s'|| p=='t'|| p=='u'|| p=='v'|| p=='w'|| p=='x'|| p=='y'|| p=='z'){
        return 0;
    }
    if (p=='A' || p=='B'|| p=='C'|| p=='D'|| p=='E'|| p=='F'|| p=='G'|| p=='H'|| p=='I'|| p=='J'|| p=='K'|| p=='L'|| p=='M'|| p=='N'|| p=='O'|| p=='P'|| p=='Q'|| p=='R'|| p=='S'|| p=='T'|| p=='U'|| p=='V'|| p=='W'|| p=='X'|| p=='Y'|| p=='Z'){
        return 0;
    }
    else {
        return 1;
    }
}
