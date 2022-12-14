#include <iostream>
#include <windows.h>
#include <ncurses.h>
using namespace std;

void footer(){
	cout<<"====================================================================\n";
	cout<<"=====================      TERIMA KASIH        =====================\n";
	cout<<"=====================    SUDAH MENCOBA QUIZ    =====================\n";
	cout<<"=====================      NYELENEH KAMI       =====================\n";
	cout<<"====================================================================\n";
	
}
int game(){

	char awal, nama[100];
	initscr();
start_color();
init_pair(1,COLOR_RED,COLOR_GREEN);
init_pair(2,COLOR_WHITE,COLOR_BLACK);

	mvprintw(10,50,"LOADING...\n\n");
for(int jarak = 0; jarak<= 120; jarak++){
	attron (COLOR_PAIR(1));
	refresh();
	mvprintw(11,jarak, " ");
	Sleep(15);
}
clear();
	attron (COLOR_PAIR(2)); 
	mvprintw(10,40, "TEKAN APA SAJA UNTUK MEMULAI" );
	refresh();
	Sleep(10);
getch();
endwin();

do{	
	cout<<" Masukan nama anda : ";
	cin>>nama;
	system("CLS");
	
	cout<<"===============================================\n";
	cout<<"           PILIH JAWABAN YANG BENAR            \n";
	cout<<"             ( PILIH HANYA ANGKA )             \n";
	cout<<"===============================================\n\n";

int tebak_tebakan;
	cout<<"   1) SALAH APA YANG TIDAK BISA DI PIDANAKAN ? \n";
	cout<<"          1 - MUHAMMAD SALAH \n";
	cout<<"          2 - SALAH URAT \n";
	cout<<"          3 - SALAH DISKA \n";
	cout<<"        ANSWER : ";
	cin>>tebak_tebakan;
	cout<<"\n";
	
int politik;
	cout<<"   2) KETUA KETUA APA YANG SUKA MATIIN MIC ? \n";
	cout<<"          1 - KETUA KELAS \n";
	cout<<"          2 - KAKATUA \n";
	cout<<"          3 - KETUA DPR \n";
	cout<<"        ANSWER : ";
	cin>>politik;
	cout<<"\n";
	
int artis;
	cout<<"   3) SIAPAKAH ARTIS YANG MENDAPATKAN PANGKAT LETNAN LETNAN KOLONEL TITULER ANGKATAN DARAT, OLEH PRABOWO ? \n";
	cout<<"          1 - DEDDY COBUZIER \n";
	cout<<"          2 - DEDDY KASIH \n";
	cout<<"          3 - ADE RAI \n";
	cout<<"        ANSWER : ";
	cin>>artis;
	cout<<"\n";
	
int bola;
	cout<<"   4) NEGARA MANA YANG KALAH PENALTI DALAM PERTANDINGAN PIALA DUNIA 2022, BABAK 8 BESAR ? \n";
	cout<<"          1 - BRAZIL \n";
	cout<<"          2 - KOREA \n";
	cout<<"          3 - JERMAN \n";
	cout<<"        ANSWER : ";
	cin>>bola;
	cout<<"\n";

int jalan;
	cout<<"   5) BERAPA LAMA WAKTU PERJALANAN KRETA DARI BANDAR LAMPUNG KE RUMAH RAFLI (batu raja) ? \n";
	cout<<"          1 - 5 JAM 10 MENIT \n";
	cout<<"          2 - 4 JAM \n";
	cout<<"          3 - 5 JAM PAS \n";
	cout<<"        ANSWER : ";
	cin>>jalan;
	cout<<"\n";

	cout<<"===============================================\n";
	cout<<"          MENGHITUNG HASIL JAWABAN ANDA        \n";
	cout<<"===============================================\n";
	
	 cout<<"     1) ";
	switch(tebak_tebakan){
		case 1: 
		cout<<" SALAH \n";
		break;
		case 2:
		cout<<" BENAR \n";
		break;
		case 3:
		cout<<" SALAH \n";
		break;
	}
	
	cout<<"     2) ";
	switch(politik){
		case 1: 
		cout<<" SALAH \n";
		break;
		case 2:
		cout<<" SALAH \n";
		break;
		case 3:
		cout<<" BENAR \n";
		break;
	}
	
	cout<<"     3) ";
	switch(artis){
		case 1: 
		cout<<" BENAR \n";
		break;
		case 2:
		cout<<" SALAH \n";
		break;
		case 3:
		cout<<" SALAH \n";
		break;
	}
	
	cout<<"     4) ";
	switch(bola){
		case 1: 
		cout<<" BENAR \n";
		break;
		case 2:
		cout<<" SALAH \n";
		break;
		case 3:
		cout<<" SALAH \n";
		break;
	}
	
	cout<<"     5) ";
	switch(jalan){
		case 1: 
		cout<<" SALAH \n";
		break;
		case 2:
		cout<<" SALAH \n";
		break;
		case 3:
		cout<<" BENAR \n";
		break;
	}

int sum = 0;
int kategori[]= { tebak_tebakan, politik, artis, bola, jalan };
int jawaban[]= {2, 3, 1, 1, 3};
	for( int i=0; i<5; i++){
		if(kategori[i]==jawaban[i]){
			sum = sum+1;
		}
			else{ sum = sum+0; }
	}
cout<<"MAKA NILAI YANG ANDA PEROLEH : "<<sum*20<<"%\n";		
	
		mulailagi:
			cout << "Apakah anda ingin bermain lagi? (1/2)  =  "; 
			cout<<"\n1. Ya\n2. Tidak\n\n";
			cin>>awal;	
		system("CLS");		
		}while(awal=='1'); 
		cout<<endl;
		system("CLS");
		footer();

}

int main(){
	game();
	
	getch();
	return 0;
}

