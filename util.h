#ifndef UTIL_H_
#define UTIL_H_

#include <vector>

struct IntPair {
  int x;
  int y;
  explicit IntPair();
  explicit IntPair(int, int);
  bool operator<(const IntPair &) const;
  bool operator>(const IntPair &) const;
  bool operator==(const IntPair &) const;
  bool operator!=(const IntPair &) const;
  IntPair operator+(const IntPair &) const;
  IntPair operator-(const IntPair &) const;
  int DotProduct(const IntPair &) const;
  bool Validate(int, int) const;
};

extern const std::vector<IntPair> kOffsets;

#endif
