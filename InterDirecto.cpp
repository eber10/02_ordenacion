#include<iostream>
using namespace std;
void interDirder(int arr[], int n)
{
   
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j]) 
            {
                int aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void interDirizq(int arr[], int m)
{
    for(int i=0; i<m-1; i++)
    {
        for(int j=m-1; j>i; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int aux=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=aux;
            }
        }
    }
    cout<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void interDircen(int arr[], int n)
{
    int cen=1;
    int i=0;
    while(i<n-1 and cen==1)
    {
        cen=0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                cen=1;
            }
        }
        i++;
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void interDirBi(int arr[], int m)
{
    int izq=0;
    int der=m-1;
    int k;
    while(izq<=der)
    {
        k=izq;
        for(int i=der; i>izq; i--)
        {
            if(arr[i-1]>arr[i])
            {
                int aux=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=aux;
                k=i;
            }
        }
        izq++;
        for(int i=izq; i<der; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int aux=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=aux;
                k=i;
            }
        }
        der--;
    }
    cout<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int op, x[100], n;
    cout<<"ingrese la cantidad de elementos:"; cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"ingrese un numero:"; cin>>x[i];
    }
    bool salir=false;
    do
    {
        cout<<"1. Intercambio directo por la derecha"<<endl;
        cout<<"2. Intercambio directo por la izquierda"<<endl;
        cout<<"3. Intercambio directo con senal"<<endl;
        cout<<"4. Intercambio directo bidirecional"<<endl;
        cout<<"5. salir"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:interDirder(x, n); break;
            case 2:interDirizq(x, n); break;
            case 3:interDircen(x,n); break;
            case 4:interDirBi(x,n); break;
            case 5:salir=true; break;
            default:break;
        }

    } while (!salir);
    return 0;

}