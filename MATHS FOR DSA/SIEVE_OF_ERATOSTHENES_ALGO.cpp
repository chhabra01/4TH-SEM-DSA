// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;

// //! THIS ALGORITHM FINDS A PRIME NUMBER AND THEN MARKS THE ELEMENTS FALSE WHICH COMES IN THE TABLE OF THAT PRIME NUMBER :
// int countPrimes(int n)
// {
//     int count = 0;
//     vector<bool> prime(n + 1, true);
//     prime[0] = prime[1] = false;
//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
//             count++;
//             for (int j = 2 * i; j < n; j = j + i)
//             {
//                 prime[j] = 0;
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cout << "Enter the range : ";
//     cin >> n;
//     int temp = countPrimes(n);
//     cout<<temp;
// }

//! SEGMENTED SIEVE : IT ONLY MARKS FALSE OF THE NUMBER WHICH ARE FOUND PRIME :

#include <bits/stdc++.h>
using namespace std;
 
void simpleSieve(int limit)
{
    // Create a boolean array "mark[0..limit-1]" and
    // initialize all entries of it as true. A value
    // in mark[p] will finally be false if 'p' is Not
    // a prime, else true.
    bool mark[limit];
    for(int i = 0; i<limit; i++) {
      mark[i] = true;
    }
   
    // One by one traverse all numbers so that their
    // multiples can be marked as composite.
    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }
   
    // Print all prime numbers and store them in prime
    for (int p=2; p<limit; p++)
        if (mark[p] == true)
            cout << p << "  ";
}
int main()
{
    int n;
    cout << "Enter the range : ";
    cin >> n;
    simpleSieve(n);
}