#include <vector>
#include <iostream>
#include <array>

void obzac()
{
	std::cout << "\n\n//============================================================================//\n\n";
};

//task1
void task1()
{
	int num;

	std::cout << "enter your number: ";

	while (true)
	{
		std::cin >> num;

		if (std::cin.good() && std::cin.peek() == '\n')
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
		std::cin.clear();
		std::cerr << "ARE YOU BRAINDEAD?? try again: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "your number is: " << num << std::endl;
}

//task2
template<typename _CharT, typename _Traits>
inline std::basic_ostream<_CharT, _Traits>&
endll(std::basic_ostream<_CharT, _Traits>& os)
{
	return flush((os.put(os.widen('\n'))).put(os.widen('\n')));
}
void task2()
{
	std::cout << "Hello" << endll << "world";
}


int main()
{
	obzac();
	task1();
	obzac();
	obzac();
	task2();
	obzac();
}