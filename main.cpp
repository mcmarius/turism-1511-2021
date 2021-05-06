//
// Created by marius on 2021-03-04.
//

#include <iostream>
#include <variant>
#include "Turist.h"
#include "Obiectiv.h"
#include "Locatie.h"
#include "Sejur.h"
#include "LocatieMunte.h"
#include "LocatieMare.h"
//#include <nlohmann/json.hpp>

//using json = nlohmann::json;
//using str_int = std::variant <int, std::string>;
//
//struct adl_serializer {
//    static void to_json(json &j, const str_int &value) {
//        // calls the "to_json" method in T's namespace
//        j = json({});
//    }
//
//    static void from_json(const json &j, str_int &value) {
//        // same thing, but with the "from_json" method
//        //j.at()
//    }
//};

//Locatie* locatie_noua(const std::string& nume, int pret) {
//    if(pret <= 0)
//        return nullptr;
//    return new Locatie(nume, pret);
//}

void locatie_noua_v2();

/*class B1 {};
class B2 { int x; };
class B3 { int x;
public:
    virtual ~B3() = default;
};
class B4 {
public:
    virtual void f() {
        std::cout << "b4\n";
    }
    virtual ~B4() = default;
};
class D41 : public B4 {
public:
    void f() override {
        std::cout << "d41\n";
    }
};
class B5 {
public:
    ~B5() = default;
};

int f(double x) { return 0; }*/


class Baza {
protected:
    int x;
public:
    Baza(const Baza &) = delete;
    Baza &operator=(const Baza &) = delete;

    Baza() {}

    virtual void fv() {}
};
class D1 : virtual public Baza {
public:
    int fv(int x = 0) {
        return 0;
    }

    void fv() override {
    }
};
class D2 : virtual public Baza {};
class D12 : public D1, public D2 {
    void f() {
        D1::x;
        D2::x;
        x;
    }
};

int main() {
    /*std::cout << sizeof(B1) << "\n";
    std::cout << sizeof(B2) << "\n";
    std::cout << sizeof(B3) << "\n";
    std::cout << sizeof(B4) << "\n";
    std::cout << sizeof(B5) << "\n";
    std::cout << sizeof(int*) << "\n";
    B4 *p = new D41;
    p->f();
    //int (*ptf)(double) = f;
    //std::cout << sizeof(ptf) << "\n";
    std::cout << sizeof(int (*)(double)) << "\n";

    return 0;*/
    Baza b1, b2;
//    b1 = b2;



//    auto x = json::parse(R"({"a":1})")["a"].get<>();
    Turist t1("nume", 900);
    LocatieMunte buc("Bucuresti", 10); // TODO coordonate
    LocatieMunte bv("Brasov", 100); // TODO coordonate

    std::vector <std::reference_wrapper <Locatie>> locref;
    std::vector <Locatie *> locatii;

    for(auto &locatie : locatii)
        std::cout << locatie->getPret() << "\n";

    std::vector <std::unique_ptr <Locatie>> loc2;
    std::vector <std::shared_ptr <Locatie>> loc3;
    std::vector <std::weak_ptr <Locatie>> loc4;

    struct nod {
        std::weak_ptr <nod> next;
    };
    std::shared_ptr <nod> n1, n2, n3;
    n1 = std::make_shared <nod>();
    n2 = std::make_shared <nod>();
    {
        std::shared_ptr <nod> n4;
        n4 = std::make_shared <nod>();
        n3 = std::shared_ptr <nod>({n1});
    }
    n1->next = n2;
    n2->next = n1;

    std::cout << Turist::getNrTuristi() << "\n";
    std::cout << t1.getNrTuristi() << "\n";
    Obiectiv ob1("Biserica neagra", std::make_unique <LocatieMunte>(bv));
//    Obiectiv ob2(""), ob3(ob1);
//    ob2 = ob1;
//    std::cout << ob2 << ob3;


//    Locatie* locatie12 = locatie_noua("asd", 0);
//    if(locatie12 == nullptr)
//        return -1;
//    delete locatie12;

    std::cout << "inainte de try\n";
    try {
        std::cout << "inainte de apel v2\n";
        {
            Obiectiv o("unibuc", std::make_unique <LocatieMunte>(buc));
            Obiectiv o2("unibuc", std::make_unique <LocatieMunte>(buc));
            t1.viziteaza(o);
        }
        locatie_noua_v2();
        std::cout << "dupa apel v2\n";
    }
    catch(int i) {
        std::cout << "in catch int\n";
    }
    catch(std::exception &err) {
        std::cout << "in catch: " << err.what() << "\n";
    }
    catch(...) {
        std::cout << "oops ¯\\_(ツ)_/¯\n";
    }

    std::cout << "dupa catch\n";

    LocatieMare l0("Baneasa", 10); // TODO coordonate
    LocatieMunte l1("Brasov", 100); // TODO coordonate
    // sad initialization list noises - nu merge cu liste de initializare
    // pt ca nu poate garanta ca nu se arunca exceptii or smth :(
    std::vector <std::unique_ptr <Locatie>> vec;
    vec.emplace_back(std::make_unique <LocatieMunte>("Cluj", 123));
    vec.emplace_back(std::make_unique <LocatieMare>("Constanta", 321));
//    vec.emplace_back(l0.clone());
//    vec.emplace_back(l1.clone());
    Sejur s(std::move(vec));
    s.adauga_ghid();

//    Sejur s1(s);
//    Sejur s1(std::move(s));
//    std::cout << s1.pret_total();
//    s1 = s;

    std::cout << "sejurul costa " << s.pret_total();
    t1.planifica(s);
//    t1.viziteaza(ob1);
    t1.adauga(ob1);
    t1.adauga({"Arcul de Triumf", std::make_unique <LocatieMunte>(buc)});
    std::cout << t1;
    return 0;
}

void locatie_noua_v2() {
    std::cout << "inainte de construirea obiectului\n";
    std::unique_ptr <Locatie> l_start = std::make_unique <LocatieMunte>("Bucuresti", 10); // TODO coordonate
    Obiectiv o("Parc Cismigiu", std::move(l_start));
    std::cout << "dupa construirea obiectului\n";
}

class Abc {
    void f();
};

void Abc::f() {}
