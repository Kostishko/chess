// chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define BLOCK (char)178

int cellWidth, cellHeight;



int main()
{

    cellHeight = 4;
    cellWidth = 5;

    std::cout << "Hello World!\n";

    

    for (int i = 0; i < cellHeight * 8 +1; i++)
    {
        for (int j = 0; j < cellWidth  * 8 +1; j++)
        {
            if (j % cellWidth == 0 || i % cellHeight == 0)
            {
                cout << BLOCK;
                continue;
            }

            if (j % 5 == 2)
            {   
                if (i == cellHeight/2 || i == cellHeight*2 - cellHeight/2)
                {
                    cout << "B";
                    continue;
                    
                }
            }
            


            cout << " ";
                
            
          
        }
        cout << "\n";

    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
