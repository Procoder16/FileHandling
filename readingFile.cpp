#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream f("new.txt");
    char ch;

    while(!f.eof()){
        ch = f.get();
        cout<<ch<<"-";
    }

    f.close();

    return 0;
}