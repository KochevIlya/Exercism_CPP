#include "grains.h"

namespace grains {

    unsigned long long square(int cell) {

        int current_cell = 1;
        unsigned long long total = 1;
        while (current_cell < cell) {
            current_cell++;
            total *= 2;
        }
        return total;
    }
    unsigned long long total() {
        unsigned long long total = 1;
        int current_cell = 1;
        while (current_cell < 64) {
            current_cell++;
            total += square(current_cell);
        }
        return total;

    }



}  // namespace grains
