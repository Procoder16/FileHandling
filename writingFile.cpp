#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){

    string info;

    cout<<"ENTER THE INFORMATION:";
    cin>>info;

    ofstream f("new.txt");

    for(int i = 0; i < info.length(); i++){
        char ch = info[i];
        f.put(ch);
    }

    f.close();

    return 0;
}