#include<iostream>
using namespace std;

int tower(int n,char source,char dest,char aux)
{
    if(n==1)
    {
        std::cout<<"source: "<<source << "dest: "<<dest<<endl;
    }
    else
    {
        tower(n-1,source,dest,aux);
        std::cout<<"source: "<<source <<"dest: "<<dest<<endl;
        tower(n-1,aux,dest,source);

    }
}
int main()
{
    int a;
    char b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<"A: "<<a <<"B: "<<"C: "<<c <<"D: "<<d <<endl;
    tower(a,b,c,d);
}
