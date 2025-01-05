#include<bits/stdc++.h>
using namespace std;
//Appraoch : Brute Force
class Solution {
public:
    int romanToInt(string s) {
        int add = 0,c=0; 
        //add is for storing sum
        //c is for skipping next index/character
        char ch; 
        // For storing next index/character
        for(int i=0;i<s.length();i++)
        {
          ch = s[i+1];
          if ( c == 1)
          {
            c=0;
            continue; // Skipping next index/character
          }
          if ( s[i] == 'I')
          {
            if ( ch == 'V')
            {
              add += 4;
              c=1;  //setting c=1 to skip next index/character
            }
            else if ( ch == 'X')
            {
              add += 9;
              c=1;
            }
            else
              add += 1;
          }
          else if ( s[i] == 'V')
          {
            add += 5;
          }
          else if ( s[i] == 'X')
          {
            if ( ch == 'L')
            {
              add += 40;
              c=1;
            }
            else if ( ch == 'C')
            {
              add += 90;
              c=1;
            }
            else
              add += 10;
          }
          else if ( s[i] == 'L')
            add += 50;
          else if ( s[i] == 'C')
          {
            if ( ch == 'D')
            {
              add += 400;
              c=1;
            }
            else if ( ch == 'M')
            {
              add += 900;
              c=1;
            }
            else
              add += 100;
          }
          else if ( s[i] == 'D')
            add += 500;
          else if ( s[i] == 'M')
              add += 1000;           
        }
        return add; //returning sum of all integers correspond to roman characters
    }  
};
int main()
{
    Solution s; //declaring object
    string s1; //declaring string
    cin >> s1; //taking input
    cout << "Roman : " << s1 << endl << "Integer : "<< s.romanToInt(s1); //invoking function
}