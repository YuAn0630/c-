#include <iostream>

int main() {
  float num1, num2, result;
  char op;

  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;

  std::cout << "Enter the operator (+, -, *, /): ";
  std::cin >> op;

  switch(op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      std::cout << "Invalid operator!";
      return 0;
  }

  std::cout << "Result: " << result;
  return 0;
}
