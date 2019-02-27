#include <iostream>
#include <conio.h>
#include "parent.h"

#include "parent.h"

using namespace std;



address_p alokasi_p(string namakompetisi, string jeniskompetisi, string asalnegara, string asalbenua){

     address_p P;
     P = new element_p;
     P->info.NamaKompetisi = namakompetisi;
     P->info.JenisKompetisi = jeniskompetisi;
     P->info.asalnegara = asalnegara;
     P->info.asalbenua = asalbenua;
     next(P) = nil;
     prev(P) = nil;
     return P;
}


void dealokasi_p(address_p P){
    P = nil;
}


void createList_p(List_p &L){
    first(L) = nil;
    last(L) = nil;
}


void insertFirst_p(List_p &L, address_p P){

    if(first(L) == nil){
        L.first = P;
        last(L) = P;
    }else
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }


 }

 void insertLast_p(List_p &L, address_p P){

    address_p Q;

     if(first(L) == nil){
        L.first = P;
        L.last = P;
    }else if(L.first->next == NULL){
              L.first->next = P;
              P->prev = L.first;
              L.last = P;
    }else{
        address_p Q;
        Q = first(L);
        while(Q != last(L)){
            Q = next(Q);
        }

        next(Q) = P;
        prev(P) = Q;
        last(L) = P;

    }
 }
void deleteFirst_p(List_p &L, address_p P){

    if (L.first == NULL){
        cout <<"                                        DATA TIDAK TERSEDIA";
    }else if(L.first->next == NULL) {
            P = L.first;
            L.first = NULL;
    }else{
        P = L.first;

        L.first = L.first->next;
         L.first->prev =NULL;
        P->next = NULL;


    }

};
void deleteLast_p(List_p &L, address_p P){
    if (L.first == NULL){
        cout <<"                                        DATA TIDAK TERSEDIA";
    }else if(L.first->next == NULL) {
            P = L.first;
            L.first = NULL;
    }else{
        P = L.last;
        L.last = L.last->prev;
        L.last->next = NULL;
        P->prev =NULL;

    }
    dealokasi_p(P);
};
void deleteAfter_p(List_p &L, address_p P){

    if (L.first == NULL){
        cout <<"                                        DATA TIDAK TERSEDIA";
    }else if(L.first->next != nil)
    {
        P = L.first;
        L.first = nil;
    }else{
        address_p prec = L.first;


        while (prec->next != P){
            prec = prec->next;
        }

        prec->next = P->next;
        P->next->prev  = prec;
        P->next = NULL;
        P->prev = NULL;
    }
    dealokasi_p(P);
};

address_p findlementparent(List_p Lp, string kompetisi){
    address_p P;
    P = Lp.first;

   if (Lp.first->next == NULL){
        if(P->info.NamaKompetisi == kompetisi){
            return P;
        }
    }else if(Lp.first->next != NULL) {
       while( P!= Lp.last){
            if(P->info.NamaKompetisi == kompetisi){
                 return P;
            }
            P = P->next;
        }
    }else{
        return NULL;

    }


}

void printElement(List_p L){
    address_p P;

    if(first(L) == nil)
        {
            cout<<"                                             DATA TIDAK TERSEDIA"<<endl;

    }else{
        P = first(L);
        while(P != last(L))
            {
                cout<<info(P).NamaKompetisi<<endl;
                cout<<info(P).JenisKompetisi<<endl;
                cout<<info(P).asalnegara<<endl;
                cout<<info(P).asalbenua<<endl;
                P = next(P);
            }
        }
}



void updateparent(address_p P,string namakompetisibaru, string jeniskompetisibaru, string asalnegarabaru, string asalbenuabaru){

        P->info.NamaKompetisi = namakompetisibaru;
        P->info.JenisKompetisi = jeniskompetisibaru;
        P->info.asalnegara = asalnegarabaru;
        P->info.asalbenua = asalbenuabaru;
}

