// Ravnanje u programu
// u algoritmu se grananje crta na dva nacina.
// u C za grananje je naredna IF i opciono moze da ima ELSE.
// prvo unesemo if i uslov a nakon toga ako se ne odradi ta naredba u if,pisemo else i cepamo uslov u else ako se ne ispuni prvi
// za else idu { zagrade} a za if []
// kod znakvoa imamo >,<,manje ili jednako ide <=vece ili jednako ide >=.
// i(and)&&,ili(or)||,ne(not)!
// broj deljiv sa 2 onda ej paran
// ako broj nije deljiv sa 2 je neparan.
/*#include <stdio.h>
int main(int argc,char** argv) {

    int broj;
    printf("Unesite jedan ceo broj \n");
    scanf("%d", &broj);
    if(broj % 2 == 0){
   printf("Uneti broj je paran");
    }
    else{
        printf("Uneti broj je neparan");
    }
    return 0;
}*/
/*int main(int arcgc,char** argv) {
    int a,b,c,max;
    printf("Unesite tri cela broja\n");
    scanf("%d","%d","%d",&a,&b,&c);
    max = a; //max=5
    if(b > max){
    max = b;
    }
    if(c > max){
    max = c;
    }  
    printf("Najveci broj je %d",max);
    return 0;
}*/
/* input poeni = 95,81,59*,-5/
/* output:ocena 10,9,8,7,6,5* ili neispravan unos/ */
#include <stdio.h>
/*int main(int argc,char** argv){
    float brp;
    printf("Unesite broj poena osvojenih na ispitu");
    scanf("%f",&brp);
    if(brp < 0 || brp > 100){
    printf("Neispravan unos");
    }
    else{
        if(0 <= brp && brp <= 50){
            printf("Ocena 5");
        }
        else if(51 <= brp && brp <= 60){
            printf("Ocena 6");
        }
        else if(61 <= brp && brp <= 70){
            printf("Ocena 7");
        }
        else if(71 <= brp && brp <= 80){
            printf("Ocena 8");
        }
        else if(81 <= brp && brp <= 90){
            printf("Ocena 9");
        }
        else{
            printf("Ocena 10");
        }
    }
    return 0;
}*/
/* int main(int argc,char** argv){
    float brp;
    printf("Unesite broj poena osvojenih na ispitu");
    scanf("%f",&brp);
    if(brp < 0 || brp > 100){
    printf("Neispravan unos");
    }
    else{
        if(brp >=91){
            printf("Ocena 9");
        }
        else if(brp >=81){
            printf("Ocena 8");
        }
        else if(brp >=71){
            printf("Ocena 7");
        }
        else if(brp >=61){
            printf("Ocena 6");
        }
        else if(brp >=51){
            printf("Ocena 5");
        }
    }
    return 0;
} */
/*#include <stdio.h>
int main(int argc,char** argv){
  float  x;
  int  y;
  scanf("f",&x);
  if( x > 0){
    y = 1;
  }   
  else if (x == 0){
    y = 0;
  }
  else{
    y = -1;
  }
  printf("Y = %d",y);
  return 0;
}*/
/*int main(int argc,char** argv){
    float a,b,c,S,P;
    printf("Unesite strancie trougla \n");
    scanf("%f","%f","%f",&a,&b,&c);
    if(a+b>c && a+c>b && c+b>a){
        S = (a+b+c)/2;
        P = sqrt(S*(S - a)*(S - b)*(S - c));
        printf("Povrsina trougla iznosi %f",P);
    }
    else{
        printf("Unete vrednosti ne mogu formirati trougao");
    }
    return 0;
}*/
#include <stdio.h>z
int main(int argc,char** argv){
    float a,b,c,D;
    printf("Unesite koeficijente a,b i c\n");
    scanf("%f","%f","%f",&a,&b,&c);
    if(a != 0){
        D = pow(b,2)-4*a*c;
        if(D > 0){
            float x1 = (-b+sqrt(D))/(2*a);
            float x2 = (-b-sqrt(D))/(2*a);
            printf("Jednacina ima dva realna resenja \n");
            printf("x1 = %.2f \nx2 = %.2f",x1,x2);
        }
    }
}
