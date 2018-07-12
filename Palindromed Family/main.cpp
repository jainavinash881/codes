#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool isPalindrome(string str)
{
string reverse_str = str;

reverse(reverse_str.begin(),reverse_str.end());
if (str == reverse_str)
        return true;
    return false;

}

void printPalindromeFamily(string str)
{

    if (isPalindrome(str)) {
        cout << "PARENT Palindrome" << endl;
        return;
    }

    string oddString = "";
    string evenString = "";

    int n = str.length();


    for (int i = 0; i < n; i += 2)
        oddString += str[i];


    for (int i = 1; i < n; i += 2)
        evenString += str[i];


    bool isEvenPalindrome = isPalindrome(evenString);
    bool isOddPalindrome = isPalindrome(oddString);


    if (isEvenPalindrome && isOddPalindrome)
        cout << "TWIN Palindrome" << endl;


    else if (isEvenPalindrome)
        cout << "EVEN Palindrome" << endl;


    else if (isOddPalindrome)
        cout << "ODD Palindrome" << endl;


    else
        cout << "Alien Palindrome" << endl;
}




int main()
{
    string a = "ana";
    printPalindromeFamily(a);

    a = "dadbdadb";
    printPalindromeFamily(a);

    a="aababba";
    printPalindromeFamily(a);

    return 0;
}
