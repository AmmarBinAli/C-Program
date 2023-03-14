#include <iostream>
using namespace std;

int main(){
    int DATA[10] = {2,4,5,9,2,1,4,8,9,2};
	int max = DATA[0];
	int k = 1;
	int LOC = 1;

	do{
	 if(max>DATA[k]){
	 	max = DATA[k];
	 	LOC = k;
	 }	
	 k++;	
	}
	while(k<10);
	
	  cout << endl;
	    cout << "The minimum value is: " << max << endl;
	    cout << "The location of minimum value is: " << LOC;
	
	
	
	return 0;
}
