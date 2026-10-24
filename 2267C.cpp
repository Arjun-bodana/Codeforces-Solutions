#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n, x;
        // cin >> n >> x;
        // int arr[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        //     if (std::__gcd(arr[i], x) == 1)
        //     {
        //         cout << "0" << endl;
        //     }
        //     else
        //     {
        //         int gcd = std::__gcd(arr[i], x);
        //         if (gcd > INT_MIN)
        //         {
        //             int g = gcd;
        //         }
        //     }
        // }
        int n, x;
        cin >> n >> x;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = 0;
        int temp = x;

        for (int p = 2; p * p <= temp; p++) {
            if (temp % p == 0) {
                long long sum = 0;

                for (int i = 0; i < n; i++) {
                    if (arr[i] % p == 0) {
                        sum += arr[i];
                    }
                }

                if (sum > ans) {
                    ans = sum;
                }

                while (temp % p == 0) {
                    temp = temp / p;
                }
            }
        }

        if (temp > 1) {
            long long sum = 0;

            for (int i = 0; i < n; i++) {
                if (arr[i] % temp == 0) {
                    sum += arr[i];
                }
            }

            if (sum > ans) {
                ans = sum;
            }
        }

        cout << ans << endl;
    }
    return 0;
}