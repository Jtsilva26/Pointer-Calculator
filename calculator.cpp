#include <stdlib.h>

#include <iostream>
using namespace std;

void getNum(int *a, int *b) {
  cout << "Enter a two integers: " << endl;
  cin >> *a >> *b;
}

void calc(int *a, int *b) {
  char op;
  cout << "Enter an operator: ex(+ - * /)" << endl;
  cin >> op;
  switch (op) {
    case '+':
      cout << "Result = " << *a + *b << endl;
      break;
    case '-':
      cout << "Result = " << *a - *b << endl;
      break;
    case '*':
      cout << "Result = " << *a * *b << endl;
      break;
    case '/':
      cout << "Result = " << *a / *b << endl;
      break;
    default:
      cout << "Invalid Operator" << endl;
      break;
  }
}

int main() {
  int a, b;
  int *pointerA = &a;
  int *pointerB = &b;
  getNum(pointerA, pointerB);
  calc(pointerA, pointerB);
  return 0;
}