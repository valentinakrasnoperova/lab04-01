#include <iostream>

using namespace std;
int main()
{
    int K, N, i;
    double P;
    cout << "K = "; cin >> K;
    cout << "N = "; cin >> N;
    P = 1;
    i = K;
    while (i <= N)
    {
        P *=(K/i +i/N);
        i++;
    }
    cout << P << endl;
    P = 1;
    i = K;
    do {
        P *=(K/i +i/N);
        i++;
    } while (i <= N);
    cout << P << endl;
    P = 1;
    for (i=K; i <= N; i++)
    {
        P *=(K/i +i/N);
    }
    cout << P << endl;
    P = 1;
    for (i=N; i >= K; i--)
    {
        P *=(K/i +i/N);
    }
    cout << P << endl;
    return 0;
}