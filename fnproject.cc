#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   int tposition = 1; // starting positions
   int hposition = 1;
   int current;
   srand(time(NULL));
// similar message to Bang! Off they go!
   cout << "Race starts people\n" << endl; // print message
   while (true)
   {
       // move the tortoise
       current = (rand() % 10) + 1;
       if (current <= 5) // fast plod
       {
           cout << "Tortoise: Fast Plod" << endl; // print message
           tposition = tposition + 3;
       }
       else if (current <= 7) // slip
       {
           cout << "Tortoise: Slip" << endl; // print message
           tposition = tposition - 6;
       }
       else // slow plod
       {
           cout << "Tortoise: Slow Plod" << endl; // print message
           tposition = tposition + 1;
       }
       // move the hare
       current = (rand() % 10) + 1;
       if (current <= 2) // sleep
       {
           cout << "Hare: Sleep" << endl; // print message
           hposition = hposition + 0;
       }
       else if (current <= 4) // big hop
       {
           cout << "Hare: Big Hop" << endl; // print message
           hposition = hposition + 9;
       }
       else if (current <= 5) // big slip
       {
           cout << "Hare: Big Slip" << endl; // print message
           hposition = hposition - 12;
       }
       else if (current <= 8) // small hop
       {
           cout << "Hare: Small Hop" << endl; // print message
           hposition = hposition + 1;
       }
       else // small slip
       {
           cout << "Hare: Small Slip" << endl; // print message
           hposition = hposition - 2;
       }
       // check outbound position
       if (tposition < 1)
       {
           tposition = 1;
       }
       else if (tposition > 70)
       {
           tposition = 70;
       }
       if (hposition < 1)
       {
           hposition = 1;
       }
       else if (hposition > 70)
       {
           hposition = 70;
       }
       // print the position
       // cout << "hare: " << hposition << endl;
       // cout << "tortoise: " << tposition << endl;
       for (int i = 1; i <= 70; i++)
       {
           if (i == tposition) // set position
           {
               if (tposition == hposition)
               {
                   cout << "BUMP!" << " (" << tposition << ")" << endl; // check position
               }
               else
               {
                   cout << "T" << " (" << tposition << ")" << endl; // check position
               }
               break;
           }
           else
           {
               cout << " ";
           }
       }
       for (int j = 1; j <= 70; j++) // check position
       {
           if (j == hposition)
           {
               if (hposition == tposition)
               {
                   cout << "BUMP!" << " (" << hposition << ")" << endl; //print message
               }
               else
               {
                   cout << "H" << " (" << hposition << ")" << endl;
               }
               break;
           }
           else
           {
               cout << " ";
           }
       }
       // check winner
       if ((tposition == 70) && (hposition == 70))
       {
           cout << "\nTIE!" << endl; //print message
           break;
       }
       else if (hposition == 70)
       {
           cout << "\nHARE WON!" << endl; //print message
           break;
       }
       else if (tposition == 70)
       {
           cout << "\nTORTOISE WON!" << endl; //print message
           break;
       }
       cout << endl;
   }
   return 0;
}
