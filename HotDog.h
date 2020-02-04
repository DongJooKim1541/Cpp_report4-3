#ifndef HOTDOG_H
#define HOTDOG_H
class HotDog {
	int id;
	int sold_num;
public:
	HotDog();
	HotDog(int id1, int num1);
	HotDog(const HotDog& hot);
	void SetId(int val);
	void JustSold();
	int GetSold_num();
	void Print();
	static int total;
	static int TotalSold_num();
};
#endif