#include <iostream>
#include <string>
using namespace std;

int main(){
	// 		index :	  0	   1	     2	       3	  4
	string buahArray[5] = {"Coklat", "Jeruk", "Pepaya", "Pisang", "Mangga"};
	int nilaiArray[5] = {10, 20, 30, 40, 50};
	
	for (string namaBuah : buahArray){
		buahArray[2] = "Wortel"; 
		cout << namaBuah << " \n";
	}
	
	cout << endl;
	
	for (int i : nilaiArray){
		cout << i << " \n";
	}
	
	return 0;
}
