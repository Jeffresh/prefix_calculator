#include <iostream>
#include "pila_enla.hpp"
#include "lista_d_enla.hpp"


bool is_operator(char c);
int operar(char op, int a, int b);
int prefix_calculator(const char* c, Lista<int>);