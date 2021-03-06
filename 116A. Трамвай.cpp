/* 116A. Трамвай - (https://codeforces.com/problemset/problem/116/A)
1) ограничение по времени на тест 2 seconds
2) ограничение по памяти на тест 256 megabytes
3) вводстандартный ввод
4) выводстандартный вывод
*/

/* В Линейном Королевстве всего один трамвайный маршрут. На нем n остановок, пронумерованных от 1 до n в порядке следования трамвая. 
На i-ой остановке ai человек выходит из трамвая, а bi человек заходит в трамвай. Трамвай прибывает на первую остановку пустым. 
Также, когда трамвай прибывает на последнюю остановку, все пассажиры выходят, и трамвай уезжает пустым.

Ваша задача — найти минимальную возможную вместимость трамвая, такую, что количество пассажиров в трамвае в любой момент времени не превосходит эту вместимость. 
Учтите, что на каждой остановке все пассажиры выходят до того как какой-либо пассажир заходит.
*/

/*
Входные данные
В первой строке записано целое число n (2 ≤ n ≤ 1000) — количество остановок трамвая.

Далее следует n строк, в каждой — по два целых числа ai и bi (0 ≤ ai, bi ≤ 1000) — количество пассажиров, которые выходят из трамвая на i-ой остановке, и количество пассажиров, 
которые заходят в трамвай на i-ой остановке. Остановки перечислены в том же порядке, в котором их проезжает трамвай.

Выходные данные
Выведите одно целое число — минимальную возможную вместимость трамвая. Допускается, что вместимость может быть равна нулю.
*/

/* Примеры:
Входные данные:
4
0 3
2 5
4 2
4 0
Выходные данные:
6

Примечание
В первом примере достаточная вместимость — 6:

Когда трамвай подъезжает к первой остановке, внутри находится 0 пассажиров. На остановке заходят 3 пассажира, то есть трамвай уезжает с 3 пассажирами внутри.
На второй остановке выходят 2 пассажира (внутри остается 1). Затем заходят 5 пассажиров. Так, трамвай уезжает с 6 пассажирами.
На третьей остановке выходят 4 пассажира (внутри остается 2). Затем заходят 2 пассажира. Так, трамвай уезжает с 4 пассажирами.
Наконец, все пассажиры выходят на последней остановке. Теперь трамвай пуст, что соответствует ограничениям.
Так как количество пассажиров в трамвае в любой момент времени не превосходит 6, вместимость 6 — достаточна. Более того, вместимость не может быть меньше 6. 
Значит, 6 — правильный ответ.
*/

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
 
int main()
{
	int n,a,b,s=0,r=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		s = s - a + b;
		if (s > r) {
			r = s;
		}
	}
	cout << r;
	return 0;
}
