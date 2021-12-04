#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

COORD coord = {X:0, Y:0};
void gotoxy(int x, int y){
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void MemilihLevel(){
	gotoxy(40,6); cout << "===============================================";
	gotoxy(40,7); cout << "|              LEVEL GAME MATEMATIKA          |"; 
	gotoxy(40,8); cout << "===============================================";
	gotoxy(57,10); cout << "================";
	gotoxy(57,11); cout << "|  1. Level 1  |";
	gotoxy(57,12); cout << "================";
	gotoxy(57,14); cout << "================";
	gotoxy(57,15); cout << "|  2. Level 2  |";
	gotoxy(57,16); cout << "================";
	gotoxy(57,18); cout << "================";
	gotoxy(57,19); cout << "|  3. Level 3  |";
	gotoxy(57,20); cout << "================";
	gotoxy(53,22); cout << " Masukan Pilihan Anda :";
}

void Login(){
	gotoxy(36,6); cout << "===============================================";
	gotoxy(36,7); cout << "|               SILAHKAN PILIH                |";
	gotoxy(36,8); cout << "===============================================";
	gotoxy(22,15); cout << "==============";
	gotoxy(22,16); cout << "|  1. Play   |";
	gotoxy(22,17); cout << "==============";
	gotoxy(84,15); cout << "==============";
	gotoxy(84,16); cout << "|  2. End    |";
	gotoxy(84,17); cout << "==============";
	gotoxy(55,19); cout << "Pilih Angka :";
} 

void load(){
    gotoxy(1,1); cout << "	__   ___    ____    _  _     _____     __    ______    ___     ___  "; 
    gotoxy(1,2); cout << " /_ | |__ \\  |___ \\  | || |   | ____|   / /   |____  |  / _ \\   / _ \\ ";
    gotoxy(1,3); cout << "  | |    ) |   __) | | || |_  | |__    / /_       / /  | (_) | | (_) |";
    gotoxy(1,4); cout << "  | |   / /   |__ <  |__   _| |___ \\  | '_ \\     / /    > _ <   \\__, |";
    gotoxy(1,5); cout << "  | |  / /_   ___) |    | |    ___) | | (_) |   / /    | (_) |    / / ";
    gotoxy(1,6); cout << "  |_| |____| |____/     |_|   |____/   \\___/   /_/      \\___/    /_/  ";
    Sleep(2000);
	                                                                  
	int x;
	for (x=5; x>=0; x--){
		gotoxy(50,13); cout<<"Loading.";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"Loading..";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"Loading...";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"Loading....";
		Sleep(100);
		system("cls");
	}
}

int main(){
    string respon[3]={"Angka Anda Terlalu Kecil",
                   	  "Angka Anda Terlalu Besar",
	                  "Anda Salah Memasukan Angka"};
	int Angka;
	int Level;
	int Jawaban, Menang, Skor=0;
	string Nama, Email;
	int angka, tebak, i=0;
	char k;
	int Pilih;
	
	gotoxy(30,10); cout << "==============================================================";
    gotoxy(30,11); cout<<"                                                | |            ";
    gotoxy(30,12); cout<<"   __ _  __ _ _ __ ___   ___    __ _ _ __   __ _| | ____ _     ";
    gotoxy(30,13); cout<<"  / _` |/ _` | '_ ` _ \\ / _ \\  / _` | '_ \\ / _` | |/ / _` | ";
    gotoxy(30,14);  cout<<" | (_| | (_| | | | | | |  __/ | (_| | | | | (_| |   < (_| |   ";
    gotoxy(30,15); cout<<"  \\__, |\\__,_|_| |_| |_|\\___|  \\__,_|_| |_|\\__, |_|\\_\\__,_|";
    gotoxy(30,16); cout<<"  |___/                                    |___/               ";
    gotoxy(30,17); cout << "=============================================================";
    Sleep(4000);
    system("cls");
                                                                         
	gotoxy(40,10); cout << "===============================================";
	gotoxy(40,11); cout << "        SILAHKAN MASUKAN IDENTITAS ANDA "; 
	gotoxy(40,12); cout << "===============================================";
	gotoxy(40,13); cout << "Masukan Nama Anda :";
	getline(cin, Nama);
	gotoxy(40,14); cout << "Masukan Email Anda :";
	getline(cin, Email);
	system ("cls");
	
	gotoxy(36,6);  cout << "===============================================";
	gotoxy(36,7);  cout << "|          SILAHKAN PILIH MENU GAME           |"; 
	gotoxy(36,8);  cout << "===============================================";
	gotoxy(11,14); cout << "========================";
	gotoxy(9,15);  cout << "   1. Game Tebak Angka";  
	gotoxy(11,16); cout << "========================";
	gotoxy(84,14); cout << "========================";
	gotoxy(81,15); cout << "   2. Game Matematika";
	gotoxy(84,16); cout << "========================";
	
	for(int j=0; ; ){
		k=getch();
		
		if(k==75 ){
		gotoxy(36,6);  cout << "===============================================";
	    gotoxy(36,7);  cout << "|          SILAHKAN PILIH MENU GAME           |"; 
	    gotoxy(36,8);  cout << "===============================================";
	    gotoxy(11,14); cout << "=========================";
	    gotoxy(9,15);  cout << "  --> 1. Game Tebak Angka";  
	    gotoxy(11,16); cout << "=========================";
	    gotoxy(84,14); cout << "========================";
	    gotoxy(81,15); cout << "      2. Game Matematika";
	    gotoxy(84,16); cout << "========================";
	    Pilih = 1;
		}
		
		if(k==77){
		gotoxy(36,6);  cout << "===============================================";
	    gotoxy(36,7);  cout << "|          SILAHKAN PILIH MENU GAME           |"; 
	    gotoxy(36,8);  cout << "===============================================";
	    gotoxy(11,14); cout << "==========================";
	    gotoxy(8,15);  cout << "       1. Game Tebak Angka";  
	    gotoxy(11,16); cout << "==========================";
	    gotoxy(84,14); cout << "==========================";
	    gotoxy(84,15); cout << "  -->  2. Game Matematika";
	    gotoxy(84,16); cout << "==========================";	
	    Pilih = 2;
		}
		
		if(k=='t'){
		   if(Pilih==1){
				system("cls");
				goto game1;
	    	}
			if(Pilih==2){
			   system("cls");
			   goto game2; 
        	}
        }
    }
				
	game1:
    Login();
	cin >> Angka;
	system ("cls");
    
	load();	
	
	if (Angka==1){
	    srand(time(NULL));
	    angka=rand() % 50 +1;
	    gotoxy(40,1); cout << "=========================================";
		gotoxy(40,2); cout << "         Pilihlah Angka 1-50             ";
		gotoxy(40,3); cout << "         Mulailah Menebak                ";
		gotoxy(40,4); cout << "==========================================";
		gotoxy(40,5); cout << endl;
		
		for (i=0; i<10; i++){
			cout << "Masukan Angka :";
		    cin >> tebak;
		        
		    if(tebak <= 50){
		        	
		        if (tebak < angka){
		            cout << respon[0] << endl;    
		        }
		            
				else if(tebak > angka) {
		            cout << respon[1]<< endl;
		        }
		            
				else{
				}		
	        }
	            
			else {
	         	cout << respon[2] << endl;
	         	exit(0);
			}
		} 
				   
	    cout << endl;
	    
	    cout << "Jawaban Anda Benar" << endl;
		cout << "Anda Telah Menebak Sebanyak :" << i << endl;       
    }  
		        
	game2:
	MemilihLevel();
	cin >> Level;
	system ("cls");
	    
	if(Level==1){
		Login();
	    cin >> Angka;
	    system ("cls");   
	    
	    load();
	    
	    gotoxy(40,1); cout << "==============================================";
	    gotoxy(40,2); cout << "                    LEVEL 1                   ";
	    gotoxy(40,3); cout << "==============================================";
	    gotoxy(40,4); cout << endl;
	    
		for(int i=0; i<10; i++){
	        srand(time(NULL));
	        int x=rand()% 20 +1;
	        int y=rand()% 20 +1;
	        
	        cout << x << " + " << y  << " = ";
	        cin >> Jawaban;
	        
	        if(Jawaban==x+y){
	        	system ("color 2");
		        cout << "Correct" << endl;
		        Menang++;
	        }
	            
			else {
	        	system ("color 4");
		        cout << "Incorrect" << endl;
            }
        }
    	
        Skor = Menang*10;
    	char shafa;
    	cout << "\ncek leaderboard : ";
    	cin >> shafa;
    	
    	if(shafa='y'){
       		cout << "\nSkor Kamu Adalah : " << Skor;
         	Skor = Menang*10;
       	    cout << "Skor Kamu Adalah : " << Skor;
        }
    }
        
	else if(Level==2){
        Login();
	    cin >> Angka;
	    system ("cls");   
	    
	    load();
	        
	    gotoxy(40,1); cout << "==============================================";
	    gotoxy(40,2); cout << "                    LEVEL 2                   ";
	    gotoxy(40,3); cout << "==============================================";
	    gotoxy(40,4); cout << endl;
	        
		for(int i=0; i<10; i++){
	        srand(time(NULL));
	        int x=rand()% 20 +1;
	        int y=rand()% 10 +1;
	        
	        cout << x << " - " << y  << " = ";
	        cin >> Jawaban;
	        
	        if(Jawaban==x-y){
	            system ("color 2");
		        cout << "Correct" << endl;
		        Menang++;
		    }
				
			else{
	        	system ("color 4");
		        cout << "Incorrect" << endl;
            }
        } 
  	} 
		
	else if(Level==3){
        Login();
	    cin >> Angka;
	    system ("cls");   
	    
	    load();
	        
	    gotoxy(40,1); cout << "==============================================";
	    gotoxy(40,2); cout << "                    LEVEL 3                   ";
	    gotoxy(40,3); cout << "==============================================";
	    gotoxy(40,4); cout << endl;
	        
	    for(int i=0; i<10; i++){
	        srand(time(NULL));
	        int x=rand()% 10 +1;
	        int y=rand()% 20 +1;
	        
	        cout << x << " x " << y  << " = ";
	        cin >> Jawaban;
	        
	        if(Jawaban==x*y){
	            system ("color 2");
		        cout << "Correct" << endl;
		        Menang++;
	        }
	        
				else {
	            	system ("color 4");
		            cout << "Incorrect" << endl;
                }
         	}   
		} 
		 
	return 0;	
}
