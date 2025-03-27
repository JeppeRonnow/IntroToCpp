#ifndef COINCOLLECTION_H
#define COINCOLLECTION_H

#include <vector>
#include "Coin.hpp"

class CoinCollection {
public:
    CoinCollection();
    ~CoinCollection(); // ryd op i heap-objekter

    void addCoin(Coin& coin); // tager imod en coin-by-reference (som i main)
    int getTotalValue() const;
    int getTotalValueDecade(int decade) const;

private:
    std::vector<Coin*> coins; // pointere til coin obj
    int coinCount;
};

#endif
