//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_SEJUR_H
#define TURISM_1511_2021_SEJUR_H

#include <vector>
#include "Locatie.h"

class Sejur {
    std::vector <Locatie> locatii;
    bool ghid = false;
public:
    Sejur(const std::vector <Locatie> &locatii);
    void adauga_ghid();
    double pret_total();
};

#endif //TURISM_1511_2021_SEJUR_H
