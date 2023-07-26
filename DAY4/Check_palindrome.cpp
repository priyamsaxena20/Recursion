#include<iostream>
using namespace std;
bool ispal(string str,int i,int j){
	// ba se case
	if(i>j)
	return  true ;
	
	if(str[i]!=str[j])
	return false;
	else{
		return ispal(str,i+1,j-1);
	}
	
	
	
}
int main(){
	string name="naman";
	bool check= ispal(name,0,name.length()-1);
	if(check){
		cout<<"ye to palindrome hai bhai";
	}
	else{
		cout<<"ye nahi hai bhai palindrome";
	}
	return 0;
}
