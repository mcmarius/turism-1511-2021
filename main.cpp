//
// Created by marius on 2021-03-04.
//

#include <iostream>
#include "Turist.h"
#include "Obiectiv.h"
#include "Locatie.h"
#include "Sejur.h"

int main() {
    Turist t1("nume", 400);
    Obiectiv ob1("Biserica neagra");
    Locatie l_start("Bucuresti", 0); // TODO coordonate
    Locatie l1("Brasov", 100); // TODO coordonate
    Sejur s({l_start, l1});
    s.adauga_ghid();

    std::cout << "sejurul costa " << s.pret_total();
    t1.planifica(s);
    t1.viziteaza(ob1);
    return 0;
}
