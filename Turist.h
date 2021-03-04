//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_TURIST_H
#define TURISM_1511_2021_TURIST_H

#include <string>
#include "Sejur.h"
#include "Obiectiv.h"

class Turist {
    std::string nume;
    int buget;
public:
    Turist(std::string nume, int buget);
    void planifica(const Sejur &sejur);
    void viziteaza(Obiectiv obiectiv);
};

#endif //TURISM_1511_2021_TURIST_H
