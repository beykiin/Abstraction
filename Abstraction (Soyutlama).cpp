// Abstraction.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Hayvan {
	public:
		virtual void sesCal() = 0;
	
};

class Kopek : public Hayvan {
public:
	void sesCal() {

		std::cout << "Hav";
	}

};

class Kedi : public Hayvan {
public:

	void sesCal() {

		std::cout << "Miyav";
	}

};

class Ordek : public Hayvan {
public:

	void sesCal() {

		std::cout << "vak";
	}

};

class Fare : public Hayvan {
public:

	void sesCal() {

		std::cout << "Civ";
	}

};

void tumSesCal(Hayvan* hPtr) {

	hPtr->sesCal();

};

int main()
{
	Kopek kopek;
	Kedi kedi;
	Ordek ordek;
	Fare fare;

	tumSesCal(&fare);

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
