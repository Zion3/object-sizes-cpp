#include <iostream>

int main()
{
	int placeholder{};

	std::cout << "bool:\t\t" << sizeof(bool) << " byte(s)\n";
	std::cout << "char:\t\t" << sizeof(char) << " byte(s)\n";
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " byte(s)\n";
	std::cout << "char16_t:\t" << sizeof(char16_t) << " byte(s)\n";
	std::cout << "char32_t:\t" << sizeof(char32_t) << " byte(s)\n";
	std::cout << "short:\t\t" << sizeof(short) << " byte(s)\n";
	std::cout << "int:\t\t" << sizeof(int) << " byte(s)\n";
	std::cout << "long:\t\t" << sizeof(long) << " byte(s)\n";
	std::cout << "long long:\t" << sizeof(long long) << " byte(s)\n";
	std::cout << "float:\t\t" << sizeof(float) << " byte(s)\n";
	std::cout << "double:\t\t" << sizeof(double) << " byte(s)\n";
	std::cout << "long double:\t" << sizeof(long double) << " byte(s)\n";

	std::cin >> placeholder;
}