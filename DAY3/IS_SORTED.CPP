#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
	if(n==0||n==1)return true;
	if(arr[0]>arr[1])return false;
	else{
		bool remaining=issorted(arr+1,n-1);
		return remaining;
	}
	
}
int main(){
	int arr[5]={2,114,6,7,99};
	bool ans=issorted(arr,5);
	if(ans){
		cout<<"is sorted";
	}
	else {
		cout<<"not sorted";
	}
	return 0;
}
