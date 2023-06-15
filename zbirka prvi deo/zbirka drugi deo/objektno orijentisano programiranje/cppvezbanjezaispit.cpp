#include <stdio.h>
#include<iostream>
#include <string>
#include <math.h>
using namespace std;

// //1.	(30 poena) Klasa Ponuđeni odgovor se sastoji od teksta odgovora(string), koji se zadaje pri stvaranju (podrazumevano ""), informacije da li je tačan i procentualnog udela poena koji taj odgovor nosi (u opsegu od -100 do 100). Svi podaci su privatni. Svi podaci se mogu dohvatiti, a informacija o tačnosti i procentualni udeo se mogu postavljati(prilikom postavljanja proveriti da li su uneti ispravni procenti). Odgovor može da se ispiše na glavnom izlazu (out<<odgovor) u obliku tekst: udeo%.

// class Ponudjeni{
//     string odgovor;
//     bool tacan;
//     float procenat;
//     public:
//     Ponudjeni(string o="",bool t,float pr){
//         odgovor=o;
//         tacan=t;
//         procenat=pr;
//     }
//     void setString(string o){
//         odgovor=o;
//     }
//     void setTacan(bool t){
//         tacan=t;
//     }
//     void setProcenat(float pr){
//         if(pr > -100 && pr < 100){
//         procenat=pr;
//         }
//     }
//     string getOdgovor(){
//         return odgovor;
//     }
//     bool getTacan(){
//         return tacan;
//     }
//     float getProcenat(){
//         return procenat;
//     }

//     friend ostream& operator<<(ostream&out,Ponudjeni &p){
//         out<<p.tacan<<" "<<p.odgovor<<" "<<p.procenat<<endl;
//         return out;
//     }
// }

// int main(){
//     Ponudjeni p("da li je ovo odgovor",true,53.4);
//     cout<<p;
//     return 0;
// }



// // 2.	(30 poena) Klasa Pitanje sadrži zadate podatke koji su zaštićeni: tekst, broj poena koji nosi, broj ponuđenih odgovora (podrazumevano 5), kao i ponuđene odgovore(dinamičko alocirani niz odgovora). Stvara se bez ponuđenih odgovora, nakon čega se oni dodaju pojedinačno (pitanje+=odgovor). Prilikom dodavanja ponuđenog odgovora računaju se jednaki procentualni udeli svih tačnih odgovora dodatih u dato pitanje(u zbiru daju 100%), dok svaki netačan odgovor nosi -100%. Pomoću polimorfne metode može da se odgovori na pitanje, tada se zadaje niz koji sadrži redne brojeve ponuđenih odgovora koje ispitanik smatra tačnim i dužina tog niza(odgovori(int niz[],int br);). Tada se računa koliko je procentualno tačno odgovoreno na to pitanje. Na glavnom izlazu se ispisuje (out<<pitanje) tako što se u prvom redu ispiše tekst: poeni(maksimalni koje pitanje nosi), a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.



// class Pitanje{
//     protected:
//     string tekst;
//     int brojpoena;
//     int brponudjeni=5;
//     int trodgovora;
//     Ponudjeni *p;   
//     public:
//     Pitanje(string t,int broj,int brojponudjenih){
//         tekst=t;
//         brojpoena=broj;
//         brponudjeni=brojponudjenih;
//         p=new Ponudjeni[brojponudjenih];
//     }
//     Pitanje&  operator+=(Ponudjeni&odg){
//         if(trodgovora<brponudjeni){
//             p[trodgovora]=odg;
//             trodgovora++;
//             int tr=0;
//             for(int i=0;i<trodgovora;i++){
//                 if(p[i].getTacan())tr++;
//             }
//             float proc=100/tr;
//             for(int i=0;i<trodgovora;i++){
//                 if(p[i].getTacan())p[i].setProcenat(proc);
//                 else p[i].setProcenat(-100);
//             }
//             return *this;
//         }
//     }
//     friend ostream& operator<<(ostream&out,Pitanje &p){
//         out<<p.pitanje<<" "<<p.brojpoena<<" "<<endl;
//         for(int i=0;i<p.brponudjeni;i++){
//             out<<p.p[i];
//         }
//         return out;
//     }
//     virtual Odgovor(int niz[],int br){
//         float proc=0;
//         for(int i=0;i<br;i++){
//             if(p[niz[i]].getTacan()){
//             proc+=p[niz[i]].getProcenat();
//             }
//         }
//         return proc/100;
//     }
// }

// // 3.	(30 poena) Klasa Student nasleđuje klasu Pitanje i dodaje privatne podatke: broj indeksa(int), ime studenta (string) i broj osvojenih poena (double). Mogu da se dohvate svi podaci. Preklopiti metodu odgovori(int niz[].int br) tako da nakon što izračuna procenat tačnosti na odgovoreno pitanje izračuna broj osvojenih poena na tom pitanju i taj broj doda na broj osvojenih poena. Na glavnom izlazu se ispisuje (out<<student) tako što se u prvom redu ispiše broj indeksa, ime i broj osvojenih poena studenta, u drugom redu se ispiše tekst: poeni(maksimalni koje pitanje nosi), a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.

