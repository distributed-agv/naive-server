#include "util.h"
#include <utility>

const std::vector<std::pair<int, int>> kSteps = {
  std::make_pair(0, 1),
  std::make_pair(0, -1),
  std::make_pair(1, 0),
  std::make_pair(-1, 0),
};

bool IsValidPoint(std::pair<int, int> point, int row_num, int col_num) {
  return point.first >= 0 && point.first < row_num &&
      point.second >= 0 && point.second < col_num;
}

std::pair<int, int> PointPlus(std::pair<int, int> lhs,
                              std::pair<int, int> rhs) {
  return std::make_pair(lhs.first + rhs.first, lhs.second + rhs.second);
}

std::pair<int, int> PointMinus(std::pair<int, int> lhs,
                               std::pair<int, int> rhs) {
  return std::make_pair(lhs.first - rhs.first, lhs.second - rhs.second);
}
