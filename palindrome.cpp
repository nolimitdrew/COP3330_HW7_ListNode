
/* Name: Andrew Stade
Date: 4/23/2020
Section: 2 */

#include <iostream>
#include <istream>
#include <string>
#include <cstring>
#include <cctype>
#include "stack.h"

using namespace std;

int main()
{
    Stack<char> mystack;
    int i;
    int j = 0;
    char pal[100];
    char arr[100];
    char temp[100];
    char var;
    
    cout << "\nPlease enter a string:\n";
    cout << ">";
    cin.getline (pal, sizeof(pal));
    
    for (i = 0; i < strlen(pal); i++) // change into uppercase
    {
        if ((pal[i] >= 'a') && (pal[i] <= 'z'))
        {
            arr[i] = pal[i] - 'a' + 'A';
        }
        else
        {
            arr[i] = pal[i];
        }
    }
    arr[i] = '\0';
    
    for (i = 0; i < strlen(arr); i++)  // removal of obsolete characters (spaces, periods, etc.)
    {
        if ((arr[i] >= 'A') && (arr[i] <= 'Z'))
        {
            temp[j] = arr[i];
            mystack.push(temp[j]); // push function
            j++;
        }
    }
    temp[j] = '\0';
    
    for (i = 0; i < strlen(temp); i++) // test case
    {
        mystack.pop(var); // pop function
        if (var != temp[i])
        {
            cout << "\n\"" << pal << "\" is NOT palindrome\n\n";
            return 0;
        }
    }
    
    cout << "\n\"" << pal << "\" IS a palindrome\n\n";
    
    return 0;
    
}