#include <initializer_list>
#include <iostream>

template <auto n>
struct TemplateA {
  char my_str[n];
};

void print(auto a) { std::cout << a; }

int main() {
  // auto: Placeholder type specifiers:
  // https://en.cppreference.com/w/cpp/language/auto

  // Syntax:
  // (1) auto
  //     Can used with const or &, Ex: const auto &
  // (2) decltype(auto)
  //     Must be the sole constituent of the declared type. Ex: const
  //     decltype(auto) is invalid.

  // Explanation:
  // (1) Parameter declarations
  // (1-1) Generic lambda (parameter of a lambda expression has a placeholder
  //  type)
  auto lambda = [](auto lhs, auto rhs) {};

  // (1-2) If a non-type template parameter has a placeholder type, its type is
  // deduced from the corresponding template argument.
  //    - TemplateA -> n is the non-type template parameter
  TemplateA<5> my_temp;  // n is deduced from the template argument.

  // (1-3) Compiler will help declare the abbreviated function template when
  // the function parameter has a place holder type.
  //    - template<class T> void print(T); <-- abbreviated function template

  // (2) Function declarations
  // auto f() -> int; // function declarator with a trailing return type.
  // auto g() { return 0.0; } // g is deduced to double
  // auto h(); // h's return type will be deduced when it is defined.

  // (3) Variable declarations

  // (4) Structured binding declarations
  //  (5) new expressions
  //  (6) Function-style cast

  auto d = {1, 2};
  return 0;
}