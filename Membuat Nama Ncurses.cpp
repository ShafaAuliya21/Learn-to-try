#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	
	start_color();
	init_pair(1,COLOR_RED,COLOR_BLUE);
	init_pair(1,COLOR_WHITE,COLOR_RED);
	
	attron (COLOR_PAIR(1));
	printw("Shafa auliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	printw("sHafa auliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(2));
	
	attron (COLOR_PAIR(1));
	printw("shAfa auliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	printw("shaFa auliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(2));
	
	attron (COLOR_PAIR(1));
	printw("shafA auliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	printw("shafa Auliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(2));
	
	attron (COLOR_PAIR(1));
	printw("shafa aUliya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	printw("shafa auLiya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(2));
	
	attron (COLOR_PAIR(1));
	printw("shafa aulIya");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	printw("shafa auliYa");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(2));
	
	attron (COLOR_PAIR(1));
	printw("shafa auliyA");
	refresh();
	Sleep(1000);
	clear();
	attroff (COLOR_PAIR(1));
	
	getch();
	
	endwin();
}
