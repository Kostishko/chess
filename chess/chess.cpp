// chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#define BLOCK (char)178

int cellWidth, cellHeight, widthAdj, heightAdj;

int main()
{

    cellHeight = 4;
    cellWidth = 5;
    
    if (cellWidth % 2 == 0)
    {
        widthAdj = 1;
    }
    else
    {
        widthAdj = 0;
    }

    if (cellHeight % 2 == 0)
    {
        heightAdj = 0;
    }
    else
    {
        heightAdj = 1;
    }

    cout << "Chess picture!\n";
    cout << "Cell width is " + to_string(cellWidth);
    cout<< " \n";
    cout << "Cell height is " + to_string(cellHeight);
    cout << " \n";
    

    for (int i = 0; i < cellHeight * 8 +1; i++)
    {
        for (int j = 0; j < cellWidth  * 8 +1; j++)
        {
            if (j % cellWidth == 0 || i % cellHeight == 0)
            {
                cout << BLOCK;
                continue;
            }

            if (j % cellWidth == cellWidth/2)
            {   
                if (i == cellHeight/2 + heightAdj || i == cellHeight*2 - cellHeight/2)
                {
                    cout << "B";
                    continue;                    
                }

                if (i == cellHeight * 7 - cellHeight / 2 || i == cellHeight * 8 - cellHeight / 2)
                {
                    cout << "W";
                    continue;

                }
            }

            if (j % cellWidth == cellWidth/2+1 &&
                (i==cellHeight*2-cellHeight/2 || i == cellHeight * 7 - cellHeight / 2))
            {
                cout << "P";
                continue;
            }

            if (i == cellHeight - cellHeight / 2  ||
                i == cellHeight * 8 - cellHeight / 2)
            {
                if (j == cellWidth / 2 +1 ||
                    j == cellWidth * 8 - cellWidth / 2 + widthAdj)
                {
                    cout << "R";
                    continue;
                }
                if (j == cellWidth * 2 - cellWidth / 2 + widthAdj || 
                    j == cellWidth * 7 - cellWidth / 2 + widthAdj)
                {
                    cout << "H";
                    continue;
                }
                if (j == cellWidth * 3 - cellWidth / 2 + widthAdj || 
                    j == cellWidth * 6 - cellWidth / 2 + widthAdj)
                {
                    cout << "B";
                    continue;
                }
            }

            if ((i == cellHeight / 2 + heightAdj && j == cellWidth * 4 - cellWidth / 2 + widthAdj) ||
                (i == cellHeight * 8 - cellHeight / 2 && j == cellWidth * 5 - cellWidth / 2 + widthAdj))
            {
                cout << "Q";
                continue;
            }

            if ((i == cellHeight / 2 + heightAdj && j == cellWidth * 5 - cellWidth / 2 + widthAdj) ||
                (i == cellHeight * 8 - cellHeight / 2 && j == cellWidth * 4 - cellWidth / 2 + widthAdj))
            {
                cout << "K";
                continue;
            }
            

            cout << " ";
          
        }
        cout << "\n";

    }
}
