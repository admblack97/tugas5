#include <iostream>
#include <string>
using namespace std;

class laptop{
	public:
		void desain(string tampilan);
		void bemainan(string main);
		void menggawi_tugas(string tugas);
		void gasan_gawian(string gawian);
		void gasan_ngoding(string ngoding);
		void gengsi_banar_ae(string gengsi);
		string tipe, prosesor, vga, ram, vram, os, hdd, ssd, layar;
		double barat; 
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
