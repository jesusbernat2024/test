#include <iostream>
#include <windows.h>
using namespace std;

typedef void (*rpFunc)();
typedef void (*preguntaFunc)(int x);
typedef void (*checkFunc)(int x, string r);

int main() {
  HMODULE hModule = LoadLibraryA("test.dll");
  rpFunc rellenaPreguntas = (rpFunc)GetProcAddress(hModule, "rellenaPregutas");
  preguntaFunc pregunta = (preguntaFunc)GetProcAddress(hModule, "pregunta");
  //preguntaFunc getEnunciado = (preguntaFunc)GetProcAddress(hModule, "getEnunciado");
  //preguntaFunc getRespuestas = (preguntaFunc)GetProcAddress(hModule, "getRespuestas");
  //checkFunc checkRespuesta = (checkFunc)GetProcAddress(hModule, "checkRespuesta");

  rellenaPreguntas();

  pregunta(1);
  pregunta(2);

  return 0;
}
