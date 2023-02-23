// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  std::int64_t count_d = 0;
  for (std::int64_t i = 2; i <= value / 2; i++) {
    if (value % i == 0) {
      ++count_d;
    }
  }
  if (count_d == 0) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  const std::int64_t size = 10000;
  std::int64_t arr[size] = { 0 };
  std::int64_t j = 0;
  for (int i = 2; i < 10000; i++) {
    if (checkPrime(i)) {
      arr[j] = i;
      j++;
    }
  }
  for (int i = 0; i < size; i++) {
    if (n - 1 == i) {
      return arr[i];
    }
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  const std::int64_t size = 10000;
  std::int64_t arr[size] = { 0 };
  std::int64_t j = 0;
  for (int i = 2; i < 10000; i++) {
    if (checkPrime(i)) {
      arr[j] = i;
      j++;
    }
  }
  for (int i = 0; i < 10000; i++) {
    if (arr[i] == value) {
      return arr[i + 1];
    }
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  const std::int64_t size = 1000;
  std::int64_t arr[size] = { 0 };
  std::int64_t j = 0, sum = 0;
  for (int i = 2; i < 1000; i++) {
    if (checkPrime(i)) {
      arr[j] = i;
      j++;
    }
  }
  for (int i = 1; i < hbound; i++) {
    sum += arr[i];
  }
  return sum;
}
