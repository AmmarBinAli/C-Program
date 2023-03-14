#include<iostream>
using namespace std;

int main(){
    int DATA[10]={1,2,5,9,2,7,4,8,9,2};
    int max=DATA[0];
    int k=1;
    int LOC=1;
    for(int k=1;k<10;k++){
    	if(max<DATA[k]){
    		max=DATA[k];
    		LOC=k;
		}
	}
	  cout << endl;
    	cout << "The Maximum Value IS :" << max << endl;
    	cout << "The Location Of Maximum Vlue Is :" << LOC;
	
	return 0;
}

    
