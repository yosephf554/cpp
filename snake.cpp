#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"juego.h"
#define ESC 27

using namespace std;



int main(){
	char tecla;
	int puntos=0;
	int xPos=30, yPos=20;
	
	dificultad();	
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);cout<<(char)4;	
	
	while(tecla != ESC && gameover() ){
	    proceso(tecla, puntos);
	}
	
	if ( !gameover()){
		MessageBox(NULL,"Has perdido","Perdedor", MB_OK);
		system("cls");
	}
	
	system("pause>NULL");
	return 0;
}


