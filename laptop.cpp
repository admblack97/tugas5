#include <iostream>
#include <string>
using namespace std;

class laptop{
	public:
		void bemainan(string main);
		string tipe;
};

int main () {
	laptop laptopAsus, laptopAcer;
	laptopAsus.tipe = "ASUS ROG ZEPHYRUS (GX501) \n";
	cout<<(laptopAsus.tipe);                                            
	laptopAsus.bemainan("Kawa bemainan game barat, kaya The Witcher 3, Final Fnatasy XV dll");
}

void laptop::bemainan(string main){
	cout<<main<<", harat kalo :D \n";
}
