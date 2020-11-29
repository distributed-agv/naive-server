#include <utility>
#include <vector>

extern const std::vector<std::pair<int, int>> kSteps;

bool IsValidPoint(std::pair<int, int>, int, int);
std::pair<int, int> PointPlus(std::pair<int, int>, std::pair<int, int>);
std::pair<int, int> PointMinus(std::pair<int, int>, std::pair<int, int>);
