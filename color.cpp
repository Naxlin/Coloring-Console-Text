/***********************************************************************
* Program:
*    Assignment 00, Coloring Text
*    Brother Name, CS124
* Author:
*    Your Name
* Summary: 
*    This program shows how to color output text.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
   char txtMod[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };
   char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };
   char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
   char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
   char green[] = { 0x1b, '[', '1', ';', '3', '2', 'm', 0 };
   char yellow[] = { 0x1b, '[', '1', ';', '3', '3', 'm', 0 };
   char magneta[] = { 0x1b, '[', '1', ';', '3', '5', 'm', 0 };
   char cyan[] = { 0x1b, '[', '1', ';', '3', '6', 'm', 0 };

   cout << "\nThis program will show you how to print your text in "
        << red << 'c' << blue << 'o'<< green << 'l' << yellow << 'o'
        << magneta << 'r' << cyan << 's' << normal << '.';

   red[2] = '5';
   blue[2] = '5';
   green[2] = '5';
   yellow[2] = '5';
   magneta[2] = '5';
   cyan[2] = '5';
   
   cout << "\n\nSetting up a variable:\n"
        << "\tchar red[] = {0x1b, '[', '1', ';', '3', '1', 'm', 0};\n"
        << "\nLooks "
        << red << 'c' << blue << 'o' << green << 'n' << yellow << 'f'
        << magneta << 'u' << cyan << 's' << red << 'i' << blue << 'n'
        << green << 'g' << normal << " right? That is an ";

   magneta[2] = '1';
   
   cout << magneta << "ANSI escape code.\n" << normal
        << "Let's break it down:\n";

   red[2] = '1';
   blue[2] = '1';
   green[2] = '1';
   yellow[2] = '1';
   cyan[2] = '1';
   
   cout << "\tThe 'char color[] = {};' is an array declaration.\n"
        << "\tIndex 0 '0x1b' is a code for the " << green << "ESC" << normal
        << " key.\n"
        << "\tIgnore indexes " << red << "1, 3, 6, & 7 " << normal
        << "in this example they don't change.\n"
        << "\tSo, now to change colors. Indexes " << cyan << "4 & 5"
        << normal << " are 2-digit numbers\n"
        << "\trepresenting the "
        << red << 'c' << blue << 'o'<< green << 'l' << yellow << 'o'
        << magneta << 'r' << normal << " codes.\n"
        << "\t\t31 = " << red << "red\n" << normal
        << "\t\t32 = " << green << "green\n" << normal
        << "\t\t33 = " << yellow << "yellow\n" << normal
        << "\t\t34 = " << blue << "blue\n" << normal
        << "\t\t35 = " << magneta << "magneta\n" << normal
        << "\t\t36 = " << cyan << "cyan\n" << normal;

   blue[2] = '9';
   green[2] = '3';
   magneta[2] = '4';
   cyan[2] = '2';
   
   cout << "\tWhile index " << yellow << "2 " << normal << "changes graphics.\n";

   yellow[2] = '5';

   cout << "\tCodes for some of the options:\n"
        << "\t\t0 = reset - all attributes off\n"
        << "\t\t1 = " << red << "bold\n" << normal
        << "\t\t9 = " << blue << "crossed-out\n" << normal
        << "\t\t3 = " << green << "italic\n" << normal
        << "\t\t5 = " << yellow << "slow blink\n" << normal
        << "\t\t4 = " << magneta << "underline\n" << normal
        << "\t\t2 = " << cyan << "faint\n" << normal;

   red[2] = '1';
   blue[2] = '1';
   green[2] = '1';
   yellow[2] = '1';
   magneta[2] = '1';
   cyan[2] = '1';
   
   cout << "\nOkay, so we know how to make " << cyan << "variables " << normal
        << "now how do we use them?\n"
        << "Here's two " << cyan << "variables" << normal << ":\n"
        << green << "\tchar " << yellow << "normal" << normal << "[] = "
        << "{ 0x1b, '[', '0', ';', '3', '9', 'm', 0 };\n"
        << green <<  "\tchar " << red << " red" << normal << "[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };\n"
        << "Here's how to use them:\n"
        << green << "\tcout" << normal << " << " << red << "red " << normal
        << "<< \"This will be red.\" << " << yellow << "normal" << normal << ";\n";
   
   cout << red << "\tThis will be red.\n" << normal;

   cout << "\nOne last thing to be aware of. If your graphic changing code is\n"
        << "a 2-digit number, your array will be bigger and the indexes will change.\n";

   yellow[2] = '4';
   cyan[2] = '5';
   red[2] = '1';
   
   cout << red << "Those are the basics, now go " << blue << "exp" << yellow
        << "er" << magneta << 'i' << cyan << "ment" << red << "!\n" << normal;
}
