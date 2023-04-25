// перевантижити оператор >> та *
// реалізувати множення матриць за допомогою оператора *

#include <iostream>

class Matrix
{
public:
	Matrix(int r, int c): row(r), col(c)
	{
		for (size_t i = 0; i < row; i++)
			arr[i] = new int[col];
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				std::cout << "Enter: " << i + 1 << '.' << j + 1 << std::endl;
				std::cin >> arr[i][j];
			}
		}
	}
	~Matrix()
	{
		std::cout << "----------------------------" << std::endl;
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				std::cout << arr[i][j] << '\t';
			}
			std::cout << std::endl;
		}
		delete arr;
	}

	Matrix operator*(const Matrix& a, const Matrix &b)
	{
		
	}

private:
	int row, col;
	int** arr = new int* [row];
	
};



int main()
{
	
	Matrix a(3, 2);


	return 0;
}
