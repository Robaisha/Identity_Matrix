#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={1,0,0,0,1,0,0,0,1};
	int one=0;
	int zero=0;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			if(row==col&&arr[row][col]==1){
				one++;
			}
			if(row!=col&& arr[row][col]==0){
				zero++;
			}
		}
	}
	if(zero==6&&one==3){
		cout<<"\nThis is an IDENTITY Matrix\n";
	}
	else{
		cout<<"\nThis is not an IDENTITY Matrix\n";
	}
}
