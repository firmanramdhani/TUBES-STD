#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define nil NULL
#define info(P) P->info

struct infotype_c {
    string NamaClub;
    string asalkota;
    string asalnegara;
    string manager;
    string jmlPemain;
};
typedef struct element_c *address_c;


struct element_c{//jenis list single linked list circular
    infotype_c info;
    address_c next;
};
struct List_c {
    address_c first;
};

// Membentuk record infotype dari list child
infotype_c createinfotypeChild(string namaclub, string namamanager, string asalkota, string asalnegara, string jumlahpemain);
//membuat dan element
address_c alokasi_c(infotype_c S);
void dealokasi_c(address_c P);

//membuat List
void createList_c(List_c &L);

//Jenis Insert
void insertFirst_c(List_c &L, address_c P);
void insertLast_c(List_c &L, address_c P);

//Jenis Delete
void deleteFirst_c(List_c &L, address_c P);
void deleteLast_c(List_c &L, address_c P);
void deleteAfter_c(List_c &L, address_c P);

address_c findlementchild(List_c Lp, string club);

void printElement (List_c L);

void updatechild(address_c P,string namabaru, string asalkotabaru, string asalnegarabaru, string managerbaru, string jumlahbaru);
#endif // CHILD_H_INCLUDED
