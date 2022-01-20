#include <cassert>
#include <type_traits>
#include <iostream>

template <typename T>
struct TypDanych
{
};

template <typename T>
struct Test
{

	T funkcja(int x, TypDanych<T>);

private:
	T read(int z, TypDanych<int>);
	T read(int z, TypDanych<char>);

	int calk = 10;
	char znak = 'a';
};

int main()
{
	TypDanych<int> in;
	TypDanych<char> znak;

	Test<int> oi;
	oi.funkcja(10, in);
}

template <typename T>
T Test<T>::funkcja(int x, TypDanych<T>)
{
	return read(x, TypDanych<T>{});
}

template <typename T>
T Test<T>::read(int z, TypDanych<int>)
{
	std::cout << "int \n";
}

template <typename T>
T Test<T>::read(int z, TypDanych<char>)
{
	std::cout << "char \n";
}