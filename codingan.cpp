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
	gotoxy(84,16); cout << "|  2. Exit   |";
	gotoxy(84,17); cout << "==============";
	gotoxy(55,19); cout << "Pilih Angka :";
} 
	   
void load(){	                                                                  
	int x;
	for (x=5; x>=0; x--){
		gotoxy(50,13); cout<<"LOADING.";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"LOADING..";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"LOADING...";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"LOADING....";
		Sleep(100);
		system("cls");
	}
}

int main(){
    
	string Nama;                
	int Angka;
	int Pemain, Musuh;
	string Hasil[3]={"Menang",
	                 "Kalah",
					 "Seri"};
	int Level;
	char Pilihan;
	int Pilih;
	int Jawaban, Menang = 0, Skor;
	int x, y;
	
	system ("color 3");
	gotoxy(30,10); cout<<"==============================================================";
    gotoxy(30,11); cout<<"                                                | |            ";
    gotoxy(30,12); cout<<"   __ _  __ _ _ __ ___   ___    __ _ _ __   __ _| | ____ _     ";
    gotoxy(30,13); cout<<"  / _` |/ _` | '_ ` _ \\ / _ \\  / _` | '_ \\ / _` | |/ / _` | ";
    gotoxy(30,14); cout<<" | (_| | (_| | | | | | |  __/ | (_| | | | | (_| |   < (_| |   ";
    gotoxy(30,15); cout<<"  \\__, |\\__,_|_| |_| |_|\\___|  \\__,_|_| |_|\\__, |_|\\_\\__,_|";
    gotoxy(30,16); cout<<"  |___/                                    |___/               ";
    gotoxy(30,17); cout<< "=============================================================";
    Sleep(4000);
    system("cls");
                                                                         
	gotoxy(40,10); cout << "===============================================";
	gotoxy(40,11); cout << "        SILAHKAN MASUKAN USERNAME ANDA         "; 
	gotoxy(40,12); cout << "===============================================";
	gotoxy(40,13); cout << "Username :";
	getline(cin, Nama);
	system ("cls");
	
	MenuGame:
	system ("color B");
	gotoxy(36,6);  cout << "===============================================";
	gotoxy(36,7);  cout << "|          SILAHKAN PILIH MENU GAME           |"; 
	gotoxy(36,8);  cout << "===============================================";
	gotoxy(19,14); cout << "===============";
	gotoxy(17,15); cout << "   1. Game Dadu";  
	gotoxy(19,16); cout << "===============";
	gotoxy(84,14); cout << "=====================";
	gotoxy(82,15); cout << "   2. Game Matematika";
	gotoxy(84,16); cout << "=====================";
	gotoxy(50,25); cout << "Klik y Setelah Memilih";
	
	for(int h=0; ; ){
		Pilihan = getch();
		
		if(Pilihan == 75 ){
		gotoxy(36,6);  cout << "===============================================";
	    gotoxy(36,7);  cout << "|          SILAHKAN PILIH MENU GAME           |"; 
	    gotoxy(36,8);  cout << "===============================================";
	    gotoxy(19,14); cout << "==================";
	    gotoxy(17,15); cout << "  --> 1. Game Dadu";  
	    gotoxy(19,16); cout << "==================";
	    gotoxy(84,14); cout << "========================";
	    gotoxy(82,15); cout << "      2. Game Matematika";
	    gotoxy(84,16); cout << "========================";
	    Pilih = 1;
		}
		
		if(Pilihan == 77){
		gotoxy(36,6);  cout << "===============================================";
	    gotoxy(36,7);  cout << "|          SILAHKAN PILIH MENU GAME           |"; 
	    gotoxy(36,8);  cout << "===============================================";
	    gotoxy(19,14); cout << "==================";
	    gotoxy(17,15); cout << "      1. Game Dadu";  
	    gotoxy(19,16); cout << "==================";
	    gotoxy(84,14); cout << "========================";
	    gotoxy(82,15); cout << "  --> 2. Game Matematika";
	    gotoxy(84,16); cout << "========================";	
	    Pilih = 2;
		}
		
		if(Pilihan == 'y'){
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
	
	if(Angka==1){
		system ("color 6");
	    load();
	    
	    gamedadu:
	    system ("color F");
	    gotoxy(40,1); cout << "==============================================";
	    gotoxy(40,2); cout << "                    GAME DADU                 ";
	    gotoxy(40,3); cout << "==============================================";
	    
	    srand(time(NULL));
	    Pemain = rand()% 5 +1;
	    Musuh  = rand()% 5 +1;
	    
	    gotoxy(28,8); cout << "Pemain  :  " << Pemain;
	    getch();
	    
	    gotoxy(86,8); cout << "Musuh   :  " << Musuh;
	    getch();
		
		gotoxy(36,27); cout<< "    Play Again";
	    gotoxy(72,27); cout<< "    Leaderboard";
	    
        for(int h=0; ; ){
		    Pilihan = getch();
	
		    if(Pilihan == 75 ){
		    	gotoxy(36,27); cout<< "--> Play Again";
			    gotoxy(72,27); cout<< "    Leaderboard";
			    Pilih = 1;
		    }
		
	    	if(Pilihan == 77){
			    gotoxy(36,27); cout<< "    Play Again";
			    gotoxy(72,27); cout<< "--> Leaderboard";
			    Pilih = 2;
    	    }
    	
    	    if(Pilihan == 'y'){
		        if(Pilih==1){
				    system("cls");
				    goto gamedadu;
	    	    }
	    	
			    if(Pilih==2){
			        system("cls");
			        goto leaderboard;
                }
            }
        }
        
        leaderboard:
      	system ("color B");	
        gotoxy(40,5); cout<< "========================================";
	    gotoxy(40,6); cout<< "||         PLAYER        ||   WINNER  ||";
	    gotoxy(40,7); cout<< "========================================";
	    gotoxy(40,8); cout<< "||                       ||           ||";
	    gotoxy(40,9); cout<< "||                       ||           ||";
        gotoxy(40,10);cout<< "========================================";
        
        gotoxy(44,8); cout<< "Pemain";
        gotoxy(44,9); cout<< "Musuh";
        
        if (Pemain > Musuh){
	    	gotoxy(70,8); cout << Hasil[0];	
	    	gotoxy(70,9); cout << "Kalah";
		}
		
		else if(Pemain < Musuh){
			gotoxy(70,8); cout << Hasil[1];
			gotoxy(70,9); cout << "Menang";
		}
		
		else if(Pemain = Musuh){
			gotoxy(70,8); cout << Hasil[2];
			gotoxy(70,9); cout << "Seri";
        }
        
        gotoxy(36,27); cout<< "    Play Again";
	    gotoxy(74,27); cout<< "    Exit";
	    
        for(int h=0; ; ){
		    Pilihan = getch();
	
		    if(Pilihan == 75 ){
		    	gotoxy(36,27); cout<< "--> Play Again";
			    gotoxy(74,27); cout<< "    Exit";
			    Pilih = 1;
		    }
		
	    	if(Pilihan == 77){
			    gotoxy(36,27); cout<< "    Play Again";
			    gotoxy(74,27); cout<< "--> Exit";
			    Pilih = 2;
    	    }
    	
    	    if(Pilihan == 'y'){
		        if(Pilih==1){
				    system("cls");
				    goto gamedadu;
	    	    }
	    	
			    if(Pilih==2){
			        system("cls");
			        exit (0);
                }
            }
        }
    }
    
    else if(Angka==2){
        system ("color 4");
    	cout << "Anda Telah Keluar Dari Game";
    	exit(0);
    }
    
    else{
        system ("color 4");
    	cout << "Anda Salah Menginput Angka";
    	exit(0);
    }
        	        
	game2:
	MemilihLevel();
	cin >> Level;
	system ("cls");
	    
	if(Level==1){
		Login();
	    cin >> Angka;
	    system ("cls");   
	    
	    if(Angka==1){
	    	system ("color 6");
	        load();
	        
	        system ("color F");
	        gotoxy(40,1); cout << "==============================================";
	        gotoxy(40,2); cout << "                    LEVEL 1                   ";
	        gotoxy(40,3); cout << "==============================================";
	        gotoxy(40,4); cout << endl;
	    
		    for(int i=0; i<10; i++){
	            srand(time(NULL));
	            int x=rand()% 20 +1;
	            int y=rand()% 10 +1;
	        
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
        
            system ("color B");	
    	    gotoxy(34,27); cout<< "    Play";
	        gotoxy(71,27); cout<< "    Cek Skor";
	
            for(int h=0; ; ){
		        Pilihan = getch();
	
		        if(Pilihan == 75 ){
			        gotoxy(34,27); cout<< "--> Play";
			        gotoxy(71,27); cout<< "    Cek Skor";
		        	Pilih = 1;
	        	}
		
	        	if(Pilihan == 77){
			        gotoxy(34,27); cout<< "    Play";
			        gotoxy(71,27); cout<< "--> Cek Skor";
			        Pilih = 2;
    	        }
    	
    	        if(Pilihan == 'y'){
		            if(Pilih==1){
				        system("cls");
				        goto MenuGame;
	    	        }
	    	
			        if(Pilih==2){
			            system("cls");
			            goto CekSkor;
                    }
                }
            }
        
            CekSkor:
    
            Skor = Menang*10;
            	
	        gotoxy(40,5); cout<< "======================================";
	        gotoxy(40,6); cout<< "||         PLAYER        ||   SCORE ||";
	        gotoxy(40,7); cout<< "======================================";
	        gotoxy(40,8); cout<< "||                       ||         ||";
            gotoxy(40,9); cout<< "======================================";
	
            gotoxy(44,8); cout<< Nama;
            gotoxy(70,8); cout<< Skor;
        
            system ("color B");	
            gotoxy(36,27); cout<< "    Play";
	        gotoxy(70,27); cout<< "    Exit";
	    
            for(int h=0; ; ){
		        Pilihan = getch();
	
		        if(Pilihan == 75 ){
		        	gotoxy(36,27); cout<< "--> Play";
			        gotoxy(70,27); cout<< "    Exit";
			        Pilih = 1;
	         	}
		
		        if(Pilihan == 77){
			        gotoxy(36,27); cout<< "    Play";
			        gotoxy(70,27); cout<< "--> Exit";
			        Pilih = 2;
    	        }
    	
    	        if(Pilihan == 'y'){
		            if(Pilih==1){
				        system("cls");
				        goto MenuGame;
	    	        }
	    	
			        if(Pilih==2){
			            system("cls");
			            exit(0);  
                    }   
                }
            }
        }
        
        else if(Angka==2){
            system ("color 4");
    	    cout << "Anda Telah Keluar Dari Game";
    	    exit(0);
        }
      	
      	else{
      		system ("color 4");
    	    cout << "Anda Salah Menginput Angka";
    	    exit(0);
        }
    }
         
	else if(Level==2){
        Login();
	    cin >> Angka;
	    system ("cls");   
	    
	    if(Angka==1){
	    	system ("color 6");
		    load();
	        
	        system ("color F");
	        gotoxy(40,1); cout << "==============================================";
	        gotoxy(40,2); cout << "                    LEVEL 2                   ";
	        gotoxy(40,3); cout << "==============================================";
	        gotoxy(40,4); cout << endl;
	        
		    for(int i=0; i<10; i++){
	            srand(time(NULL));
	            int x=rand()% 20 +1;
	            int y=rand()% 20 +1;
	        
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
		
		    system ("color B");	
		    gotoxy(34,27); cout<<"    Play";
	        gotoxy(71,27); cout<<"    Cek Skor";
	    
            for(int h=0; ; ){
		        Pilihan = getch();
	
		        if(Pilihan == 75 ){
			        gotoxy(34,27); cout<<"--> Play";
			        gotoxy(71,27); cout<<"    Cek Skor";
			        Pilih = 1;
		        }
		
		        if(Pilihan == 77){
			        gotoxy(34,27); cout<<"    Play";
			        gotoxy(71,27); cout<<"--> Cek Skor";
			        Pilih = 2;
    	        }
    	
    	        if(Pilihan == 'y'){
		            if(Pilih==1){
				        system("cls");
				        goto MenuGame;
	    	        }
	    	
			        if(Pilih==2){
			            system("cls");
			            goto CekSkor;
                    }
                }  
            }
        }
		 
        else if(Angka==2){
  	        system ("color 4");
    	    cout << "Anda Telah Keluar Dari Game";
    	    exit(0);
    	}
    	
    	else{
      		system ("color 4");
    	    cout << "Anda Salah Menginput Angka";
    	    exit(0);
        }
    }
		
	else if(Level==3){
        Login();
	    cin >> Angka;
	    system ("cls");   
	    
	    if(Angka==1){
	    	system ("color 6");
	        load();
	        
	        system ("color F");
	        gotoxy(40,1); cout << "==============================================";
	        gotoxy(40,2); cout << "                    LEVEL 3                   ";
	        gotoxy(40,3); cout << "==============================================";
	        gotoxy(40,4); cout << endl;
	        
	        for(int i=0; i<10; i++){
	            srand(time(NULL));
	            int x=rand()% 15 +1;
	            int y=rand()% 15 +1;
	        
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
		 
            system ("color B");	
		    gotoxy(34,27); cout<<"    Play";
	        gotoxy(71,27); cout<<"    Cek Skor";
	    
            for(int h=0; ; ){
		        Pilihan = getch();
	
		        if(Pilihan == 75 ){
			        gotoxy(34,27); cout<<"--> Play";
			        gotoxy(71,27); cout<<"    Cek Skor";
			        Pilih = 1;
		        }
		
		        if(Pilihan == 77){
			        gotoxy(34,27); cout<<"    Play";
			        gotoxy(71,27); cout<<"--> Cek Skor";
			        Pilih = 2;
    	        }
    	
    	        if(Pilihan == 'y'){
		            if(Pilih==1){
				    system("cls");
				    goto MenuGame;
	    	        }
	    	
			        if(Pilih==2){
			            system("cls");
			            goto CekSkor;
                    }    
                }  
            }    
        }
	  
    	else if(Angka==2){
    		system ("color 4");
            cout << "Anda Telah Keluar Dari Game";
            exit(0);
    	}
    	
    	else{
      		system ("color 4");
    	    cout << "Anda Salah Menginput Angka";
    	    exit(0);
        }
    }

	return 0;	
}
