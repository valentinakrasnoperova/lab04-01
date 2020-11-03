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
        P *=(K*1.0/i +i*1.0/N);
        i++;
    }
    cout << P << endl;
    P = 1;
    i = K;
    do {
        P *=(K*1.0/i +i*1.0/N);
        i++;
    } while (i <= N);
    cout << P << endl;
    P = 1;
    for (i=K; i <= N; i++)
    {
        P *=(K*1.0/i +i*1.0/N);
    }
    cout << P << endl;
    P = 1;
    for (i=N; i >= K; i--)
    {
        P *=(K*1.0/i +i*1.0/N);
    }
    cout << P << endl;
    return 0;
}