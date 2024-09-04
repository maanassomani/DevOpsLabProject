#include<iostream>
using namespace std;
double add(double a , double b)
{
    return a+b;
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

double multi(double a, double b) {
    return a*b;
}

double divide(double a, double b) {
    return a/b;
}

int main(){

    int flag=1;

    while(flag){
        int op;
        double n1; double n2;
        cout<<"Enter n1: ";
        cin>>n1;
        cout<<"Enter n2: ";
        cin>>n2;
        
        cout<<"1. Add"<<endl;
        cout<<"2. Subtract"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Add"<<endl;
        cout<<"Enter the operation to be performed: ";
        cin>>op;
        

        switch (op)
        {
        case 1:
            cout<<"n1 + n2 = ";
            cout << add(n1,n2) << "\n";
            break;
        case 2:
            cout<<"n1 - n2 = ";
            cout << subtract(n1,n2) << "\n";
            break;
        case 3:
            cout<<"n1 * n2 = ";
            cout << multi(n1,n2) << "\n";
            break;
        case 4:
            cout<<"n1 / n2 = ";
            cout << divide(n1,n2) << "\n";
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }

        char repl;
        cout<<"Continue? (y/n)";
        cin>>repl;
        if(repl=='n'){
            flag =0;
        }
        
    }

    return 0;
}