#include<iostream>
using namespace std;
void seleccionDir(int arr[], int m)
{
	int menor, k;
	for(int i=0; i<m-1; i++)
	{
		menor=arr[i];
		k=i;
		for(int j=i+1; j<m; j++)
		{
			if(arr[j]<menor)
			{
				menor=arr[j];
				k=j;
			}
		}
		arr[k]=arr[i];
		arr[i]=menor;
	}
	cout<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n;
	cout<<"ingrese la cantidad de numeros:"; cin>>n;
	int A[n];
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese un numero:"; cin>>A[i];
	}
	seleccionDir(A,n);
	return 0;
}
