//
// Created by marius on 2021-04-01.
//

#include "LocatieMare.h"

int LocatieMare::getPret() const {
    return Locatie::getPret() + 100;
}

LocatieMare::LocatieMare(const std::string &nume, int pret) : Locatie(nume, pret) {}

std::unique_ptr <Locatie> LocatieMare::clone() {
    return std::make_unique <LocatieMare>(*this);
}
