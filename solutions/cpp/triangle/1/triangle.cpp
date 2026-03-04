#include "triangle.h"

#include <stdexcept>

namespace triangle {

flavor kind (double a, double b, double c) {


    if (a + b < c || b + c < a || a + c < b || a < 0 || b < 0 || c < 0) {
        throw std::domain_error("");
    }
    if (a == 0 && b == 0 && c == 0) {
        throw std::domain_error("");
    }
    if (a == b && b == c) {
        return flavor::equilateral;
    }
    if (a== b || b == c || a== c) {
        return flavor::isosceles;
    }
    return flavor::scalene;

}

}  // namespace triangle
