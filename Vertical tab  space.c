#include<stdio.h>
int main()
{
    printf("Name\vRoll.no");
    return 0;
}

/*Explanation
The string "Name\vRoll.no" contains a vertical tab (\v) escape sequence.

Escape	Meaning
\v	Vertical Tab — moves the cursor down one line (and usually aligns to the next tab stop)
Name is printed first.
\v moves the cursor vertically down (like pressing a tab key but vertically).
Roll.no is printed after the vertical movement.*/