#include <iostream>
using namespace std;

int soma(int a, int b);

class MinhaClasse
{
	int a,b;
public:
	
	MinhaClasse(int a = 0, int b = 0):a(a),b(b){};
	
	int multiplica()
	{
		return a*b;
	}
	
};