#include<bits/stdc++.h> 
using namespace std; 

int search(int arr[], int n, int x, int k) 
{ 
	int i = 0; 
	while (i < n) 
	{ 
		if (arr[i] == x) 
			return i; 

		i = i + max(1, abs(arr[i]-x)/k); 
	} 

	
	return -1; 
} 

int main() 
{ 
	int arr[] = {2, 4, 5, 7, 7, 6}; 
	int x = 6; 
	int k = 2; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int ans=search(arr, n, x, k);
	if(ans == -1)
	cout << "number is not present!"; 
	else
	cout << "Element " << x << " is present at index "<<ans ;
} 
