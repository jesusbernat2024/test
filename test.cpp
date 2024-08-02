#include <iostream>
#include <string>
using namespace std;

string preguntas[2][6];

void rellenaPreguntas(){
  preguntas[0][0] = "Cual es la capital de Italia?";
  preguntas[0][1] = "Milan";
  preguntas[0][2] = "Roma";
  preguntas[0][3] = "Florencia";
  preguntas[0][4] = "Napoles";
  preguntas[0][5] = "b";

  preguntas[1][0] = "Cual es la capital de Francia?";
  preguntas[1][1] = "Paris";
  preguntas[1][2] = "Tolouse";
  preguntas[1][3] = "Lyon";
  preguntas[1][4] = "Perpinyan";
  preguntas[1][5] = "a";
}

void getEnunciado(int n){
  cout << preguntas[n-1][0] + "\n";
}
void getRespuestas(int n){
  cout << "a. "+ preguntas[n-1][1] + "\n";
  cout << "b. "+ preguntas[n-1][2] + "\n";
  cout << "c. "+ preguntas[n-1][3] + "\n";
  cout << "d. "+ preguntas[n-1][4] + "\n";
}
void checkRespuesta(int n, string r){
  if( r==preguntas[n-1][5] ){
    cout << "CORRECTO \n\n";
  }else{
    cout << "TE HAS EQUIVOCADO \n\n";
  }
}

void pregunta(int numPregunta){
  string respuesta;

  getEnunciado(numPregunta);
  getRespuestas(numPregunta);
  
  cout << "respuesta: ";
  cin >> respuesta;

  checkRespuesta(numPregunta, respuesta);

}