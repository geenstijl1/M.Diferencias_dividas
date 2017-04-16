#ifndef Metodo_H
#define Metodo_H

using namespace std;
class Difdiv{
    private:
        int n,i,j;
        float x[10],f[10],a, mult, sum=0;
    public:    
        void xn();
        void puntos();
        void calculos();
        void impresion();
};

void Difdiv::xn(){
    cout << "Cuantos puntos son:\n ";
    cin >> n;
    cout << "\nEscribe el valor de x para interpolar:\n  ";
    cin >> a;
}

void Difdiv::puntos(){
    cout<<"\nEscribe x y f(x):\n  ";
    for(i=0;i<n;i++)
        cin>>x[i]>>f[i];
}

void Difdiv::calculos(){
    
    for(j=0;j<n-1;j++)
    {
        for(i=n-1;i>j;i--)
            f[i]=(f[i]-f[i-1])/(x[i]-x[i-j-1]);
    }
    for(i = n - 1;i >= 0;i --) {
        mult=1;
        for(j=0;j<i;j++)
            mult*=(a-x[j]);

        mult*=f[j];
        sum+=mult;
    }
}
void Difdiv::impresion(){
    cout<<"El resultado es: " << sum <<endl;
}

#endif