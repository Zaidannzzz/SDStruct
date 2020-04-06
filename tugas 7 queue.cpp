#include <iostream>
#define MAX 20
using namespace std;

struct Queue {
	int head, tail, data[MAX];
}Queue;

bool isfull() {
	return Queue.tail == MAX;
}

bool isempty() {
	return Queue.tail == 0;
}

void tampil() {
	if (isempty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i = Queue.head; i < Queue.tail; i++)
			cout << Queue.data[i] << " " ;
		cout << endl;
  }
}

void enqueue() {
	if (isfull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;
		cout << "Masukkan Data : ";cin >> data;
		Queue.data[Queue.tail] = data;
		Queue.tail++;
		cout << "Data ditambahkan\n";
		tampil();
	}
}

void oprasidata(int pill){

 int jumlah=0;
 int b=Queue.tail+1;

 float rata;

 if(isempty()==0){
 for(int i=Queue.head;i<=Queue.tail;i++){
 jumlah=jumlah+Queue.data[i];
 }
 rata=jumlah/b;
 switch(pill){
 case 1:
 cout<<"jumlah datanya ="<<jumlah;
 break;
 case 2:
 cout<<"Rata-rata datanya ="<<rata;
 break;
 case 3:
 cout<<"banyak datanya ="<<Queue.tail+1;
 break;
 default:
 break;
 }
 }else{
 cout<<"data kosong!\n";
 }
}

void dequeue() {
	if (isempty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Queue.data[Queue.head] << "\"..." << endl;
		for (int i = Queue.head; i < Queue.tail; i++)
        Queue.data[i] = Queue.data[i + 1];
		Queue.tail--;
		tampil();
	}
}

void clear(){
    Queue.tail=Queue.head=-1;
    cout<<"Data dihapus";
}

int main() {
	int pilih;
	do
	{
		cout<< "   Menu Pilihan\n\n"
			<< " [1] Enqueue \n"
			<< " [2] Dequeue\n"
			<< " [3] Tampil\n"
			<< " [4] Clear\n"
			<< " [5] Banyak Data\n"
			<< " [6] Jumlah Data\n"
			<< " [7] Rata rata\n"
			<< " [8] Exit \n\n"
			<< "Pilihan : "; cin >> pilih;
		switch (pilih)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
        case 3:
			tampil();
			break;
        case 4:
			clear();
			break;
        case 5:
			oprasidata(3);
			break;
        case 6:
			oprasidata(1);
			break;
        case 7:
			oprasidata(2);
			break;
        case 8:
			dequeue();
			break;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (pilih !=8);
	return 0;
}
