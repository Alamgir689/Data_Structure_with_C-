/*
Problem Statement

You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N and S.
Second line of each test case will contain the array A.
Constraints

1 <= T <= 100
1 <= N <= 100
1 <= S <= 1000
1 <= A[i] <= 1000 Where 0 <= i < N
Output Format

Output "YES" if it is possible, otherwise output "NO".
Sample Input 0

5
5 10
1 2 3 4 5
5 6
4 2 3 5 4
3 6
2 2 2
4 4
2 8 1 5
1 3
1
Sample Output 0

YES
NO
YES
NO
NO
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s;
        
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cin>>s;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if (ar[k]+ar[j]+ar[i]==s)
                    {
                        flag=1;
                    }
                }
            }
        }

        if(flag==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }




    }

return 0;
}
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; ++t) {
//         int N, S;
//         cin >> N >> S;

//         int A[100];  
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }
//         sort(A, A + N);
//         bool found = false;
//         for (int i = 0; i < N - 2; ++i) {
//             int left = i + 1;
//             int right = N - 1;

//             while (left < right) {
//                 int currentSum = A[i] + A[left] + A[right];
//                 if (currentSum == S) {
//                     found = true;
//                     break;
//                 } else if (currentSum < S) {
//                     ++left;
//                 } else {
//                     --right;
//                 }
//             }
//             if (found) {
//                 break;
//             }
//         }
//         cout << (found ? "YES" : "NO") << endl;
//     }
// }