// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
	bool chek = true;
	for (int i = 2; i < value; ++i) {
		if (value % i == 0) {
			chek = false;
			break;
		}
		else {
			chek = true;
		}
	}
	return chek;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
