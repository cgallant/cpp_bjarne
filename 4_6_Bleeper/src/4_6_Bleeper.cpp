//============================================================================
// Name        : 4_6_Bleeper.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Bleeper
//============================================================================

//#include <std_lib_facilities.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> disliked_words = { "Broccoli", "Kale" };
	vector<string> words;
	cout << "Enter words (\"Exit\" to exit):" << endl;
	string temp = " ";

	do {
		cin >> temp;
		words.push_back(temp);
	} while (temp != "exit");

	for (unsigned int i = 0; i < words.size() - 1; i++) {
		temp = words[i];
		for (unsigned int j = 0; j < disliked_words.size(); j++) {
			if (disliked_words[j] == temp)
				temp = "BLEEP";
		}
		cout << temp << endl;
	}
	cout << endl;
	return 0;
}
