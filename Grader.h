#ifndef Grader_h
#define Grader_h

#include<iostream>
#include<stdlib.h>
using namespace std;

class Grader{
  protected: //Atributos
    string correctas;
    string respuestas;
  public: //Métodos
    Grader();
    Grader(string, string);
    int obtenerPuntaje();
    string obtenerGrado();
    float calif = 0;
    float puntostotalesdelexamen = 0;
};

//Constructor, inicializar atributos

Grader::Grader(){
  correctas = "Aqui deberian ir las correctas";
  respuestas = "Aqui deberian ir las respuestas";
}

Grader::Grader(string _correctas, string _respuestas){
  correctas = _correctas;
  respuestas = _respuestas;
}

int Grader::obtenerPuntaje(){

  string comprobador = " ";

  for(int h = 0;h<=35; h++){
    if(correctas[h] == respuestas[h]){
      calif += 2;
    }
    else if(respuestas[h] == comprobador[0]){
      
    }
    else{
      calif -= 1;
    }
    puntostotalesdelexamen += 2;
  }

  return calif;
}

string Grader::obtenerGrado(){
  
  float porcentaje = (calif/puntostotalesdelexamen);
  string grado;
  
//Supón la siguiente escala de grado: 90% – 100%, A; 80% – 89.99%, B; 70% – 79.99%, C; 60% – 69.99%, D; y 0% – 59.99%, F.

  if(porcentaje >= 0.89){
    grado = "A";
  }
  else if(porcentaje >= 0.79){
    grado = "B";
  }
  else if(porcentaje >= 0.69){
    grado = "C";
  }
  else if(porcentaje >= 0.59){
    grado = "D";
  }
  else{
    grado = "F";
  }

  return grado;

}

#endif