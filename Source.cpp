#include "THangar.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 0;
	std::cout << "Введите количество ангаров: ";
	std::cin >> n;

	if (n == 0) return 0;
	
	THangar *stock = new THangar[n];
	std::cout << "Введите длину и ширину ангаров: " << std::endl << std::endl;
	bool error = false;
	int i = 0;
	while (i < n)
	{
		long length = 0;
		long width = 0;
		std::cout << "Ангар " << (i + 1) << ":" << std::endl << "Длина: ";
		std::cin >> length;
		stock[i].SetLength(length);
		std::cout << "Ширина: ";
		std::cin >> width;
		stock[i].SetWidth(width);
		i++;
	}
	std::cout << std::endl;
	long long square = 0;
	for (i = 0; i < n; i++)
	{
		std::cout << "Ангар " << (i + 1) << ":" << "    ";
		stock[i].Print();
		square +=stock[i].Square();
	}
	std::cout << std::endl << "Площадь склада : " << square << std::endl;
	delete[]stock;
	system("pause");
}
