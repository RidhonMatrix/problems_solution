
// problem Link : https://leetcode.com/problems/super-pow/

class Solution
{
public:
    long long modularExpo(long long a, long long n, long long m)
    {
        long long res = 1;
        while (n)
        {
            if (n % 2)
            {
                res = (res * a) % m;
                n--;
            }
            else
            {
                a = (a * a) % m;
                n /= 2;
            }
        }
        return res;
    }
    int superPow(int a, vector<int> &b)
    {
        long long x = 0;
        for (auto it : b)
        {
            x = (x * 10 + it) % 1140;
        }
        return modularExpo(a, x, 1337);
    }
};