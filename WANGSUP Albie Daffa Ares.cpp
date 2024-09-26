#include <iostream>
using namespace std;

int main(){


int i,N,jumlah = 0,R;
i = 1;

cout << "Masukkan banyak nilai :" ;
cin >> N ;

cout << "Jumlah: ";
/*perulangan*/
while (i < N){
	cout << i*7 << " + " ;
	jumlah = jumlah + (i*7);
	i++;
	
}
jumlah = jumlah+(i*7);

cout << i*7 << " ";
cout << " = " << jumlah << endl ;
{
	R = jumlah / N;
	cout << "Rerata:" << jumlah << " / " << N << " = " << R;
}
}
