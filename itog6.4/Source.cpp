/*
�������� ������� ��� ������ ������ C-style ������ �� ��������. ����������� ��������� ��� ��������
� ������ ������� ������� ���������. ���������� ����� ��� ������������ � ����-������������.
� ������� main() ������������� ������ Hello, world!.
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