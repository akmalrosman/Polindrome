#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
void printA(){           // Functions

    for (int i = 0; i<25;i++)
    {

        for (int j = 0; j<15; j++) // A
        {

            if (i == 0 || i == 15 || j == 0 || j == 14)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }

        cout << endl;
    }
}

void printL(){
    for (int i = 0; i<20; i++)  // L
    {

        for (int j = 0; j<20; j++)
        {

            if (i == 19 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }

        cout << endl;
    }
}

int main(){     // Main Function

    char c[100]={};
    bool b = true;
    int l=1;

        while (b){

        cout << "Enter Alphabat to Print OR Exit Press 0 : ";
        cin >> c;
        l=strlen(c);
            l--;
            for (int i=0; i<=l;i++)
        switch (c[i]){
        if (l<0)
        {
            cout<<l; //<<endl;
        }
        else {
        case 'A':
            printA();
            break;

    
       case 'L':
            printL();
            break;
      
        default:

            b = false;

            }
        } // end switch
    }

    getch;
    return 0;
}
