// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool chek = true;
    if (value == 2)
        return chek;
    for (int i = 2; i < value; ++i) {
        if (value % i == 0)
            chek = false;
    }
    return chek;
}

uint64_t nPrime(uint64_t n) {
    uint64_t  chislo = 1;
    int num = 0;
    while (true) {
        bool chek = true;
        ++chislo;
        if (chislo != 2) {
            for (int i = 2; i < chislo; ++i) {
                if (chislo % i == 0)
                    chek = false;
            }
        }
        if (chek == true)
            num++;
        if (num == n)
            return chislo;
    }
}

uint64_t nextPrime(uint64_t value) {
    uint64_t chislo = value;
    if (value < 2)
        return 2;
    while (true) {
        bool chek = true;
        ++chislo;
        for (int i = 2; i < chislo; ++i) {
            if (chislo % i == 0)
                chek = false;
        }
        if (chek == true)
            return chislo;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    if (hbound < 3)
        return 0;
    for (int i = 2; i < hbound; ++i) {
        bool chek = true;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0)
                chek = false;
        }
        if (chek == true) {
            sum += i;
        }
    }
    return sum;
}
