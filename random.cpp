#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	//system("color B5");

	int size = 5;
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			cout << "#";
		}
		cout << "\n";
	}





	cout << "\n";
	srand(time(NULL));
	
	int magic_num = 1 + (rand() % 500); // от 0 до 9 ((1 +) - от 1 до 10)
	//cout << magic_num;
	int num;

	
	time_t begin = time(NULL);
	//Sleep(3);
	int i = 0;
	do {
		cin >> num;
		if (num != magic_num) {
			if (num > magic_num) {
				cout << "Ваше число больше\n";
			}
			else {
				cout << "Ваше число меньше\n";
			}
			if (num == 0) {
				break;
			}
		}
		else {
			cout << "";
		}
		i++;
	} while (num != magic_num);
	cout << "\nЧисло: " << magic_num << "\nВы угадали\n";
	cout << "\n" << i << " попыток\n";
	time_t end = time(NULL);
	//clock_t end = clock();
	cout << "TIME: " << (end - begin) << " sec.";
}
