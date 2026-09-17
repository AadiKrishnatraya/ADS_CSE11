#include <iostream>
using namespace std;

void towerOfHanoi(int n, char fromRod, char toRod,char auxRod){
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Disk " << n << " moved from " << fromRod
         << " to " << toRod << endl;
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main(){
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}