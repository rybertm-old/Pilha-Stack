#ifndef PILHA_H
#define PILHA_H

template <typename T>
class Pilha
{
private:
	T *m_dado;
	int m_top;
	int m_tam;

public:
	Pilha(int tam);
	~Pilha();

	bool isFull();
	bool isEmpty();
	bool push(T dado);
	T	 pop();
	T	 top();
	void empty();
	void print();
};

#endif	//PILHA_H
