// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    uint64_t a;
    if (value < 2)
        return false;
    for (a = 2; a <= value; ++a) {
        if (value%a == 0 && value != a)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t a, count = 0;
    for (a = 1; a <= n*n; ++a) {
        ++a;
        if (checkPrime(a))
            ++count;
        if (count == n)
            return a;
    }
    return count;
}


uint64_t nextPrime(uint64_t value) {
    uint64_t a;
    for (a = value+1; a <= value*value; ++a)
        if (checkPrime(a))
            break;
    return a;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0, a;
    for (a = 0; a < hbound; ++a)
    if (checkPrime(a))
        sum += a;
    return sum;
}
