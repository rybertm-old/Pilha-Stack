#include "pilha.h"

#include <iostream>

int main(int argc, char **argv)
{
	Pilha<int> pilha(5);
	pilha.push(1);
	pilha.push(3);
	pilha.print();
	std::cout << pilha.pop() << std::endl;
	pilha.push(2);
	pilha.print();

	std::cin.get();

	return 0;
}