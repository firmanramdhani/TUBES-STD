#include <iostream>
#include <conio.h>

#include "relasi.h"
#include "parent.h"
#include "child.h"
#include "menu.h"


using namespace std;

int main()
{
    List_p Lp;
    List_r Lr;
    List_c Lc;

    createList_p(Lp);
    createList_r(Lr);
    createList_c(Lc);


    menu();
    getch();
}