// // (10 poena) Napisati main funkciju u kojoj ćete kreirati 7 odgovora, 2 pitanja i 1 studenta. U prvom pitanju dodati 4 odgovora(3 tačnih i 1 netačno), a u drugom pitanju 6(4 tačnih i 2 netačnih). Student neka bude isti kao drugo pitanje uz dodato ime, broj indeksa i broj osvojenih poena. Za podatke o odgovorima, pitanjima i studentu uneti  koristiti fiksne parameter (nije potrebno unositi vrednosti sa standardnog ulaza).

// class Student:public Pitanje{
//     int brojindeksa;
//     string imeStudenta;
//     double osvojenipoeni;
//     public:
//     Student(int brojindeksa,string imeStudenta,double osvojenipoeni){
//         this->brojindeksa=brojindeksa;
//         this->imeStudenta=imeStudenta;
//         this->osvojenipoeni=osvojenipoeni;
//     }
//     void setbr(int broj){
//         brojindeksa=broj;
//     }
//     void setime(string str){
//         imeStudenta=str;
//     }
//     void setopoeni(double broj){
//         osvojenipoeni=broj;
//     }
//     int getbroj(){
//         return brojindeksa;
//     }
//     string getime(){
//         return imeStudenta;
//     }
//     double getpoeni(){
//         return osvojenipoeni;
//     }
//     virtual float Odgovor(int niz[],int brOdgovora){
//         float proc=0;
//         for(int i=0;i<br;i++){
//             if(p[niz[i]].getTacan()){
//             proc+=p[niz[i]].getProcenat();
//             }
//         }
//         osvojenipoeni+=proc/100*brojpoena;
//         return proc/100*brojpoena;

//     }

//     friend ostream& operator<<(ostream&out,Student &p){
//         out<<p.imeStudenta<<" "<<p.brojindeksa<<" "<<p.osvojenipoeni<<endl;
//         return out;
//     }
// }

// 1.	 (35 poena)  Realizovati sledeće klase (klase opremiti onim konstruktorima, destruktorima i operatorima dodele (preklopljenim operatorima) koji su potrebni za bezbedno i efikasno korišćenje.
// Klasa Artikal ima naziv, realnu cenu i celobrojni iznos popusta (podrazumevano 0).
// Podaci artikla se zadaju pri stvaranju (nije potrebna provera). Može da se ispisati naziv, cena sa popustom i iznos popusta. Na glavnom izlazu se ispisuje u obliku naziv(cena_sa_popustom).

class Artikal{
    string naziv;
    float cena;
    int popust=0;
    public:
    Artikal(string naziv,float cena,int popust){
        this->naziv=naziv;
        this->cena=cena;
        this->popust=popust;
    }
    void ispis(){
        cout<<naziv<<endl;
        cout<<cena-(cena*popust/100)<<endl;
    }

}


// 2.	Klasa Stavka računa se kreira za zadati artikal i zadatu celobrojnu količinu. Stavki računa se dodeljuje redni broj na računu prilikom dodavanja stavke na račun. Može da se izračuna iznos stavke računa kao proizvod količine i cene artikla. Omogućiti kopiranje vrednosti pomoću kopi konstruktora.
// Može se ispisati artikal stavke. Na glavnom izlazu se ispisuje u obliku:
// S redni_broj_na_računu(artikal):količina|iznos.
// U main funkciji kreirati 2 objekta klase Stavka i testirati sve metode. Kreirati i treći objekat kao kopiju prvog

class Stavka{
    Artikal artikal;
    int kolicina;
    int rednibroj;
    public:
    Stavka(int kolicina,int rednibroj,string naziv,float cena,int popust):Artikal(naziv,cena,popust){
        this->kolicina=kolicina;
    }
    void iznosStavke(){
        float iznos=0;
        iznos=kolicina*artikal.getCena();
        return iznos;
    }
    Stavka(Stavka &stav){
        artikal=stav.artikal;
        kolicina=stav.kolicina;
        rednibroj=stav.rednibroj;
    }

}

// 3.Koristeći klase iz prethodnog zadatka proširiti program tako da se doda klasa Račun koja sadrži proizvoljan broj stavki(niz stavki) i celobrojni iznos dodatnog popusta.
// Stvara se prazan, nakon čega se stavke dodaju pojedinačno. Dodavanje stavke odraditi preklapanjem operatora += (račun += stavka). Može da se postavi iznos dodatnog popusta.Može da se izračuna iznos računa kao suma iznosa svih pojedinačnih stavki na računu. Ukoliko postoji dodatni popust, on se obračunava samo za artikle koji već nisu na popustu. Na glavnom izlazu se ispisuje u obliku Racun: iznos_računa, a zatim se u svakom redu ispisuje po jedna stavka u obliku: stavka [iznos_sa_dodatnim_popustom].
//  U main funkciji stvoriti jedan  objekat klase račun i u njega dodati nekoliko stavki
// sa po jednim artiklom. Ispisati stanje računa nakon dodavanja tih stavki.

class Racun{
    Stavka *s;

    int proizvoljan;
    int trenutnobroj=0;
    float ceoiznos=0;
    public:
    Racun(int proizvoljan,float ceoiznos){
        this->proizvoljan=proizvoljan;
        s=new Stavka[proizvoljan];
        this->ceoiznos=ceoiznos;
    }
    Racun& operator+=(Stavka& p){
        if(proizvoljan>trenutnobroj){
            s[trenutnobroj]=p;
            trenutnobroj++;
        }
        return *this;
    }
}

