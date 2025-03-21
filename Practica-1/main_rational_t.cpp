/**
 * AUTOR: Marco Aguiar Álvarez
 * FECHA: 06/02/24 
 * EMAIL: alu0101620961@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *                "C++ Programming Style Guidelines"
 *             https://geosoft.no/development/cppstyle.html
 */

#include <iostream>
#include <cmath>

#include "rational_t.hpp"

using namespace std;

int main()
{
  rational_t a(1, 4), b(1, 4), c;

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;
  

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();

  // FASE II
   rational_t x(1, 3), y(2, 3);
   x.write();
   y.write();
   cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
   cout << "x < y? " << (x.is_less(y) ? "true" : "false") << endl;
   cout << "x > y? " << (x.is_greater(y) ? "true" : "false") << endl;

  // FASE III
   cout << "a + b: ";
   a.add(b).write();
  
   cout << "b - a: ";
   b.substract(a).write();

   cout << "a * b: ";
   a.multiply(b).write();
  
   cout << "a / b: ";
   a.divide(b).write();

  //Practica viernes
   cout << "num / √den: "; 
   a.squared_den();

  
  return 0;
}