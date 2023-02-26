// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <vector>

bool checkPrime(uint64_t value) {
    bool chek = true;
    for (int i = 2; i < value; ++i) {
        if (value % i == 0) {
            chek = false;
            break;
        }
        else
            chek = true;
    }
    return chek;
}

uint64_t nPrime(uint64_t n) {
    std::vector <int> arr;
    for (int i = 2; i < 1000000; ++i) {
        if (checkPrime(i))
            arr.push_back(i);
    }
    return arr[n - 1];
}

uint64_t nextPrime(uint64_t value) {
    uint64_t k = 0;
    for (int i = 1; i < 1000000; ++i) {
        if (value == nPrime(i)) {
            k = nPrime(++i);
            break;
        }
    }
    return k;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (int i = 1; i < hbound; ++i) {
        if (hbound > nPrime(i))
            sum += nPrime(i);
    }
    return sum;
}
