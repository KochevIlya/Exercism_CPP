#include "reverse_string.h"

#include <string>

namespace reverse_string {

std::string reverse_string(const std::string& str) {

    std::string result = str;

    for (int i = 0; i < (int)(str.length()) / 2; i++) {
        std::swap(result[i], result[str.length() - 1 - i]);
    }
    return result;


}
}  // namespace reverse_string
