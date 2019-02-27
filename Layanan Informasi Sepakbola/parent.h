#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define nil NULL
#define next(P) P->next
#define info(P) P->info

using  namespace std;

struct infotype_p {
    string NamaKompetisi;
    string JenisKompetisi;
    string asalnegara;
    string asalbenua;
};
typedef struct element_p *address_p;
struct element_p{//jenis list double linked list dengan last
    infotype_p info;
    address_p next;
    address_p prev;
};
struct List_p {
    address_p first;
    address_p last;
};

//function membuat infotype

//membuat dan element
address_p alokasi_p(string namakompetisi, string jeniskompetisi, string asalnegara, string asalbenua);
void dealokasi_p(address_p P);

//membuat List
void createList_p(List_p &L);

//Jenis Insert
void insertFirst_p(List_p &L, address_p P);
void insertLast_p(List_p &L, address_p P);

//Jenis Delete
void deleteFirst_p(List_p &L, address_p P);
void deleteLast_p(List_p &L, address_p P);
void deleteAfter_p(List_p &L, address_p P);

address_p findlementparent(List_p Lp, string kommpetisi);

void printElement(List_p L);

void updateparent(address_p P, string namakompetisibaru, string jeniskompetisibaru, string asalnegarabaru, string asalbenuabaru);

#endif // PARENT_H_INCLUDED
