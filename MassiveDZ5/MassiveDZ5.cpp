#include <iostream>
void Memory(double*& ptr, int size) {
	ptr = new double[size];
}
void Memory(int** ptr, int size) {
	*ptr = new int[size];
}
void Zapolnenie(double* ykaz, int size)
{
	for (int i = 0; i < size; i++) {
		ykaz[i] = rand() % 50;
	}
}
void Zapolnenie(int* ykaz, int size)
{
	for (int i = 0; i < size; i++) {
		ykaz[i] = rand() % 50;
	}
}
void Print(double* ykaz, int size)
{
	for (int i = 0; i < size; i++) {
		std::cout << ykaz[i] << " ";
	}
}
void Print(int* ykaz, int size)
{
	for (int i = 0; i < size; i++) {
		std::cout  << ykaz[i] << " ";
	}
}
void DeleteMemory(double* ykaz, int size)
{
	delete[] ykaz;
}
void Perestanovka(int* mas, int size)
{
	for (int i = 0; i <= size-2; i+=2)
	{
		std::swap(mas[i], mas[i + 1]);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	bool flag = true;
	std::string otvet;
	while(flag)
	{ 
		int size;
		std::cout << "Выберите размер массива: ";
		std::cin >> size;
		while (size <= 0)
		{
			std::cin >> size;
		}
		double* mas = nullptr;
		Memory(mas, size);
		Zapolnenie(mas, size);
		Print(mas, size);
		DeleteMemory(mas, size);
		std::cout << "Хотите ли вы продолжить работу?"<<std::endl;
		std::cin >> otvet;
		if (otvet == "No" ||otvet == "NO")
		{
			flag = false;
		}
	}
	int* massive = nullptr;
	int length = 13;
	Memory(&massive, length);
	Zapolnenie(massive, length);
	Print(massive, length);
	std::cout << std::endl;
	Perestanovka(massive, length);
	Print(massive, length);
}