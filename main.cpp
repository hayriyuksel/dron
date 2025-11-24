#include <iostream>
#include <string>
using namespace std;

// Fonksiyon tanimi
string ucusGuvenligiKontrol(int yuk, int hiz, int yukseklik) {
	int pil = 100; // Baslangic pil seviyesi
	pil -= (hiz / 10) * 5; // Hiz degerine gore pil azalmasi

	// Pil seviyesini yazdir
	cout << "Hesaplanan pil seviyesi: " << pil << endl;

	// 1. Yuk kontrolu
	if (yuk > 500) {
		return "Agir yuk, ucamaz!";
	}
	// 2. Pil seviyesi kontrolu
	else if (pil < 30) {
		return "Pil seviyesi dusuk, ucus guvensiz!";
	}
	// 3. Yukseklik kontrolu
	else if (yukseklik > 200) {
		return "Radar disi, ucus guvensiz!";
	}
	else if (yukseklik < 20) {
		return "Yukseklik guvensiz, ucus guvensiz!";
	}
	// Tum kosullar uygunsa
	else {
		return "Ucus guvenli!";
	}
}

int main() {
	const int droneSayisi = 7;

	// Drone verileri
	int yukler[droneSayisi] = {350, 600, 200, 450, 500, 100, 400};
	int hizlar[droneSayisi] = {40, 30, 80, 20, 50, 60, 155};
	int yukseklikler[droneSayisi] = {50, 70, 150, 10, 210, 180, 90};
	string durumlar[droneSayisi];

	cout << "=== Mini Drone Surusu Ucus Guvenligi Programi ===" << endl;

	// Her drone icin sonucu hesapla ve yazdir
	for (int i = 0; i < droneSayisi; i++) {
		durumlar[i] = ucusGuvenligiKontrol(yukler[i], hizlar[i], yukseklikler[i]);
		cout << "Drone " << i + 1 << ": " << durumlar[i] << endl;
	}

	return 0;
}
