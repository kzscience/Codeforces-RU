/* 791A. Мишка и старший брат - (https://codeforces.com/problemset/problem/791/A)
1) ограничение по времени на тест1 секунда
2) ограничение по памяти на тест256 мегабайт
3) вводстандартный ввод
4) выводстандартный вывод
*/

/* ишка Лимак хочет стать самым большим медведем, ну, или хотя бы стать больше своего старшего брата Боба.

Сейчас вес Лимака равен a, а вес Боба равен b. Гарантируется, что вес Лимака меньше или равен весу Боба.

Лимак ест много, и его вес утраивается каждый год, а вес Боба удваивается каждый год.

Через сколько целых лет Лимак станет строго больше (т. е. будет весить строго больше) Боба?
*/

/*
Входные данные
В единственной строке находятся два целых числа a и b (1 ≤ a ≤ b ≤ 10) — веса Лимака и Боба соответственно.

Выходные данные
Выведите одно целое число — через сколько целых лет Лимак станет строго больше Боба.
*/

/* Примеры:
Входные данные:
4 7
Выходные данные:
2

Выходные данные:
4 9
Выходные данные:
3

Выходные данные:
1 1
Выходные данные:
1

Примечание:
В первом примере изначально вес Лимака равен 4, а вес Боба — 7. Через год их веса равны 4·3 = 12 и 7·2 = 14 соответственно (один вес утроился, а второй удвоился). 
Лимак все еще не больше Боба. Через два года их веса равны 36 и 28, то есть вес Лимака больше, чем вес Боба. Лимак стал больше Боба через два года, поэтому вы должны вывести 2.

Во втором примере веса Лимака и Боба в последующие года равны: 12 и 18, затем 36 и 36, и наконец 108 и 72 (через три года). Ответ равен 3. Помните, 
что Лимак хочет стать строго больше Боба, и его не устроят равные веса.

В третьем примере Лимак станет больше Боба через один год, их веса будут равны 3 и 2 соответственно.
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main()
{
	int a, b,r=0;
	cin >> a >> b;
	while (b>=a) {
		a *= 3;
		b *= 2;
		r++;
	}
	cout << r;
	return 0;
}
