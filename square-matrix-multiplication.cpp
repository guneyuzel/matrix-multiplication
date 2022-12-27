#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,k,j,n;
	
	cout << "Choose the dimension of your square matrix (nxn): "; cin >> n;
	
	int a[n][n];
	int b[n][n];
	int c[n][n];
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "Enter the row " << i+1 << " column " << j+1 << " of A Matrix: ";
			cin >> a[i][j];
		}
	}
	
	cout << "\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "Enter the row " << i+1 << " column " << j+1 << " of B Matrix: ";
			cin >> b[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	cout << "\n";
	cout << "The Result Of A*B Matrix: \n" << endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "\t" << c[i][j];
		}
		cout << "\n";
	}
	
	
	return 0;
}
