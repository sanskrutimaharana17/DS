#include<iostream>
using namespace std;

int getMin(int num[],int n){
	int mini = INT_MAX; //Maximum value for a variable of type int .
	
	for(int i=0;i<n;i++){
		mini=min(mini,num[i]);
		
		     //OR
		     
		     
		if(num[i]<min){
			min=num[i];
		}
		
	}
	return mini;
}

int getMax(int num[],int n){
	int maxI = INT_MIN; //Minimum value for a variable of type int .
	
	
	for(int i=0;i<n;i++){
		maxi=max(maxi,num[i]);
		
		    //OR
		    
		if(num[i]>max){
			max=num[i];
		}
		
	}
	return max;
}

int main() {
	
	int num[20];
	int  n; //elements in array
    
    cout<<"Enter number of elements";
    cin>>n;
    
    cout<<"Enter elements" << endl;
    for(int i=0;i<n;i++){
    	cin>>num[i];
	}
	cout<<"maximum"<<getMax(num, n)<<endl;
    cout<<"minimum"<<getMin(num, n)<<endl;
	}
