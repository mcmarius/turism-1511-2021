//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_LOCATIE_H
#define TURISM_1511_2021_LOCATIE_H

#include <string>

class Locatie {
    std::string nume;
    int pret;
public:
    Locatie(const std::string &nume, int pret);
    int getPret() const;
};

#endif //TURISM_1511_2021_LOCATIE_H
