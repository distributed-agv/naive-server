#ifndef UTIL_H_
#define UTIL_H_

#include <vector>

class IntPair {
public:
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
private:
  int x;
  int y;
};

extern const std::vector<IntPair> kOffsets;

#endif
