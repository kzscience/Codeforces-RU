/* 266A. Камни на столе - (https://codeforces.com/problemset/problem/266/A)
1) ограничение по времени на тест 2 секунды
2) ограничение по памяти на тест 256 мегабайт
3) вводстандартный ввод
4) выводстандартный вывод
*/

/* На столе в ряд выложены n камней, каждый из которых может быть красного, зеленого или синего цвета. Посчитайте, какое минимальное количество камней нужно убрать со стола, 
чтобы любые два соседних камня имели разные цвета. Камни в ряду считаются соседними, если между ними нет других камней.
*/

/*
Входные данные
В первой строке задано целое число n (1 ≤ n ≤ 50) — количество камней на столе.

В следующей строке задана строка s, обозначающая цвета камней. Будем считать, что камни в ряду пронумерованы целыми числами от 1 до n слева направо. Тогда i-ый символ s равен «R», если i-ый камень красного цвета, «G» — если он зеленого цвета, и «B» — если он синего цвета.

Выходные данные
Выведите единственное целое число — ответ на задачу.
*/

/* Пример:

Входные данные:
3
RRG
Выходные данные:
1

Входные данные:
5
RRRRR
Выходные данные:
4

Входные данные:
4
BRBG
Выходные данные:
0
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main()
{
	int n,r=0;
	std::string s;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == s[i + 1]) {
			r++;
		}
	}
	cout << r;
	return 0;
}
