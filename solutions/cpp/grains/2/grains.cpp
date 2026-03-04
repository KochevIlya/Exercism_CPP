#include "grains.h"

namespace grains {

    unsigned long long square(int cell) {

        unsigned long long total = 1;
        total = total << (cell - 1);
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
