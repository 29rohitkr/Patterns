#ifndef STRIVER_PATTERNS_H
#define STRIVER_PATTERNS_H
#include <iostream>
using namespace std;

/*
striver link blog:- https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
striver youtube:- https://www.youtube.com/watch?v=tNm_NNSB3_w&t=1419s

*/

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
            cout << "*";

        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << "* ";
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << j << " ";
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s < n - i; s++)
            cout << "  "; // 2 spaces

        for (int j = 0; j < 2 * i + 1; j++)
            cout << "* "; // 1 star and space
        cout << endl;
    }
}
// coding Ninas
void pattern7_2(int n)
{
    int gap = n - 1, stars = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < gap; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap--;
        stars += 2;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
            cout << "  "; // 2 spaces

        for (int j = 2 * n; j > 2 * i + 1; j--)
            cout << "* "; // 1 star and space
        cout << endl;
    }
}



void pattern8_2(int n)
{ // coding Ninjas
    int gap = 0, stars = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < gap; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap++;
        stars -= 2;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {

        int s = (i >= n) ? i - n : n - i - 1;

        int c = (i >= n) ? 2 * n - (2 * s + 1) : 2 * i + 1;

        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < c; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern9_2(int n)
{ // coding Ninjas nStarDiamond

    int gap = n - 1, stars = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < gap; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap--;
        stars += 2;
    }
    gap = 0, stars = 2 * n - 1;
    for (int i = n; i < 2 * n; i++)
    {

        for (int j = 0; j < gap; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap++;
        stars -= 2;
    }
}

void pattern10(int n)
{ // easy and takes more time
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - 1; j++)
            cout << "*";
        cout << endl;
    }
}

void pattern10_2(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        int stars = (i <= n) ? i : 2 * n - i;

        for (int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern10_3(int n)
{
    int stars = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        stars++;
    }

    stars = n - 1;
    for (int i = n; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        stars--;
    }
}

void pattern11(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";

        cout << endl;
    }
}

void pattern12(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        for (int s = 0; s < spaces; s++)
            cout << "  ";

        for (int j = i; j >= 1; j--)
            cout << j << " ";

        cout << endl;

        spaces -= 2;
    }
}

void pattern12_2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        for (int s = 0; s < 2 * (n - i); s++)
            cout << "  ";

        for (int j = i; j >= 1; j--)
            cout << j << " ";

        cout << endl;
    }
}
void pattern13(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << val++ << " ";
        cout << std::endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
            cout << ch << " ";
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
            cout << ch << " ";
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
            cout << char(ch + i) << " ";
        cout << endl;
    }
}

void pattern16_2(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << ch << " ";

        ch++;
        cout << endl;
    }
}

void pattern17(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
            cout << " ";

        for (int j = 0; j < i + 1; j++)
            cout << char(65 + j);

        for (int j = i - 1; j >= 0; j--)
            cout << char(65 + j);

        cout << endl;
    }
}

void pattern17_2(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        char ch = 64;
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (j >= i + 1)
            {
                ch--;
            }
            else
                ch++;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17_3(int n){
    // Outer loop for the number of rows.
    for (int i = 0; i < n; i++)
    {

        // for printing the spaces.
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for printing the characters.
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        // for printing the spaces again after characters.
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // As soon as the letters for each iteration are printed, we move to the
        // next row and give a line break otherwise all letters
        // would get printed in 1 line.
        cout << endl;
    }
}

void pattern18(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 0; j < i + 1; j++)
            cout << ch-- << " ";

        cout << endl;
    }
}


void pattern19(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
            cout << "  ";

        for (int j = n; j > i; j--)
            cout << "*";

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i - 1) * 2; j++)
            cout << " ";

        for (int j = 0; j < i + 1; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern19_2(int n)
{
    n = 2 * n;
    // For loop 'row' in range 0 to N-1.
    for (int row = 0; row < n; row++)
    {
        // For loop 'col' in range 0 to N-1.
        for (int col = 0; col < n; col++)
        {
            // Condition for first half of the rows.
            if (row < n / 2 && (col < (n / 2 - row) || col >= (n / 2 + row)))
            {
                cout << '*';
            }
            // Condition for the second half of the rows.
            else if (row >= n / 2 && (col <= (row - n / 2) || col >= (n - row + n / 2 - 1)))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
            cout << ' ';
        }
        // End the current row of the pattern.
        cout << '\n';
    }
}

void pattern20(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i - 1) * 2; j++)
            cout << " ";

        for (int j = 0; j < i + 1; j++)
            cout << "*";

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < i + 1; j++)
            cout << "  ";

        for (int j = n - 1; j > i; j--)
            cout << "*";

        cout << endl;
    }
}


// print rows first then column cell by cell **
void pattern20_2(int n)
{
    n = 2 * n; // 6

    // For loop 'row' in range 0 to N-2.
    for (int row = 0; row < n-1; row++)
    {
        // For loop 'col' in range 0 to N-1.
        for (int col = 0; col < n; col++)
        {
            // Condition for first half of the rows.
            if (row < n / 2 && (col <= row || col >= (n - row - 1)))
            {
                cout << '*';
            }
            // Condition for the second half of the rows.
            else if (row >= n / 2 && (col < (n - row - 1) || col > row))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
            cout << ' ';
        }
        // End the current row of the pattern.
        cout << '\n';
    }
}




void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }
}

void pattern22(int n){

    for(int i=0; i<n*2-1; i++)
    {
        for(int j=0; j<n*2-1;j++)
        {
            int left = j;
            int top =i;
            int right = (2*n-1-1)-j;
            int bottom = (2*n-1-1)-i;

            int val = min( min(left, right), min(top, bottom));
            cout << n-val;
        }
        cout <<endl;
    }
}

void pattern22_2(int n)
{
    int k = 2 * n - 1;

    // Calculating the values in each cell and printing.
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int x = abs(i - n + 1);
            int y = abs(j - n + 1);
            int currCell = (int)max(x, y) + 1;
            cout << currCell;
        }
        cout << '\n';
    }
}


#endif
