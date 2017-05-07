#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

    while(true)
    {
        int num1, num2;
        cin >> num1>> num2;
        if (num1 == 0 && num2 == 0) break;
        int carry=0, ncarries =0;
        while( num1 > 0 || num2 > 0)
        {
           int mod1=num1%10;
            int mod2=num2%10;
            carry =  (mod1+ mod2 + carry)/10;
            num1/= 10;
            num2 /= 10;
            if (carry) ncarries++;
        }

        if (ncarries == 0)
        cout << "No carry operation.\n";
        else{
            cout << ncarries << " carry operation";
            if(ncarries>1){
                cout<<"s.\n";
            }
            else {
                cout<<".\n";
            }
        }
    }
}
