// Accept 3 integers and print the largest of three using only if and else


#include<iostream>
using namespace std;

int main()
{

    int a,b,c,max;
    cout<< "\nEnter 3 intergers " ;
    cin >> a >> b >> c ;
    
    if( (b>a) && (b>c) ) 
    {
        max = b;
    }
    
    else if( (c>a) && (c>b) )
    {
        max = c;
    }
    
    else 
    {
        max = a;
    }

    cout<< "The maximum of three digits "<<a<<", "<<b<<", "<<c<<" is "<<max<<endl;
    return 0;
}
