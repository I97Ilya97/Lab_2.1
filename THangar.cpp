#include <iostream>
#include "THangar.h"




THangar::THangar()																//Конструктор по умолчанию 
{
	Length = 0;
	Width = 0;
}

THangar::THangar(long length, long width)										// Пользовательский конструктор 
{
	Length = length;
	Width = width;
}

THangar::~THangar() {}															// конструктор удаления




void THangar::SetLength(long length)											// Метод SetLength
{
	Length = length;
}


void THangar::SetWidth(long width)											    // Метод SetLength
{
	Width = width;
}


long long THangar::Square() const											    // Метод возвращения площади 
{
	return Length * Width;
}


void THangar::Print()														    // функция вывода
{
	std::cout << Length << " x " << Width << std::endl;
}


std::ostream& operator << (std::ostream &out, const THangar &angar)			   // Оператор вывода 
{
	out << angar.Length << " x " << angar.Width;
	return out;
}
