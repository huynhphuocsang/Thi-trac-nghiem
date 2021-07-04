#include<iostream>
#include<fstream>
#include<time.h>
#include<windows.h>
using namespace std; 
void HoanDoi( int &a,int &b)
{
	long long int temp = a;
	a = b;
	b = temp;
}

void XaoTronMang(int arr[],int n)
{
	srand(time(NULL));
	int vitrimin;
	int vitrimax = n - 1;
	int vitrihoandoi;
	int i = 0;
	while (i < n - 1)
	{
		vitrimin = i + 1;
		vitrihoandoi = rand() % (vitrimax - vitrimin + 1) + vitrimin;
		HoanDoi(arr[i], arr[vitrihoandoi]);
		i++;
	}
}
void xuatfile(int a[],int n){
	ofstream fo;
	if(!fo){
		cout<<"ghi file that bai!"<<endl;
		return ; 
	}
	fo.open("so_ngau_nhien.txt",ios::out);
	fo<<n<<endl;
	for(int i=0;i<n;i++){
		fo<<a[i]<<endl;
	}
	fo.close();
	cout<<"Ghi file thanh cong!"<<endl;
	return; 
}
int main(){
	int n=10000;
	int a[n];

	for(int i=0;i<n;i++){
		a[i]=i; 
	}
	XaoTronMang(a,n);
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<endl;
//	}
//	
	xuatfile(a,n);
	cout<<"hoan thanh!"<<endl;
	return 0; 
}

































