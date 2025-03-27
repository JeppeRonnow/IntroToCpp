#include <../headers/CoinCollection.hpp>

CoinCollection::CoinCollection() : coinCount(0) {}


void CoinCollection::addCoin(Coin& coin) {
    coins.push_back(&coin); // gem pointer
    ++coinCount; // tæl op
}

int CoinCollection::getTotalValue() const {
    int total = 0;
    for (int i = 0; i < coinCount; ++i) {
        total += coins[i]->getValue();
    }
    return total;
}

int CoinCollection::getTotalValueDecade(int decade) const {
    int total = 0;
    int startYear = decade * 10;
    int endYear = startYear + 9;

    for (int i = 0; i < coinCount; ++i) {
        int year = coins[i]->getYearIssued();
        if (year >= startYear && year <= endYear) {
            total += coins[i]->getValue();
        }
    }

    return total;
}

CoinCollection::~CoinCollection() {
}