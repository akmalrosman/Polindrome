//Name : Muhammad Khairul Akmal Bin Rosman
//NO. MATRIKS : DDWC2019/060522
//SECTION : 02
//SUBJECT : C++ Programming
//COURSE : Sains Komputer

#include <iostream>
using namespace std;
	void palindrome(int num){  //functions
		int rev=0, val;        //val = value | rev tu boleh tukar apa2
		val = num;
		while(num > 0) {       //pakai looping while
			rev = rev * 10 + num % 10;  //10 ni adalah based 10 atau desimal
			num = num / 10;
		}
		if(val==rev)
		cout<<val<<" is a palindrome"<<endl;
		else
		cout<<val<<" is not a palindrome"<<endl;
		
	}
	int main() {
		palindrome(12321);
		palindrome(1234);
		return 0;
	}
