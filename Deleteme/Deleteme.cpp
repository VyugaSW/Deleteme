
#include <Windows.h>
#include <iostream>

using namespace std;


void FillArrs(int size);

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int user_chose;
	int size = 1;
	cout << "\t\tСПИСОК ДЕЛИШЕК\n\n";
	cout << "--Выберите опцию:\n";
	cout << "1 - Добавить дело\n";
	cout << "2 - Удалить дело\n";
	cout << "3 - Редактировать дело\n";
	cout << "4 - Поиск дела\n";
	cout << "5 - Отображение дела\n";
	cout << "6 - Сортировка дел\n\n";
	cin >> user_chose;
	switch (user_chose) {
	case 1:
		size++;
		FillArrs(size);
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	default:
		cout << "Не пользуйся программой, идиот";
		break;
	}

}

void FillArrs(int size) {
	system("cls");
	string* name = new string[size - 1];
	int* priority = new int[size - 1];
	string* ops = new string[size - 1];
	//DATA
	int* day = new int[size - 1];
	int* month = new int[size - 1];
	int* year = new int[size - 1];
	int* hour = new int[size - 1];
	int* minutes = new int[size - 1];

	cout << "Введите название дела: \n";
	cin >> name[size - 1];
	cout << "Введите приоритет дела (1 - самое важное, ... 10 - самое неважное): \n";
	cin >> priority[size - 1];
	cout << "Введите описание: \n";
	cin >> ops[size - 1];

	cout << "Введите дату (день, месяц, год, час, минута): \n";
	cin >> day[size - 1];
	cin >> month[size - 1];
	cin >> year[size - 1];
	cin >> hour[size - 1];
	cin >> minutes[size - 1];

}
