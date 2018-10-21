
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // assigning value to string s
    cout << "Enter sentence: ";
    string s;
    getline (cin, s);


        // Vector of string to save tokens
        vector <string> tokens;

        // stringstream class check1
        stringstream check1(s);

        string intermediate;

        // Tokenizing w.r.t. space ' '
        while(getline(check1, intermediate, ' '))
        {
            tokens.push_back(intermediate);
        }
 cout << "This is the main clause: ";
    int i = 0;
      while ((tokens [i]!="even")&&(tokens [i]!="if")&&(tokens [i]!="although")&&(tokens [i]!="that")&&(tokens [i]!="when")&&(tokens [i]!="where")&&(tokens [i]!="after")&&(tokens [i]!="since")&&(tokens [i]!="though")&&(tokens [i]!="until")&&(tokens [i]!="because")&&(tokens [i]!="wherever")&&(tokens [i]!="unless")&&(tokens [i]!="whether")&&(tokens [i]!="whenever")&&(tokens [i]!="wherever")&&(tokens [i]!="whereas")&&(tokens [i]!="until")&&(tokens [i]!="if")&&(tokens [i]!="before")&&(tokens [i]!="as")&&(tokens [i]!="although")&&(tokens [i]!="till"))
      {
        cout << tokens[i];
        cout<< " ";
        i++;
      }

    }


