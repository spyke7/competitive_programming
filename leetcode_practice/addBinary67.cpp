#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    string a = "11";
    string b = "1";
    // string b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    // int aNo = 0;
    // int bNo = 0;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     aNo += ((a[i] - '0') * pow(2, a.size() - i - 1));
    // }
    // for (int i = 0; i < b.size(); i++)
    // {
    //     bNo += ((b[i] - '0') * pow(2, b.size() - i - 1));
    // }
    // int c = aNo + bNo;
    // string res = "";
    // if (c == 0)
    // {
    //     res = "0";
    // }
    // else
    // {

    //     while (c != 0)
    //     {
    //         char p = c % 2 + '0';
    //         res += p;
    //         c = c / 2;
    //     }
    // }

    string res = "";
    
    int i = a.size() - 1;
    int j = b.size() - 1;
    int c = 0;
    
    while (i >= 0 || j >= 0 || c)
    {
        int sum = c; 
        
        if (i >= 0)
        sum += a[i--] - '0'; 
        if (j >= 0)
        sum += b[j--] - '0'; 
        
        res += (sum % 2) + '0';
        
        c = sum / 2;
    }
    reverse(res.begin(), res.end());

    cout << res << endl;

    return 0;
}