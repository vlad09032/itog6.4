/*
Напишите функцию для вывода строки C-style символ за символом. Используйте указатель для перехода
и вывода каждого символа поочерёдно. Остановите вывод при столкновении с нуль-терминатором.
В функции main() протестируйте строку Hello, world!.
*/
#include<iostream>

void vivod(char* mystring)
{
	while (*mystring != '\0')
	{
		std::cout << *mystring;
		++mystring;
	}
}

int main()
{
	char mystring[] = "Hello, world!";
	vivod(mystring);
}