#include<iostream>
using namespace std;
int  sum(int arr[],int n){
	if(n==0)return 0;
	if(n==1)return arr[0];
	int remain=sum(arr+1,n-1);
	int sum=arr[0]+remain;
	return sum;

}
int main(){
	int arr[5]={2,4,6,7,9};
	int ans=sum(arr,5);
	cout<<ans<<endl;
	return 0;
}
