#include<iostream>

#include<algorithm>

#define CLOCKS_PER_SEC ((clock_t)1000)

using namespace std;
int main(){
    cout << "hello world!" <<endl;
    int n=0;
    clock_t startTime,endTime;
    startTime = clock();
    for (long int i = 0; i < 10000; i++)
        n += i;
    endTime = clock();
    cout << n << " ~~~~ " << (double)(endTime-startTime) / CLOCKS_PER_SEC << endl;
}