
// problem statement //

// Given an array of N integers where Ai denotes the currency of note that the i-th person has. The
//possible currencies are 5, 10 and 20. All the N people are standing in a queue waiting to buy an ice-
//cream from X which costs Rs 5. Initially, X has an initial balance of 0. Check if X will be able to
// provide change to every people who are waiting to buy an ice-cream.

// ***********************************************************************************************//

#include <iostream>
using namespace std;

int changable(int notes[], int n)
{

    int fivenotes = 0, tennotes = 0;

    for(int i =0; i<n;i++)
    {

        if(notes[i] == 5)
        fivenotes++;

        else if(notes[i] = 10)
         {
             if(fivenotes>0)
             {
               fivenotes--;
               tennotes++;
             }
            else
             return 0;

         }

        else{
           if (fivenotes > 0 && tennotes > 0) {
                fivenotes--;
                tennotes--;
            }

             else if (fivenotes >= 3) {
                fivenotes -= 3;
            }
            else
                return 0;

        }

    }



}

int main() {
	int a[] = { 5, 5, 10, 10, 10 };
    int n = sizeof(a) / sizeof(a[0]);


    if (changable(a, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
	return 0;
}
