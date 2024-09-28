#include<iostream>
using namespace std;
void reduce(int arr[], int inicio, int final)
{
	int izq, der, pos, cen, aux;
	izq=inicio;
	der=final;
	pos=izq;
	cen=1;
	while(cen==1)
	{
		cen=0;
		while(arr[pos]<=arr[der] && pos != der)
		{
			der=der-1;
		}
		if(pos!=der)
		{
			aux=arr[pos];
			arr[pos]=arr[der];
			arr[der]=aux;
			pos=der;
			while(arr[pos] >= arr[izq] && pos != izq)
			{
				izq=izq+1;
			}
			if(pos!=izq)
			{
				aux=arr[pos];
				arr[pos]=arr[izq];
				arr[izq]=aux;
				pos=izq;
				cen=1;
			}
		}
		if(pos-1>inicio)
		{
			reduce(arr, inicio, pos-1);
		}
		if(pos+1<final)
		{
			reduce(arr, pos+1, final);
		}
	}
}
void quickSort(int arr[], int n)
{
	reduce(arr, 0, n-1);
	
}

int main()
{
	int n;
	cout<<"Ingrese la cantidad de elementos: "; cin>>n;
	int arreglo[n];
	for(int i=0; i<n; i++)
	{
		cout<<"elemento"<<i+1<<":"; cin>>arreglo[i];
	}
	
	quickSort(arreglo, n);
	cout << "elementos ordenados: " << endl;
	cout<<"-------------------------"<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}