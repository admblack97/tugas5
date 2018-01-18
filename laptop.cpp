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
		void harga(string harga);
		void gengsi_banar_ae(string gengsi);
		string tipe, prosesor, vga, ram, vram, os, hdd, ssd, layar, baru, bekas;
		double barat; 
};

int main () {
	laptop laptopAsus, laptopAcer;
	
	laptopAsus.tipe     = "ASUS ROG ZEPHYRUS (GX501)                   |\n";
	laptopAsus.prosesor = "Intel Core i7-7700HQ                        |\n";
	laptopAsus.os       = "Windows 10 Pro                              |\n";
	laptopAsus.vga      = "NVIDIA GTX 1080                             |\n";
	laptopAsus.vram     = "8 GB                                        |\n";
	laptopAsus.ram      = "24 GB DDR4 2400MHz SDRAM                    |\n";
	laptopAsus.hdd      = "-                                           |\n";
	laptopAsus.ssd      = "512 GB PCIE Gen3X4 SSD                      |\n";	
	laptopAsus.layar    = "15.6 inch Blacklit Anti-Glare LED           |\n";
	laptopAsus.barat    = 2.25;
	laptopAsus.baru     = "Rp 50.299.000                               |\n";
	laptopAsus.bekas    = "-                                           |\n";
		
	
	cout << "+=================================================================+"<<endl;
	cout << "|                     Spesifikasi Laptop ASUS                     |"<<endl;
	cout << "+=================================================================+"<<endl;
	cout << "| Tipe              = "<<(laptopAsus.tipe);                                            
	cout << "| Prosesor          = "<<(laptopAsus.prosesor);
	cout << "| OS                = "<<(laptopAsus.os);
	cout << "| VGA               = "<<(laptopAsus.vga);
	cout << "| VRAM              = "<<(laptopAsus.vram);
	cout << "| RAM               = "<<(laptopAsus.ram);
	cout << "| Harddisk          = "<<(laptopAsus.hdd);
	cout << "| Solid State Drive = "<<(laptopAsus.ssd);
	cout << "| Layar             = "<<(laptopAsus.layar);
	cout << "| Barat             = "<<(laptopAsus.barat)<<" Kg					  |\n";
	cout << "| Harga baru        = "<<(laptopAsus.baru);
	cout << "| Harga bekas       = "<<(laptopAsus.bekas);
	cout << "+=================================================================+"<<endl;
	laptopAsus.desain("Desain laptop nya tipis banar gasan laptop gaming, mouse pad nya kw beganti jadi number pad");
	laptopAsus.bemainan("Kawa bemainan game barat, kaya The Witcher 3, Final Fnatasy XV dll");
	laptopAsus.menggawi_tugas("Kawa jua menggawi tugas sekolah, kampus, banyak ae lagi");
	laptopAsus.gasan_gawian("Gasan gawian kawa banar, apalagi gasan ngetik");
	laptopAsus.gasan_ngoding("Mun soal ngoding");
	laptopAsus.harga("Mun harga jangan ditanya lg, Larang bnr (sawat bejual ginjal wkwkwkwk)");
	laptopAsus.gengsi_banar_ae("Artinya aku kawa nukar laptop larang");

	laptopAcer.tipe     = "ACER Predator Triton 700                    |\n";
	laptopAcer.prosesor = "Intel Core i7-7700HQ                        |\n";
	laptopAcer.os       = "Windows 10 Pro                              |\n";
	laptopAcer.vga      = "NVIDIA GTX 1080                             |\n";
	laptopAcer.vram     = "8 GB                                        |\n";
	laptopAcer.ram      = "32 GB DDR4                                  |\n";
	laptopAcer.hdd      = "-                                           |\n";
	laptopAcer.ssd      = "512 GB SSD                                  |\n";	
	laptopAcer.layar    = "15.6 inch Blacklit LED Full HD              |\n";
	laptopAcer.barat    = 2.40;
	laptopAsus.baru     = "Rp 52.299.000                               |\n";
	laptopAsus.bekas    = "-                                           |\n";
		
	
	cout << "+=================================================================+"<<endl;
	cout << "|                     Spesifikasi Laptop ACER                     |"<<endl;
	cout << "+=================================================================+"<<endl;
	cout << "| Tipe              = "<<(laptopAcer.tipe);                                            
	cout << "| Prosesor          = "<<(laptopAcer.prosesor);
	cout << "| OS                = "<<(laptopAcer.os);
	cout << "| VGA               = "<<(laptopAcer.vga);
	cout << "| VRAM              = "<<(laptopAcer.vram);
	cout << "| RAM               = "<<(laptopAcer.ram);
	cout << "| Harddisk          = "<<(laptopAcer.hdd);
	cout << "| Solid State Drive = "<<(laptopAcer.ssd);
	cout << "| Layar             = "<<(laptopAcer.layar);
	cout << "| Barat             = "<<(laptopAcer.barat)<<" Kg					  |\n";
	cout << "| Harga baru        = "<<(laptopAcer.baru);
	cout << "| Harga bekas       = "<<(laptopAcer.bekas);
	cout << "+=================================================================+"<<endl;
	laptopAcer.desain("Desain laptop nya tipis jua kaya ASUS ROG ZEPHYRUS, bedanya andakan mouse pad nya di atas pang");
	laptopAcer.bemainan("Handak main game apakah lancar ja");
	laptopAcer.menggawi_tugas("Menggawi tugas apapun kawa banar bos ae");
	laptopAcer.gasan_gawian("Gasan gawian mantap jiwa");
	laptopAcer.gasan_ngoding("Mengoding sampai ratusan bahkan ribuan");
	laptopAsus.harga("Harga beda 2 jt lwn ASUS ZEPHYRUS, sama ae Larang jua magin nya betambah larang (sawat bejual ginjal wkwkwkwk)");
	laptopAcer.gengsi_banar_ae("Anak sultan nyatai kawa banar nukar");
	
}

void laptop::desain(string tampilan){
	cout<<tampilan<<", asle bokeh bingitzz \n";
}

void laptop::bemainan(string main){
	cout<<main<<", harat kalo :D \n";
}

void laptop::menggawi_tugas(string tugas){
	cout<<tugas<<", nyata kada lag \n";
}

void laptop::gasan_gawian(string gawian){
	cout<<gawian<<", behhhh lancar jaya \n";
}

void laptop::gasan_ngoding(string ngoding){
	cout<<ngoding<<", jangan ditanya lg, sanggup sanak ae \n";
}

void laptop::harga(string harga){
	cout<<harga<<", sepadan ja lwn speknya \n";
}

void laptop::gengsi_banar_ae(string gengsi){
	cout<<gengsi<<", hahahahahahahaha \n\n";
}
