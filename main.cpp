#include <iostream>
#include "HotDog.h"
using namespace std;
int main() {

	cout << "전체 Hotdog Stands의 개수를 입력하시오." << endl;
	cout << "Stand count(3개~10개) : ";
	int count;
	cin >> count;
	HotDog *h = new HotDog[count];
	for (int i = 0; i < count; i++) {
		h[i].SetId(i);
	}
	cout << "Hotdog Stand의 ID는 자동으로 0부터 " << count - 1 << "로 setting이 됩니다." << endl;
	cout << "Hotdog를 판매하는 ID 번호를 입력하시오.(중단을 원하시면 q,Q를 입력)" << endl;
	char id;
	while (true) {
		cout << "ID : ";
		cin >> id;
		if (id == 'Q' || id == 'q')break;
		else {
			id = (int)id - 48;
			h[id].JustSold();
		}
	}
	for (int id = 0; id < count; id++) {
		h[id].Print();
	}
	for (int i = 0; i < count; i++) {
		HotDog::total += h[i].GetSold_num();
	}
	cout << "Total Sold = " << HotDog::TotalSold_num() << endl;
	return 0;
}