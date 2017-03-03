//#include <iostream>
//using namespace std;
//
//
//void ind (int mun1, int mun2,int mun3);
//int main() {
//	int num1;
//	int num2;
//	int num3;
//	while (1) {
//		cout << "type in three numbers" << endl;
//		cin >> num1;
//		cin >> num2;
//		cin >> num3;
//
//		ind(num1, num2, num3);
//	}
//}
//void ind(int mun1, int mun2, int mun3) {
//	if (mun1 < mun2 && mun2 < mun3 && mun1 < mun3) {
//		cout << mun1 << mun2 << mun3 << endl;
//	}
//	if (mun1 < mun2 && mun2 > mun3 && mun1 < mun3) {
//		cout << mun1 << mun3 << mun2 << endl;
//	}
//	if (mun1 > mun3 && mun2 < mun3 && mun1 < mun3) {
//		cout << mun2 << mun1 << mun3 << endl;
//	}
//	if (mun1 < mun2 && mun2 > mun3 && mun1 > mun3) {
//		cout << mun3 << mun1 << mun2 << endl;
//	}
//	if (mun1 > mun2 && mun2 < mun3 && mun1 > mun3) {
//		cout << mun2 << mun3 << mun1 << endl;
//	}
//	if (mun1 > mun2 && mun2 > mun3 && mun1 > mun3) {
//		cout << mun3 << mun2 << mun1 << endl;
//	}
//	else
//		cout << "No Result\n";
//}