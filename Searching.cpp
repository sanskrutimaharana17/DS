#include <iostream>   
using namespace std;

int main()
{
	int arr[100];
	int n,num;
	cout<<"size of array";
	cin>>n;
	
	cout<<"number to be found";
	cin>>num;
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]==num){
		cout<<"number found";	
		}
	}
		
	
	return 0;
}

																											                                                                                                             
