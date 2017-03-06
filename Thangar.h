#include <iostream>
#include <stdlib.h>

class THangar
{
private:
	long Length;
	long Width;

public:
	
	THangar();																 //Конструктор по умолчанию

	
	THangar(long length, long width);										//Пользовательский конструктор 

	
	~THangar();																// конструктор удаления

	void SetLength(long length);											// Метод SetLength

	
	void SetWidth(long width);											    // Метод SetWidth

	long long Square() const;											    // Метод возвращения площади 

	void Print();														    // функция вывода

	friend std::ostream& operator << (std::ostream &out, const THangar &);   // Оператор вывода  
};

std::ostream& operator << (std::ostream &out, const THangar &angar);
