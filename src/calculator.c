// src/calculator.c

#include <emscripten/emscripten.h>

EMSCRIPTEN_KEEPALIVE
int AddNumbers(int left_number, int right_number) {
  return left_number + right_number;
}

EMSCRIPTEN_KEEPALIVE
int SubtractNumbers(int left_number, int right_number) {
  return left_number - right_number;
}

EMSCRIPTEN_KEEPALIVE
int MultiplyNumbers(int left_number, int right_number) {
  return left_number * right_number;
}

EMSCRIPTEN_KEEPALIVE
double DivideNumbers(double left_number, double right_number) {
  if (right_number == 0.0) {
    return 0.0;
  }

  return left_number / right_number;
}

int main(void) {
  return 0;
}
