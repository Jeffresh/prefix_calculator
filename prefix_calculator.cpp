#include "prefix_calculator.hpp"


bool is_operator(char c){ return (c =='+' || c == '-' || c == '*' || c =='/'); }


int operar(char op, int a, int b)
{
	int res = 0;

	switch(op)
	{
		case '+': res = a + b; break;
		case '-': res = a -b; break;
		case '*': res = a* b; break;
		case '/': res = (b!=0)? a/b: 0  ; break;
	}


	return res;
}





int prefix_calculator(const char* c, Lista<int> ops)
{

	size_t i = 0;

	int res = 0;
	bool ready = false;
	char op;

	Pila<int> p;
	Pila<char>q;

	int a = 0, b= 0 ;

	while(c[i]!= '\0')
	{


		if(is_operator(c[i]))
		{
			q.push(c[i]);
			ready = false;
		}

		else 
		{
			b = ops.elemento(ops.primera());ops.eliminar(ops.primera());


			if(ready)
			{
				while(!p.vacia())
				{
					a = p.tope(); p.pop();
					op = q.tope(); q.pop();
					b = operar(op,a,b);
					

				}
			}

			p.push(b);
			ready = true;




		}

		i++;
	}



	return  p.tope();


}
