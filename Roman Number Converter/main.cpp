
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    long int num;
    int tens, hundreads, thousands, ten_k;

    string result;

    cout << "Enter a decimal number"<< endl;
    cin >> num;
    tens = num % 10;
    hundreads = (int) num / 10;
    thousands = (int) num / 100;
    ten_k = (int)num /1000;
        if(ten_k < 4){
            for(int i = 0; i < ten_k; i++){
                 result = result + 'M';
                }
        }
        else if(ten_k> 4 and ten_k < 9){
            result = result + "(V";
            for(int i=0; i< ten_k- 5; i++){
                result = result + 'I';
            }
            result = result + ')';
        }
        else if(ten_k % 5 == 4){
            result = result + "(I";
            if((int)ten_k / 5 == 0)
                result = result + 'V';
            else
                result = result + 'X';

            result = result + ')';
        }
        if(thousands < 4){
            for(int i = 0; i < thousands; i++){
                 result = result + 'C';
                }
        }
        else if(thousands> 4 and thousands < 9){
            result = result + 'D';
            for(int i=0; i< thousands- 5; i++){
                result = result + 'C';
            }
        }
        else if(thousands % 5 == 4){
            result = result + 'C';
            if((int)thousands / 5 == 0)
                result = result + 'D';
            else
                result = result + 'M';
        }
        if(hundreads < 4){
            for(int i = 0; i < hundreads; i++){
                 result = result + 'X';
                }
        }
        else if(hundreads> 4 and hundreads < 9){
            result = result + 'L';
            for(int i=0; i< hundreads - 5; i++){
                result = result + 'X';
            }
        }
        else if(hundreads % 5 == 4){
            result = result + 'X';
            if((int)hundreads / 5 == 0)
                result = result + 'L';
            else
                result = result + 'C';
        }
        if(tens < 4){
            for(int i = 0; i < tens; i++){
                 result = result + 'I';
                }
        }
        else if(tens > 4 and tens < 9){
            result = result + 'V';
            for(int i=0; i< tens - 5; i++){
                result = result + 'I';
            }
        }
        else if(tens % 5 == 4){
            result = result + 'I';
            if((int)tens / 5 == 0)
                result = result + 'V';
            else
                result = result + 'X';
        }
    cout << "Equivalent Roman Number:- "<< endl << result << endl;
    return 0;
}
