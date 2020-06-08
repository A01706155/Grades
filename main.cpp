#include <iostream>
#include <string>
#include<stdlib.h>
#include "Grader.h"

using namespace std;

int main() {
  Grader alumno1("112341423114322314231442314231223422","11 3 1133 22322314231432211231 34 2 ");

  cout<<"Tu puntaje es de "<<alumno1.obtenerPuntaje()<<" puntos, tu calificación es: "<<alumno1.obtenerGrado()<<endl;
}

//Cada respuesta correcta recibe dos puntos, cada respuesta incorrecta quita un punto y ninguna respuesta obtiene cero puntos.

//Escribe la clase Grader que procese los datos del examen, un alumno a la vez. El resultado debe ser el puntaje del examen, seguido de la calificación (o grado) del examen. Supón la siguiente escala de grado: 90% – 100%, A; 80% – 89.99%, B; 70% – 79.99%, C; 60% – 69.99%, D; y 0% – 59.99%, F.