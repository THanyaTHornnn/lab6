#include<iostream>
using namespace std;

int main(){
    int i, even = 0 , odd = 0;
    cout << "Enter an integer: ";
    cin >> i;
    while(i != 0)
    {  cout << "Enter an integer: ";
       if(i%2 == 0)
       {
           even++;
       }else{
           odd++;
       }
       cin >> i;
    }
    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
