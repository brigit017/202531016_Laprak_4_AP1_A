#include <iostream>
using namespace std;

int main (){
	int mhs, status, persentaseHadir ;
	int hadir = 0;
	int tidakHadir = 0;
	
	cout << "Masukkan jumlah mahasiswa : ";
	cin >> mhs;
	
	for (int i = 1; i <= mhs; i++){
		cout << "Mahasiswa" <<i<<"(1=hadir, 0 = tidak hadir):";
		cin >> status;
		if (status == 1){
			hadir++ ;
		} else if (status == 0){
			tidakHadir++ ;
		}else {
			cout << " Isi dengan 1 atau 0" ;
			 i--;
		}
	    }
	    
	    persentaseHadir = (float) hadir/mhs*100 ;
	    
	    cout << "Hadir :" << hadir << endl;
	    cout << "Tidak hadir :" <<tidakHadir<< endl;
	    cout << "Persentase hadir :" <<persentaseHadir<< "%" << endl;
	    return 0;
	    

}
