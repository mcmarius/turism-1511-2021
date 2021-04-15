//
// Created by marius on 2021-04-01.
//

#include "LocatieMunte.h"

int LocatieMunte::getPret() const {
    return Locatie::getPret();
}

LocatieMunte::LocatieMunte(const std::string &nume, int pret) : Locatie(nume, pret) {}

std::unique_ptr <Locatie> LocatieMunte::clone() {
    return std::make_unique <LocatieMunte>(*this);
}

LocatieMunte::LocatieMunte(const std::string &nume, int pret, int altitudine)
: Locatie(nume, pret), altitudine(altitudine) {}
