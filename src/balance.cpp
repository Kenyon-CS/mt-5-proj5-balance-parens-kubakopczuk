#include "balance.hpp"
#include <string>

static bool is_balanced_rec(const std::string& s, int idx, int open) {
    // TODO: nothing
    if (open < 0) {
        return false;
    }
    if (idx == (int)s.size()) {
        return open == 0;
    }
    if (s[idx] == '(') {
        return is_balanced_rec(s, idx + 1, open + 1);
    }
    else if (s[idx] == ')') {
        return is_balanced_rec(s, idx + 1, open - 1);
    }
    else {
        return is_balanced_rec(s, idx + 1, open);
    }
}

bool is_balanced(const std::string& s) {
    return is_balanced_rec(s, 0, 0);
}
