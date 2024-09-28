#include<iostream>
using namespace std;

void shellSort(int arr[], int n)
{
	int k=n, cen, i; 
	while(k >1)
	{
		k=k/2;
		cen=1;
	}
	while(cen == 1)
	{
		cen=0; 
		i=0;
		while(i+k < n)	
		{
			if(arr[i+k] < arr[i])
			{
				int aux;
				aux=arr[i];
				arr[i]=arr[i+k];
				arr[i+k]=aux;
				cen=1;
			}
			i=i+1;
		}
	}	
	
	cout<<"       elementos ordenados  "<<endl;
	cout<<"--------------------------------"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}	
}

int main()
{
	int n;
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>n;
	int arreglo[n];
	cout<<"Ingrese los valores del arreglo: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"elemento"<<i+1<<" :"; cin>>arreglo[i];
	}
	shellSort(arreglo, n);
	return 0;
}