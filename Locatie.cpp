//
// Created by marius on 2021-03-04.
//

#include "Locatie.h"

Locatie::Locatie(const std::string &nume, int pret) : nume(nume), pret(pret) {}

int Locatie::getPret() const {
    return pret;
}
