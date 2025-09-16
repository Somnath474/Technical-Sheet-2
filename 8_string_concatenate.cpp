// Write a program to concatenate two strings without using library functions. 
#include<bits/stdc++.h>
using namespace std;
int main(){
	char str1[50],str2[50],result[100];
	cout<<"Enter first string"<<endl;
	cin>>str1;
	
	cout<<"Enter second string"<<endl;
	cin>>str2;
	int i=0,j=0;
	while(str1[i]!='\0'){
		result[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0'){
		result[i]=str2[j];
		i++;
		j++;
	}
	
	cout<<result;
}
