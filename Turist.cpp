//
// Created by marius on 2021-03-04.
//

#include "Turist.h"
#include "fonduri_insuficiente.h"

#include <utility>

Turist::Turist(std::string nume, int buget) : nume(std::move(nume)), buget(buget) {
    nr_turisti++;
}

void Turist::planifica(const Sejur &sejur) {
}

void Turist::viziteaza(const Obiectiv &obiectiv) {
    const auto pret_locatie = obiectiv.getLocatie().getPret();
    if(buget < pret_locatie)
        throw fonduri_insuficiente(buget, pret_locatie);
    buget -= pret_locatie;
}

std::ostream &operator<<(std::ostream &os, const Turist &turist) {
    os << "\nnume: " << turist.nume << ", buget: " << turist.buget << ", obiective:\n";
    for(auto &obiectiv : turist.obiective)
        os << "  " << obiectiv;
    os << "\n";
    return os;
}

void Turist::adauga(const Obiectiv &obiectiv) {
    obiective.push_back(obiectiv);
}

Turist::~Turist() {
    nr_turisti--;
}

int Turist::getNrTuristi() {
    return nr_turisti;
}

//int Turist::nr_turisti = 0;

