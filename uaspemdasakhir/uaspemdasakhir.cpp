// uaspemdasakhir.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

#include <iostream>
using namespace std;

class matakuliah {
private:
	float presensi;
	int nilaiactivity;
	int nilaiexercise;
	int tugasakhir;
	float nilaiakhir;
public:
	matakuliah()
	{
		presensi = 0.0;
		nilaiactivity = 0.0;
		nilaiexercise = 0.0;
		tugasakhir = 0.0;
		nilaiakhir = 75;

	}

	virtual void namamatakuliah() {
		cout << "menampikan presensi";
		cout << "menampilkan nilai activity";
		cout << "menampilkan nilai exercise";
		cout << "menampilkan nilai tugas akhir";
		cout << "menampilkan nilai akhir";
		return;
	}

	void setpresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getpresensi() {
		return presensi;
	}
	void setnilaiactivity(float nilai) {
		this->nilaiactivity = nilai;
	}
	int  getnilaiactivity() {
		return nilaiactivity;
	}
	void setnilaiexercise(float nilai) {
		this->nilaiexercise = nilai;
	}
	int getnilaiexercise() {
		return nilaiexercise;
	}
	void settugasakhir(float nilai) {
		this->tugasakhir = nilai;
	}
	int gettugasakhir() {
		return tugasakhir;
	}
};

class pemograman :public matakuliah
{
public:
	void matakuliah() {
		cout << "nama matakuliah";
	}


};

class jaringan :public matakuliah
{
public:
	void matakuliah() {
		cout << "nama matakuliah";
	}

};

int main() {
	char pilih;
	matakuliah* matakuliah;
	pemograman pemograman;
	jaringan jaringan;



}