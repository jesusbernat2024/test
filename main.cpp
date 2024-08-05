#include <iostream>
#include <windows.h>
using namespace std;

typedef void (*rpFunc)();
typedef void (*preguntaFunc)(int x);

int main() {
  HMODULE hModule = LoadLibraryA("test.dll");
  rpFunc rellenaPreguntas = (rpFunc)GetProcAddress(hModule, "rellenaPreguntas");
  preguntaFunc pregunta = (preguntaFunc)GetProcAddress(hModule, "pregunta");

  rellenaPreguntas();

  pregunta(1);
  pregunta(2);

  return 0;
}
