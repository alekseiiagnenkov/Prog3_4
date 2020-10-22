namespace Prog3_4 {

	struct Item {
		double figure;
		int nomber;
	};

	class xSquare {
	private:
		int i; //кол-во опытов
		double bottom, upper; //верхн€€ и нижн€€ граница диапазона
	public:
		xSquare() : i(0), bottom(0), upper(0) {};
		xSquare(int i) : i(i) {};
		xSquare(double bottom, double upper) : bottom(bottom), upper(upper) {};
		xSquare(int i, double bottom, double upper) : i(i), bottom(bottom), upper(upper) {};

		void Test(int);
	};

	Item* creatArrI(int, int);

	float Xi2(int, int, Item*);

	void Score(Item*, int, int, int);

}
