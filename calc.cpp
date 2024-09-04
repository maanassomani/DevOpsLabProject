#include<iostream>
using namespace std;
double add(double a , double b)
{
    return a  +b;
}

double subtract(double a, double b)
{
    if(a >= b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
int main(){
    return 0;
}