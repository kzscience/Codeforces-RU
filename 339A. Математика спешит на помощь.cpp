/* A. Математика спешит на помощь - (https://codeforces.com/problemset/problem/339/A)
1) ограничение по времени на тест2 секунды
2) ограничение по памяти на тест256 мегабайт
3) вводстандартный ввод
4) выводстандартный вывод
*/

/* Начинающий математик Ксения учится в третьем классе. Сейчас в школе она проходит операцию сложения.

Учитель записал на доске сумму нескольких чисел, которую требуется посчитать. Чтобы было проще считать, в сумме используются только числа 1, 2 и 3. Но и этого Ксении мало. 
Ксения только учится считать, и поэтому она может посчитать сумму, только если слагаемые в сумме идут в порядке неубывания. Например, сумму 1+3+2+1 она посчитать не может, 
а суммы 1+1+2 и 3+3 может.

Вам задана сумма, которая записана на доске. Переставьте слагаемые и выведите ее в виде, в котором Ксения сможет посчитать сумму.
*/

/*
Входные данные
В первой строке записана непустая строка s — сумма, которую нужно посчитать Ксении. Строка s не содержит пробелов, состоит только из цифр и знаков «+» и является корректной суммой чисел 1, 2 и 3. Длина строки s не более 100 символов.

Выходные данные
Выведите новую сумму, которую сможет посчитать Ксения.
*/

/* Примеры:

Входные данные:
3+2+1
Выходные данные:
1+2+3

Входные данные:
1+1+3+1+3
Выходные данные:
1+1+1+3+3

Входные данные:
2
Выходные данные:
2
*/

#include <iostream>
#include<algorithm>
using std::cin;
using std::cout;
 
 
int main()
{
	std::string s;
	char a[100];
	cin >> s;
	int j = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '+')
		{
			a[j] = s[i];
			j++;
		}
	}
	std::sort(a, a + j);
	for (int i = 0; i < j; i++)
	{
		if (i == j - 1) cout << a[i] << std::endl;
		else cout << a[i] << "+";
	}
	return 0;
}
