#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here

//dunction to check palindrome
bool isPalindrome(string s)
{
    int n = s.size();
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-1-i])

            return false;
    }
    return true;
}

//function to check prime number    
bool isPrime(int n)
{
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

// function to store digits of a integer in a vector
void storeDigits(int n, vector<int> &v)
{
    int temp;
    while(n > 0)
    {
        temp = n % 10;
        v.push_back(temp);
        n = n / 10;
    }
}

// function to search an integer in a vector using binary search
int search(vector<int> &v, int n)
{
    int low = 0, high = v.size() - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(v[mid] == n)
            return mid;

        if(v[mid] < n)
            low = mid + 1;
        else

            high = mid - 1; 
    }
    return -1;
}

// function to convert a string into integer
int convert(string s)
{
    int n = 0;
    for(int i = 0; i < s.size(); i++)
    {
        n = n * 10 + s[i] - '0';
    }
    return n;
}

// function to convert string into integer and then reverse it and then subtract 10 from it
int reverse(string s)
{
    int n = convert(s);
    string t = "";
    while(n > 0)
    {
        t = string(n % 10) + t;
        n = n / 10;
    }
    return convert(t);
}

// function to count no of occurences of a digit in an integer

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string str = "1234";
    int n = convert(str);
    cout<<n-4<<endl;
    // solve();
}