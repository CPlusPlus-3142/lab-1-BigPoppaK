// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x)
{
    int divCount = 0;
    if(x <= 1){
        return false;
    }
    
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            divCount++;
        }

        if(divCount > 2){
            return false;
        }
    }
    return true;
}    


int closestPrime(int x)
{
    int closestNum = x++;
    if(isPrime(closestNum)){
        return closestNum;
    }
    else{
        closestNum++;
    }   
}
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/
/*** 
int main(){
    int num1;
    int num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1;
    std::cin >> num2;

    if(isPrime(num1)){
        std::cout << num1 + "is prime.";
    }
    else{
        std::cout << num1 + "is not prime. Closest prime is " + closestPrime(num1);
    }

    if(isPrime(num2)){
        std::cout << num2 + "is prime." << endl;
    }
    else{
        std::cout << num2 + " is not prime. Closest prime is " + closestPrime(num2) << endl;
    }
    
    return 0;          
}
***/
