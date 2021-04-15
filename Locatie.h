//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_LOCATIE_H
#define TURISM_1511_2021_LOCATIE_H

#include <string>
#include <memory>

class Locatie {
protected:
    std::string nume;
    int pret;
public:
    Locatie(const std::string &nume, int pret);
//    Locatie(const Locatie &) noexcept = default;
    virtual std::unique_ptr <Locatie> clone() = 0;
    virtual int getPret() const = 0;
    virtual ~Locatie();
};

#endif //TURISM_1511_2021_LOCATIE_H
