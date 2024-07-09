#include <stdio.h>
//These are comments.Comments in c start with "//".Used to write notes.It is not a code.
//This is standard input and output header
//This is header in which all these, int, char, float ,printf keywords are being stored
//All c program should cointain this main() function in which the main source code is written
int main(){


//integer (whole number [0,1,2,3,4,5,6,7,8,9....])
//declaring or declaration
int c;
//intializing or initialization
int a=1,b=2;

//add two int variable a,b and store the value in c
c=a+b;

//print 
printf("%d + %d = %d\n",a,b,c);
// %d stands for decimal. 
//As %d is mentioned 3 times and prints the value in the order mentioned after "".


//float [0,0.1,0.2,0.3...]
//declaring or declaration
float z;
//intializing or initialization
float x=0.1,y=9;
//float can contain integer, but an integer can't be a float

//add two float variable x,y and store the value in z
z=x+y;

//print 
printf("%.3f + %.4f = %.2f\n",x,y,z);
// %f stands for float. The ".2f" means two values after the decimal point.
// similarly for ".3f" ,it shows three values after decimal point.
//As %f is mentioned 3 times and prints the value in the order mentioned after "".


//character (a single word, also can store multiple characyers via array)
//declaring or declaration
char e;
//intializing or initialization
char hi='a';
char str[]="karthikaa";

//print those characters
printf("character is %c and the string is %s\n",hi,str);

// wondering what "\n"? it is for new line 
//Once \n is given the next line will start from new line

}
//Here the main() finction is closed. hence program ends here 