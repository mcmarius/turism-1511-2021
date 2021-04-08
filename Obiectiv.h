//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_OBIECTIV_H
#define TURISM_1511_2021_OBIECTIV_H

#include <string>
#include <ostream>
#include <memory>
#include "Locatie.h"

class Obiectiv {
    std::string nume;
    std::unique_ptr <Locatie> locatie;
public:
//    Obiectiv(const std::string &nume);
    Obiectiv(std::string nume, std::unique_ptr <Locatie> locatie);
    Obiectiv(const Obiectiv &ob);
    Obiectiv &operator=(const Obiectiv &ob);
    virtual ~Obiectiv();
    friend std::ostream &operator<<(std::ostream &os, const Obiectiv &obiectiv);
    const Locatie &getLocatie() const;
};

#endif //TURISM_1511_2021_OBIECTIV_H
