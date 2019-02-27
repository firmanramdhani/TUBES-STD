#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

#include "parent.h"
#include "child.h"

using namespace std;
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define nil NULL

typedef struct element_r *address_r;


struct element_r{//jenis list sinle linked list
    address_p adr_parent;
    address_c adr_child;
    address_r next;
};
struct List_r {
    address_r first;
};

//membuat dan menghapus element
address_r alokasi_r(address_p X, address_c Y);
void dealokasi_r(address_r P);

//membuat List
void createList_r(List_r &L);

//Jenis Insert
void insertFirst_r(List_r &L, address_r P);
void insertLast_r(List_r &L, address_r P);

//Jenis Delete
void deleteFirst_r(List_r &L, address_r P);
void deleteLast_r(List_r &L, address_r P);
void deleteAfter_r(List_r &L, address_r P);

void printElementchild(List_r L, string club);
void printElementparent(List_r L, string kompetisi);


address_r findElemenrrelasiviaChild(List_r Lr, address_c P);
address_r findElemenrrelasiviaParent(List_r Lr, address_p P);



#endif // RELASI_H_INCLUDED


