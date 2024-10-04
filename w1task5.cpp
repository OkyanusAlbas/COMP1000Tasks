#include <iostream>

int main() {
    // Without parentheses
    int resultWithoutParentheses = 5 + 3 * 2 / 4 - 1;
    std::cout << "Result without parentheses: " << resultWithoutParentheses << std::endl;

    // With parentheses
    float resultWithParentheses = (5 + 3) * (2 / (4 - 1));
    std::cout << "Result with parentheses: " << resultWithParentheses << std::endl;

    return 0;
}

