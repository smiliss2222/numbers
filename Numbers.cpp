#include <iostream>

int main()
{
	int number, thausand, hundred, tens, unit;
	setlocale(LC_ALL, "RU");

	while (true)
	{
		std::cout << "Введите число от 1 до 9999: ";
		std::cin >> number;
		thausand = number / 1000;
		hundred = number % 1000 / 100;
		tens = number % 100 / 10;
		unit = number % 10;
		if (thausand == 1)
		{
			std::cout << "Одна тысяча ";
		}
		else if (thausand == 2)
		{
			std::cout << "Две тысячи ";
		}
		else if (thausand == 3)
		{
			std::cout << "Три тысячи  ";
		}
		else if (thausand == 4)
		{
			std::cout << "Четыре тысячи ";
		}
		else if (thausand == 5)
		{
			std::cout << "Пять тысяч ";
		}
		else if (thausand == 6)
		{
			std::cout << "Шесть тысяч ";
		}
		else if (thausand == 7)
		{
			std::cout << "Семь тысяч ";
		}
		else if (thausand == 8)
		{
			std::cout << "Восемь тысяч ";
		}
		else if (thausand == 9)
		{
			std::cout << "Девять тысяч ";
		}

		if (hundred == 1) // ñîòíè
		{
			std::cout << "сто ";
		}
		else if (hundred == 2)
		{
			std::cout << "двести ";
		}
		else if (hundred == 3)
		{
			std::cout << "тристо ";
		}
		else if (hundred == 4)
		{
			std::cout << "четыресто ";
		}
		else if (hundred == 5)
		{
			std::cout << "пятьсот ";
		}
		else if (hundred == 6)
		{
			std::cout << "шестьсот ";
		}
		else if (hundred == 7)
		{
			std::cout << "семьсот ";
		}
		else if (hundred == 8)
		{
			std::cout << "восемьсот ";
		}
		else if (hundred == 9)
		{
			std::cout << "девятьсот ";
		}

		do
		{
			if (tens == 1)
			{
				if (unit == 1)
				{
					std::cout << "одинадцать\n";
					break;
				}
				else if (unit == 2)
				{
					std::cout << "двенадцать\n";
					break;
				}
				else if (unit == 3)
				{
					std::cout << "тринадцать\n";
					break;
				}
				else if (unit == 4)
				{
					std::cout << "четырнадцать\n";
					break;
				}
				else if (unit == 5)
				{
					std::cout << "пятнадлцать\n";
					break;
				}
				else if (unit == 6)
				{
					std::cout << "шестнадцать\n";
					break;
				}
				else if (unit == 7)
				{
					std::cout << "семнадцать\n";
					break;
				}
				else if (unit == 8)
				{
					std::cout << "восемнадцать\n";
					break;
				}
				else if (unit == 9)
				{
					std::cout << "девятнадцаь\n";
					break;
				}
				else if (unit == 0)
				{
					std::cout << "десять\n";
					break;
				}
			}
			else if (tens == 2)
			{
				std::cout << "двадцать ";
			}
			else if (tens == 3)
			{
				std::cout << "тридцать ";
			}
			else if (tens == 4)
			{
				std::cout << "сорок ";
			}
			else if (tens == 5)
			{
				std::cout << "пятьдесят ";
			}
			else if (tens == 6)
			{
				std::cout << "шестьдесят ";
			}
			else if (tens == 7)
			{
				std::cout << "семьдесят ";
			}
			else if (tens == 8)
			{
				std::cout << "восемьдесят ";
			}
			else if (tens == 9)
			{
				std::cout << "девяносто ";
			}

			if (unit == 1)
			{
				std::cout << "один рубль\n";
			}
			else if (unit == 2)
			{
				std::cout << "два рубля\n";
			}
			else if (unit == 3)
			{
				std::cout << "три рубля\n";
			}
			else if (unit == 4)
			{
				std::cout << "четыре рубля\n";
			}
			else if (unit == 5)
			{
				std::cout << "пять рублей\n";
			}
			else if (unit == 6)
			{
				std::cout << "шесть рублей\n";
			}
			else if (unit == 7)
			{
				std::cout << "семь рублей\n";
			}
			else if (unit == 8)
			{
				std::cout << "восемь рублей\n";
			}
			else if (unit == 9)
			{
				std::cout << "девять рублей\n";
			}
			else if (unit == 0)
			{
				std::cout << "рублей\n";
			}

			break;
		} while (true);

	}


}