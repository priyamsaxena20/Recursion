#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
	if(s>e)return false;
	int mid=s+(e-s)/2;
	if(arr[mid]==key)return true;
	if(arr[mid]<key)return binarysearch(arr,mid+1,e,key);
	else{
		return binarysearch(arr,s,mid-1,key);
	}
}
int main(){
	int arr[6]={2,4,55,6,7,8};
	int n=6;
	int key=14;
	cout<<"present or not"<<binarysearch(arr,0,n-1,key)<<endl;
	return 0;
}
