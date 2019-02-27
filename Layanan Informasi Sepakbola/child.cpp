#include <iostream>
#include <conio.h>
#include "child.h"

using namespace std;

// Membentuk record infotype dari list child
infotype_c createinfotypeChild(string namaclub, string namamanager, string asalkota, string asalnegara, string jumlahpemain){

    infotype_c X;

    X.NamaClub = namaclub;
    X.manager = namamanager;
    X.asalkota = asalkota;
    X.asalnegara = asalnegara;
    X.jmlPemain = jumlahpemain;

    return X;

};
address_c alokasi_c(infotype_c S){

    address_c P;

    P = new element_c;
    P->info = S;
    next(P) = nil;

    return P;
}

void dealokasi_c(address_c P){

    P = nil;
}

//membuat List
void createList_c(List_c &L){
    first(L) = nil;
}

//Jenis Insert
void insertFirst_c(List_c &L, address_c P){
    if(first(L) == nil) {
         first(L) = P;
         next(P) = P;
     } else if(next(first(L)) == first(L)){
         next(P) = first(L);
         next(first(L)) = P;
         first(L) = P;
    }else{
        address_c Q;
        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }
        P = first(L);
        next(Q) = P;
        first(L) = P;
  }
}

void insertLast_c(List_c &L, address_c P){

     if(L.first == nil){
         L.first = P;
         next(P)  = P;
    } else if(L.first->next == L.first){
         P->next = L.first;
         L.first->next = P;
    }else{
        address_c Q;
        Q = first(L);
        while(next(Q) != first(L)){
            Q =  next(Q);
        }
        next(P) = first(L);
        next(Q) = P;
    }
}

void deleteFirst_c(List_c &L, address_c P){
    if (L.first == NULL){
        cout <<"DATA TIDAK TERSEDIA";
    }else  if (L.first->next == L.first){
        P = L.first;
        L.first = NULL;
    }else{
        address_c Q;
        Q = first(L);
        while(next(Q) != first(L)){
            Q =  next(Q);
        }
        P = L.first;
        Q->next = P->next;
        L.first = P->next;
        P->next = NULL;
    }
    dealokasi_c(P);


};
void deleteLast_c(List_c &L, address_c P){
    if (L.first == NULL){
        cout <<"DATA TIDAK TERSEDIA";
    }else  if (L.first->next == L.first){
        P = L.first;
        L.first = NULL;
    }else{
        address_c Q;
        Q = first(L);
        while(Q->next->next != first(L)){
            Q =  next(Q);
        }
        P = Q->next;
        Q->next = L.first;
        P->next = NULL;
    }
    dealokasi_c(P);

};
void deleteAfter_c(List_c &L, address_c P){
    if (L.first == NULL){
        cout <<"DATA TIDAK TERSEDIA";
    }else  if (L.first->next == L.first){
        P = L.first;
        L.first = NULL;
    }else{

        address_c prec = L.first;
        while (prec->next != P){
            prec = prec->next;
        }

        prec->next = P->next;
        P->next = NULL;
    }
    dealokasi_c(P);
};


address_c findlementchild(List_c Lc, string club){
    address_c Q;
    address_c N;

    if(first(Lc) != NULL){
        Q = first(Lc);
        N = NULL;
        do{
            if(info(Q).NamaClub == club){
                N = Q;
            }
            Q = next(Q);
        }while(Q != Lc.first);

        return N;
    }
    else{
        return NULL;
    }
}


void printElement (List_c L){
    address_c P;
    if(first(L) == nil)
        {
            cout<<"KOSONG"<<endl;
    }else{
        P = first(L);
        while(P != first(L))
            {
                cout<<info(P).NamaClub<<endl;
                cout<<info(P).asalkota<<endl;
                cout<<info(P).asalnegara<<endl;
                cout<<info(P).manager<<endl;
                cout<<info(P).jmlPemain<<endl;
                P = next(P);
            }
        }
}


void updatechild(address_c P,string namabaru, string asalkotabaru, string asalnegarabaru, string managerbaru, string jumlahbaru){

       P->info.NamaClub = namabaru;
       P->info.asalkota = asalkotabaru;
       P->info.asalnegara = asalnegarabaru;
       P->info.manager = managerbaru;
       P->info.jmlPemain = jumlahbaru;
}











