#include "prefix_calculator.hpp"



int main()
{

	char cad[] = "-*/A-B+CDE+F+GH";
	Lista<int> ops; ops.insertar(15,ops.fin());
	ops.insertar(7,ops.fin());ops.insertar(1,ops.fin());
	ops.insertar(1,ops.fin());ops.insertar(3,ops.fin());
	ops.insertar(2,ops.fin());ops.insertar(1,ops.fin());
	ops.insertar(1,ops.fin());

	std::cout<<prefix_calculator(cad, ops);
}