#include <stdio.h>
#include <math.h>
#include <string.h>

// // binarno pretrazivanje-podela na pola!

// int binarySearch(int niz[],int vrednost){
//     int start=0;
//     int kraj= niz.length-1;//ili n duzina niza-1;
//     while(start<=kraj){
//         int sredina = (start+kraj)/2;
//         if(niz[sredina]==vrednost){//ako je element tacno na sredini!
//             return sredina;
//         }
//         else if(niz[mid]<vrednost){//vrednost veca od sredine;
//             start=sredina+1;
//         }
//         else{//ovo je slucaj kad je vrednost manja od sredine
//             kraj=sredina-1;
//         }
//     }
//     return -1;//ovo je ako ne nadje element
// }


// vektorska prezentacija matrice,sa tri polja se samo cita red,kolona i vrednost