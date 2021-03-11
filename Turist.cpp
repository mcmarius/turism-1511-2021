//
// Created by marius on 2021-03-04.
//

#include "Turist.h"

#include <utility>

Turist::Turist(std::string nume, int buget) : nume(std::move(nume)), buget(buget) {}

void Turist::planifica(const Sejur &sejur) {
}

void Turist::viziteaza(Obiectiv obiectiv) {
}
