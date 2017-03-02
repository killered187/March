#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

void FunctionBurp(int sound);

int main() {
	int num;
	cout << "How many burps do you want." << endl;
	cin >> num;
	FunctionBurp(num);
}

	void FunctionBurp(int sound) {
		for (int i = 0; i < sound;i++)
			PlaySound(TEXT("puking.wav"), NULL, SND_FILENAME);
	}
