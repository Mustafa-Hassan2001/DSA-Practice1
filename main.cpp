#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//P-1	
//	1 2 3
//	1 2 3
//	1 2 3
		
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n){
//		cout<<j;
//		j++;
//		
//	}
//	cout<<endl;
//	i++;
//}		
	
//P-2	
//	3 2 1 
//	3 2 1 
//	3 2 1
	
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<n-j+1;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
	
//P-3	
//	1 2 3
//	4 5 6
//	7 8 9	
	
//int n;
//cin>>n;
//
//int i=1, count =1;
//	while(i<n){		//row
//		int j=1;
//		while(j<=n){  //col
//			cout<<count<<" ";
//			count++;
//			j++;  		//newcol
//		}
//		cout<<endl;
//		i++;		//newrow
//	}
	

//P-4
//	1 
//	1 2 
//	1 2 3
//  1 2 3 4
		
//int n;
//cin>>n;
//int row=1;  //row -> n-> 4
//while(row<=n){  // row == number enter 
//	int col=1;  // col
//	while(col<=row){  // count == row number 
//		cout<<col;
//		col++;
//	}
//	cout<<endl;
//	row++;
//}	


//P-5
//1
//2 2
//3 3 3 
//4 4 4 4

//int n, count=1;
//cin>>n;
//int row=1;  //row -> n-> 4
//while(row<=n){  // row == number enter 
//	int col=1;  // col
//	while(col<=row){  // count == row number 
//		cout<<row<<" ";
//		col++;
//	}
//	cout<<endl;
//	row++;
//}	

//P-6
//1
//2 3
//4 5 6
//7 8 9 10

//int n, count=1;
//cin>>n;
//int row=1;  //row -> n-> 4
//while(row<=n){  // row == number enter 
//	int col=1;  // col
//	while(col<=row){  // count == row number 
//		cout<<count++<<" ";
//		col++;
//	}
//	cout<<endl;
//	row++;
//}	

//P-7
//1
//2 3
//3 4 5
//4 5 6 7

//with using val
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1, val=i;
//	while(j<=i){
//		cout<<val;
//		val++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//without using val
//int n;
//cin>>n;
//int i=0;
//while(i<n){
//	int j=0;
//	while(j<=i){
//		cout<<i+j+1;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//using Val variable
//int n;
//cin>>n;
//int i=1; 
//while(i<=n){
//	int j=1,val=i;
//	while(j<=i){
//		cout<<val;
//		val--;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//without using Val variable
int n;
cin>>n;
int i=1; 
while(i<=n){
	int j=1;
	while(j<=i){
		cout<<i-j+1<<" ";
		j++;
	}
	cout<<endl;
	i++;
}

//P-
//4
//34
//234
//1234
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		cout<<n-i+j;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//P-
//1
//1 2
//1 2 3
//1 2 3 4
//int n;
//cin>>n;
//int  i=1;
//while(i<=n){
//	int j=1, val=1;
//	while(j<=i){
//		cout<<val<<" ";
//		val++, j++;
//	}
//	cout<<endl;
//	i++;
//}	
	return 0;
}
