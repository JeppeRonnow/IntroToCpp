#include "Bil.hpp"
#include "Mekaniker.hpp"

class ArbejdsSeddel {
public:
    ArbejdsSeddel(Bil& bil, Mekaniker& mekaniker, int timerne, int datoen);
    Bil& getBil() const;

    int getTimer() const;
    string getMekanikerNavn() const;
    int getDatoen() const;

private:
    Bil& bil;              // Reference to a Bil object
    Mekaniker& mekaniker;  // Reference to a Mekaniker object
    int datoen;            // Date of the work execution
    int timerne;           // Number of hours used
};
