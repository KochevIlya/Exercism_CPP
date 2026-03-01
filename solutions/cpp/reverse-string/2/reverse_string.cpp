#include "reverse_string.h"

#include <string>

namespace reverse_string {

std::string reverse_string(const std::string& str) {

    std::string result = str;

    for (auto left = result.begin(), right = result.end(); left < right; left++, right--) {
        std::swap(*left, *right);
    }
    return result;


}
}  // namespace reverse_string
