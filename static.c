#include<stdio.h>
void func()
{
    //A static variable in C retains its value across multiple  
    //function calls and is initialized only once.
    static int a = 1;
    a = a+ 1;
    printf("The value of a is %d",a);
}
int main()
{
    func(); //The value return will be 2
    func(); //in this 2nd call, a value is updated
    // as 2 previously and will maintain it
    // a=2. a=2+1 =3. It will return 3. 
    func(); //Here a = 3, and return 4.
}