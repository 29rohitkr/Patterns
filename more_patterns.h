#ifndef MORE_PATTERNS_H
#define MORE_PATTERNS_H
#include<iostream>
using namespace std;
// https://github.com/kunal-kushwaha/DSA-Bootcamp-Java/blob/main/assignments/09-patterns.md

void pattern_k_6(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int s=0; s<n-i-1; s++)
            cout << " ";
        for(int j=0; j<= i; j++)
            cout <<"*";
        
        cout << endl;
    }
}

void pattern_k_7(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int s=0; s<i; s++)
            cout << " ";
        for(int j=0; j< n-i; j++)
            cout <<"*";
        
        cout << endl;
    }
}

void pattern_k_10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
            cout << " ";

        for (int j = 0; j < n - i; j++)
            cout << "* ";

        cout << endl;
    }
}

void pattern_k_11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i - 1; s++)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << "* ";

        cout << endl;
    }
}

void pattern_k_12(int n)
{
    for(int i=0; i< n; i++)
    {
        for(int s=0; s<i; s++)
            cout <<" ";

        for(int j=0; j< n-i; j++)
            cout << "* ";

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n-i-1; s++)
            cout << " ";

        for (int j = 0; j <=i ; j++)
            cout << "* ";

        cout << endl;
    }
}

void pattern_k_13(int n)
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
            if( j==gap || j== gap+stars-1 || i==n-1) // Additional lines in
                cout << "*";                         // pattern7_2(n) from 
            else cout << " ";                        // strive_patterns.h
        }

        // End the current row of the pattern.
        cout << '\n';

        gap--;
        stars += 2;
    }
}

void pattern_k_14(int n)
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
            if( j==gap || j== gap+stars-1 || i==0) // Additional lines in
                cout << "*";                         // pattern8_2(n) from 
            else cout << " ";                        // strive_patterns.h
        }

        // End the current row of the pattern.
        cout << '\n';

        gap++;
        stars -= 2;
    }
}

void pattern_k_15(int n){
    int gap = n - 1, stars = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < gap; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            if (j == gap || j == gap + stars - 1 ) // Additional lines in
                cout << "*";                                    // pattern7_2(n) from
            else
                cout << " "; // strive_patterns.h
        }

        // End the current row of the pattern.
        cout << '\n';

        gap--;
        stars += 2;
    }
    n=n-1;
    gap = 0;
    stars = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < gap+1; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            if (j == gap || j == gap + stars - 1) // Additional lines in
                cout << "*";                                // pattern8_2(n) from
            else
                cout << " "; // strive_patterns.h
        }

        // End the current row of the pattern.
        cout << '\n';

        gap++;
        stars -= 2;
    }
}

// void pattern_k_16(int n){

//     for(int i=0; i<n; i++)
//     {

//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout << " ";
//         }

//         for(int j=0; j<=i; j++)
//         {
//             int left = i;
//             int right = i-j;
//             int top = i;
            
//             int val = 1 + min(min(i,j), min(j,i-j));

//             cout <<" " << val <<" ";
//         }
//         cout << endl;
//     }
// }

// binomial Coefficient (row , col)
int bc(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}
// Pascal's triangle
void pattern_k_16_2(int n)
{
    for(int i=0; i<n;i++)
    {

        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        for(int j=0; j<=i; j++)
        {
            cout << bc(i,j) << " ";
        }
        cout << endl;
    }
}

void pattern_k_16_3(int n)
{

    for (int line = 1; line <= n; line++)
    {
        for(int space=1; space<= n-line ; space++)
            cout << " ";

        int C = 1; // used to represent C(line, i)
        for (int i = 1; i <= line; i++)
        {
        
            // The first value in a line is always 1
            cout << C << " ";
            C = C * (line - i) / i;
        }
        cout << "\n";
    }
}

void pattern_k_24(int n)
{
    n = 2 * n; // 6

    // For loop 'row' in range 0 to N-2.
    for (int row = 0; row < n; row++)
    {
        // For loop 'col' in range 0 to N-1.
        for (int col = 0; col < n; col++)
        {
            // Condition for first half of the rows.
            if (row <= n / 2 && (col <= row || col >= (n - row - 1)))
            {
                if(col == row || col == (n-row-1) || col==0 || col == (n-1))
                    cout << '*';
                else cout <<" ";
            }
            // Condition for the second half of the rows.
            else if (row > n / 2 && (col == row || col == n - row - 1|| col == 0 || col == (n - 1)))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
            // cout << ' ';
        }
        // End the current row of the pattern.
        cout << '\n';
    }
}

