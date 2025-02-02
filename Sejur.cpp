//
// Created by marius on 2021-03-04.
//

#include "Sejur.h"

void Sejur::adauga_ghid() {
    ghid = true;
}

double Sejur::pret_total() {
    double total = 0;
    for(auto &locatie : locatii)
        total += locatie->getPret();
    return total;
}

Sejur::Sejur(std::vector <std::unique_ptr <Locatie>> &&locatii) {
    for(auto &&locatie : locatii)
        this->locatii.emplace_back(std::move(locatie));
}
