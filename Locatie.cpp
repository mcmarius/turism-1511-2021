//
// Created by marius on 2021-03-04.
//

#include <stdexcept>
#include "Locatie.h"

Locatie::Locatie(const std::string &nume, int pret) : nume(nume), pret(pret) {
    if(pret <= 0)
        throw std::domain_error("pretul nu poate fi negativ sau 0");
}

int Locatie::getPret() const {
    return pret;
}

Locatie::~Locatie() {
}