// loop runs 10 times if n =5 , output of first line will be new line
void pattern_k_28(int n)
{
    for(int i=0; i< 2*n; i++)
    {
        int c = (i>n)? 2*n-i : i;

        int spaces = n - c; // (i>n)? n-c: n-i; OR (i>n)? i-n: n-i;

        for(int j=0; j<spaces; j++)
            cout << " ";
        
        for(int j=0; j<c; j++)
            cout << "* ";

        cout << endl;
    }
}

void pattern_k_28_2(int n)
{
    for (int i = 1; i <= 2 * n-1; i++)
    {
        int c = (i > n) ? 2 * n - i : i;

        int spaces = n - c; // (i>n)? n-c: n-i; OR (i>n)? i-n: n-i;

        for (int j = 0; j < spaces; j++)
            cout << " ";

        for (int j = 0; j < c; j++)
            cout << "* ";

        cout << endl;
    }
}


void pattern_k_30(int n){
    
    for(int i=0; i<n; i++){

        int num=1+i;

        for(int s=0; s<n-i-1; s++)
            cout << "  ";

        for(int j=0; j< 2*i+1; j++)
        {
            cout << num << " ";
            if(j>i-1)
                num++;
            else num--;
        }
        cout << endl;
    }
}

void pattern_k_30_2(int n)
{
    cout << "2nd Approach \n";
    for(int i=1; i<=n; i++)
    {
        for(int s=i; s<n; s++)
            cout << "  ";

        for(int j=i; j>=1; j--)
            cout << j << " ";

        for(int j=2; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }
}

// complex implementation see pattern_k_17_2() for easy one 
void pattern_k_17(int n){

    for (int i = 0; i < 2*n-1; i++)
    {
        int spaces = ( i<n)? n - i - 1 : i-n+1;

        int c = (i>=n)? (i-(spaces*2))*2 +1: 2*i+1;//

        int num = (i<n) ?  i+1: n-spaces;

        for (int s = 0; s < spaces; s++)
            cout << "  ";

        for (int j = 0; j < c; j++)
        {
            cout << num << " ";
            if ( j > i - 1)
                num++;
            else if (i - (spaces*2) <= j && i >= n)
                num++;
            else
                num--;
        }
        cout << endl;
    }
}

// Easy and optimal
void pattern_k_17_2(int n)
{
    for(int i=1; i<= 2*n; i++)
    {

        int c = i > n ? 2*n-i : i;

        for(int space=0; space < n-c; space++)
            cout << "  ";

        for(int j=c; j>=1; j--)
            cout << j << " ";

        for(int j=2; j<= c; j++)
            cout << j << " ";

        cout << endl; 
    }
}

void pattern_k_25(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int s=0; s<n-1-i; s++){
            cout <<" ";
        }

        for(int j=0; j<n; j++)
            if(j==0 || j== n-1 || i==0 || i==n-1)
                cout << "*";
            else cout << " ";
        
        cout << endl;
    }
}


void pattern_k_26(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern_k_23(int n){

    for(int i=0; i<n; i++){
        int spaces = n-1-i;

        for (int s = 0; s < spaces; s++)
        {
            cout << " ";
        }

        for(int j=0; j<n*n; j++)
        {
            if(j==0 || j==n-1 || j==(n-1)+i || j==i)
                cout << "* ";
            else cout << "  ";

        }
        cout << endl;
    }
}

// trapezium pattern
void pattern_k_33(int n)
{
    char ch = 'A';
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++){

            if(ch%2 != 0)
                cout << char(ch+32) << " ";
            else cout << char(ch) << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern_k_27(int n)
{
    // int left = n*(n+1)/2;
    // int right = left*2 - n+1;

    int valright = n * n + 1;
    int valleft = 1;

    for(int i=n; i>0; i--)
    {
        // int spaces = i;
        for(int s = n; s > i; s--)
            cout << "  ";

        for(int j=1; j<=i; j++)
        {
            cout << valleft++ << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << valright++ << " ";
        }

        valright = valright - (i-1)*2 -1 ;
        cout << endl;
    }
}


#endif