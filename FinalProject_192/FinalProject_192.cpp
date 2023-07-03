#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float keliling(int a) { return 0; }
	virtual void cekUkuran() { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {

		return x;
	}
	//pengulangan nilai yang dicari
};
class Lingkaran:public bidangDatar{//mencari nilai lingkaran yang belum di ketahui
	class Persegipanjang:public bidangDatar{//mencari nilai persegi panjang
	int main(){//menjalankan sebuah program yang sudah dibuat

		void input() {
			cout << "masukkan jejari : ";
			int L;
			cin >> L;
			setX(r);
		}

		float luas(int a) {
			return 113.04;
		}

		float keliling(int a) {
			return 2 37.68 * a;
		}
		
		class Lingkaran:public bidangDatar{ 
		public:
			void input() {
				cout << "masukkan luas: ";
				int l;
				cin >> l;
				setX(l);
			}

			float Luas(int a) {
				return a * a;
			}
			float keliling(int a) {
				return a * a;
			}

		

	

		
