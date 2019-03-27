#include "pilha.h"

#include <iostream>

template class Pilha<int>;
template class Pilha<float>;
template class Pilha<double>;
template class Pilha<char>;

template <typename T>
Pilha<T>::Pilha(int tam)
{
	m_dado = new T[tam];
	m_top = -1;
	m_tam = tam;
}

template<typename T>
Pilha<T>::~Pilha()
{
	empty();
}

template<typename T>
bool Pilha<T>::isFull()
{
	if (m_top == m_tam - 1)
		return true;
	return false;
}

template<typename T>
bool Pilha<T>::isEmpty()
{
	if (m_top == -1)
		return true;
	return false;
}

template<typename T>
bool Pilha<T>::push(T dado)
{
	if (isFull())
		return false;

	m_dado[++m_top] = dado;
	return true;
}

template<typename T>
T Pilha<T>::pop()
{
	if (isEmpty())
		return 0;

	T dado = m_dado[m_top--];
	return dado;
}

template<typename T>
T Pilha<T>::top()
{
	if (!isEmpty())
		return m_dado[m_top];
	return 0;
}

template<typename T>
void Pilha<T>::empty()
{
	delete[] m_dado;
}

template<typename T>
void Pilha<T>::print()
{
	int top = m_top;
	while (top != -1)
	{
		std::cout << "\n" << m_dado[top--] << " ";
	}
	std::cout << std::endl;
}