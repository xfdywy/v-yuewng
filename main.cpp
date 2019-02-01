#include<iostream>

#include<algorithm>

#define CLOCKS_PER_SEC ((clock_t)1000)

using namespace std;
int main(){
    cout << "hello world!" <<endl;
    int n=0;
    clock_t startTime,endTime;
    startTime = clock();
    for (int i = 0; i < 1000000000; i++)
        n += i;
    endTime = clock();
    cout << n << " ~~~~ " << endTime-startTime << endl;
}