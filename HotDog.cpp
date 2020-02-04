#include <iostream>
#include "HotDog.h"
using namespace std;
HotDog::HotDog() {
	id = 0; sold_num = 0;
}
HotDog::HotDog(int id1, int num1) {
	id = id1; sold_num = num1;
}
HotDog::HotDog(const HotDog& hot) {
	id = hot.id; sold_num = hot.sold_num;
}
void HotDog::SetId(int val) {
	id = val;
}
void HotDog::JustSold() {
	sold_num++;
}
int HotDog::GetSold_num() {
	return sold_num;
}
void HotDog::Print() {
	cout << "Stand " << id << " sold " << sold_num << endl;
}
int HotDog::total = 0;
int HotDog::TotalSold_num() {
	return total;
}