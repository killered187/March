#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

void jukebox(int sound);

int main() {
	int num;
	cout << "Choose a sound 0-3" << endl;
	cin >> num;
	jukebox(num);
}
void jukebox(int sound) {

	switch (sound) {
	case 0:
		PlaySound(TEXT("cartoon163.wav"), NULL, SND_FILENAME);
		cout << "cartoon163.wav" << endl;
		break;
	case 1:
		cout << "Mystery sound" << endl;
		PlaySound(TEXT("cartoon158.wav"), NULL, SND_FILENAME);
		break;
	case 2:
		cout << "Mystery sound" << endl;
		PlaySound(TEXT("cartoon174.wav"), NULL, SND_FILENAME);
		break;
	case 3:
		cout << "Mystery sound" << endl;
		PlaySound(TEXT("cartoon178.wav"), NULL, SND_FILENAME);
		break;





	}
}
