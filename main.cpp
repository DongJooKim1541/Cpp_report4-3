#include <iostream>
#include "HotDog.h"
using namespace std;
int main() {

	cout << "��ü Hotdog Stands�� ������ �Է��Ͻÿ�." << endl;
	cout << "Stand count(3��~10��) : ";
	int count;
	cin >> count;
	HotDog *h = new HotDog[count];
	for (int i = 0; i < count; i++) {
		h[i].SetId(i);
	}
	cout << "Hotdog Stand�� ID�� �ڵ����� 0���� " << count - 1 << "�� setting�� �˴ϴ�." << endl;
	cout << "Hotdog�� �Ǹ��ϴ� ID ��ȣ�� �Է��Ͻÿ�.(�ߴ��� ���Ͻø� q,Q�� �Է�)" << endl;
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