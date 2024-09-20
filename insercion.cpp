#include<iostream>
using namespace std;
void InsercionDir()
{
	int m;
	cout<<"ingrese la cantidad de numeros:"; cin>>m;
	int arr[m];
	for(int i=0; i<m; i++)
	{
		cout<<"ingrese un numero:"; cin>>arr[i];
	}
	cout<<endl;
	
	int k;
	for(int i=2; i<m; i++)
	{
		int aux=arr[i];
		k=i-1;
		while(k>0 and aux<arr[k])
		{
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=aux;
	}
	cout<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
InsercionBin()
{
	int n;
	cout<<"ingrese la cantidad de numeros:"; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cout<<"ingrese un numero:"; cin>>arr[i];
	}
	cout<<endl;
	for(int i=2; i<n; i++)
	{
		int aux=arr[i];
		int izq=1;
		int der=i-1;
		while(izq<=der)
		{
			int m=(izq+der)/2;
			if(aux<arr[m])
			{
				der=m-1;
			}
			else
			{
				izq=m+1;
			}
		}
		int j=i-1;
		while(j>=izq)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[izq]=aux;
	}
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int op;
	bool salir=false;
	do
	{
		cout<<"1. insercion directa"<<endl;
		cout<<"2. insercion binaria"<<endl;
		cout<<"3. salir"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:InsercionDir(); break;
			case 2:InsercionBin(); break;
			case 3:salir=true;
			default: break;
		}
	}
	while(!salir);
	
	return 0;
}
