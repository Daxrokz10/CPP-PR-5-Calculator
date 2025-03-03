// Make a calculator using udf

#include<iostream>
using namespace std;

float sum(float a,float b){
    float sum = a+b;
    return sum;
}
float sub(float a,float b){
    float sub = a-b;
    return sub;
}
float mul(float a,float b){
    float mul = a*b;
    return mul;
}
float division(float a,float b){
    float div = a/b;
    return div;
}
float mod(int a,int b){
    float mod = a%b;
    return mod;
}

int main(){
    int choice;
    float a,b;

    do{
        cout<<endl<<endl;
        cout<<"Enter 1 for +"<<endl;
        cout<<"Enter 2 for -"<<endl;
        cout<<"Enter 3 for *"<<endl;
        cout<<"Enter 4 for /"<<endl;
        cout<<"Enter 5 for %"<<endl;
        cout<<"Enter 0 for exit"<<endl<<endl;
    
        cout<<"Enter your choice: ";
        cin>>choice;
    
        switch(choice){
            case 1:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                
                cout<<"Addition of "<<a<<" & "<<b<<" is: "<<sum(a,b);
                
                break;
            case 2:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                
                cout<<"Subtraction of "<<a<<" & "<<b<<" is: "<<sub(a,b);
    
                break;
            case 3:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                
                cout<<"Product of "<<a<<" & "<<b<<" is: "<<mul(a,b);
    
                break;
            case 4:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                
                cout<<"Division of "<<a<<" & "<<b<<" is: "<<division(a,b);
    
                break;
            case 5:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the second number: ";
                cin>>b;
                
                cout<<"Modulus of "<<a<<" & "<<b<<" is: "<<mod(a,b);
    
                break;
            default:
                if(choice != 0){
                    cout<<"Invalid choice";
                }
                break;
        }
    }while(choice != 0);
}