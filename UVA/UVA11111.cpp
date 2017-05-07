#include<iostream>
#include<cstdio>
#include<stack>
#include<cmath>
#include<string>
#include <sstream>

using namespace std;

const int MAX = 1000005;

char str[MAX];
stack<int>brack;
stack<int>cap;

int main() {
    int n,num,i,a;
    // cin>>n;
    while(gets(str)) {

        while(!brack.empty()) brack.pop();
        while(!cap.empty()) cap.pop();

        bool flg = true;
        stringstream ss(str);
        while(ss >> num) {
            if(num<0) {
                num = abs(num);
                brack.push(num);

                if(cap.empty()) {
                    cap.push(abs(num));
                }
                else {
                    a = cap.top() - num;
                    if(a > 0) {
                        cap.pop();
                        cap.push(a);
                        cap.push(brack.top());
                    }
                    else {
                        flg = false;
                        break;
                    }

                }
            }

            else {
                if(!brack.empty() && num==brack.top()) {
                    cap.pop();
                    brack.pop();
                }
                else {
                    flg = false;
                    break;
                }
            }
        }
        if( !brack.empty() ) {
            flg = false;
        }

        if(flg == true) {
            cout<<":-) Matrioshka!\n";
        }
        else {
            cout<<":-( Try again.\n";
        }
    }

    return 0;
}
