#include <iostream>
#include <iomanip>
#include <array>
int main() {
	std::cout << "\n" << std::endl;
#pragma region Array1

	std::array<int, 5> n;

	for (size_t i{ 0 }; i < n.size(); ++i) {
		n[i] = 0;
	}
	for (size_t j{ 0 }; j < n.size(); ++j) {
		std::cout << std::setw(7) << j << std::setw(10) << n[j] << std::endl;
	}
#pragma endregion
	std::cout << "\nArray1" << "/////////////////////////////////////////////////////////////" << "\n" << std::endl;
#pragma region Array2

	std::array<int, 5> nn{ 32, 27,64,18,95 };

	std::cout << "Element " << std::setw(10) << "Value" << std::endl;

	for (size_t j{ 0 }; j < nn.size(); ++j) {
		std::cout << std::setw(7) << j << std::setw(10) << nn[j] << std::endl;
	}
#pragma endregion
	std::cout << "\nArray2" << "/////////////////////////////////////////////////////////////" << "\n" << std::endl;
#pragma region Array3

	const size_t arraySize{ 7 };
	std::array<int, arraySize> value;

	for (size_t i{ 0 }; i < value.size(); ++i) {
		value[i] = 2 + 2 * i;
	}
	std::cout << "Element" << std::setw(10) << "Value" << std::endl;
	for (size_t j{ 0 }; j < value.size(); ++j) {
		std::cout << std::setw(7) << j << std::setw(10) << value[j] << std::endl;
	}
#pragma endregion
	std::cout << "\nArray3" << "/////////////////////////////////////////////////////////////" << "\n" << std::endl;
#pragma region Array4

	const size_t arraySize_{ 4 };
	std::array<int, arraySize_> a{ 10, 20, 30, 40 };
	int total{ 0 };

	for (size_t i{ 0 }; i < a.size(); ++i) {
		total += a[i];
	}
	std::cout << "Total: " << total << std::endl;
#pragma endregion
	std::cout << "\nArray4" << "/////////////////////////////////////////////////////////////" << "\n" << std::endl;
#pragma region Array5
	const size_t _arraySize_{ 11 };
	std::array<int, _arraySize_> aa{ 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };
	std::cout << "Grade distribution: " << std::endl;
	for (size_t i{ 0 }; i < aa.size(); ++i) {
		if (0 == i) {
			std::cout << " 0-9: ";
		}
		else if (10 == i) {
			std::cout << " 100: ";
		}
		else {
			std::cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}
		for (unsigned int stars{ 0 }; stars < aa[i]; ++stars) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
#pragma endregion
	std::cout << "\nArray5" << "/////////////////////////////////////////////////////////////" << "\n" << std::endl;

}
