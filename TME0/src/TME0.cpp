//============================================================================
// Name        : TME0.cpp
// Author      : Khaled Bouattour
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "strutil.h"
using namespace std;
using namespace pr;

size_t length(const char* str){
	size_t ret=0;
	for(int i=0;str[i];i++){
		++ret;
	}
	return ret;
}

char* newcopy(const char* str){
	//size_t n = length(str);
	char* dest = new char[n+1];
	for(size_t i=0;i<=n;i++){
		dest[i]=str[i];
	}
	return dest;
}

int main() {
	size_t x;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int tab[10];
	for (int j = 9; j >=0 ;j--){
		tab[j] = j;
	}
	for (int i = 9; i >= 0 ; i--) {
	if (tab[i] - tab[i-1]== 1)
		cout << "ça marche!";
	else{
		cout << "probleme !";
		}
	}
	return 0;
}
