#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number"<<endl;
	cin>>n;
	int p=n;
	int rev=0;
	while(n>0){
		int rem=n%10;
		rev=rev*10 + rem;
		n=n/10;
	}
	if(rev==p){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a palindrome";
	}
}
