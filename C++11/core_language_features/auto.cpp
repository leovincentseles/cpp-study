#include <initializer_list>

// auto: Placeholder type specifiers: https://en.cppreference.com/w/cpp/language/auto

// Syntax:
//  (1) auto
//      Can used with const or &, Ex: const auto &
//  (2) decltype(auto)
//      Must be the sole constituent of the declared type. Ex: const decltype(auto) is invalid.

// Explanation:
//  (1) Parameter declarations
//  (2) Function declarations
//  (3) Variable declarations
//  (4) Structured binding declarations
//  (5) new expressions
//  (6) Function-style cast

auto d = {1, 2};