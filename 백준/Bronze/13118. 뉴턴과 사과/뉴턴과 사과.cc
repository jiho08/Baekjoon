#include <iostream>
using namespace std;
 
int main(){
    int p[4];
    int x,y,r;
    int ret = 0;
    
    for(int i = 0; i < 4; i++)
        cin >> p[i];
    
    cin >> x >> y >> r;
    
    for(int i = 0; i < 4; i++){
        if(p[i] == x)
            ret = i+1;
    }
    
    cout << ret;
 
}