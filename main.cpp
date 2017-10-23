/** Factorial calculator
 *
 * Martina Nunvarova
 * 25/9/2017
 */
//includes
#include <iostream>
#include <iomanip>
//define namespace
using namespace std;

int main()
{
    //declare variables: NumbeR
    int64_t nr;

    //prompr user
    cout << "Factorial Calculator" << endl <<std::setfill('-')<<setw(60)<<""<<endl<<"Enter a number: ";

    //read in the numerical input
    cin >>nr;

    //print the first part of prompt ie: "17! = "
    cout <<nr<<"! = ";

    //ensure 0! =1;
    nr=(!nr)?1:nr;

    //calculate the factorial - for declares a temporary loop variable i;
    for (int i=nr-1;i>1;i--)
        nr*=i;

    //display the result, flush the buffer
    cout << nr << endl;

    //return to OS, no errors.
    return 0;
}
