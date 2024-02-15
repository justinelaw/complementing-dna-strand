//complementing a strand of DNA
#include <iostream>
#include <stack>
using namespace std;

int main(){
    string strand;
    cout << "Enter string: " << endl;
    getline(cin, strand); 
    stack<char> stack; 

    int size = strand.size();
    
    for (int i = 0; i < size; i++){
        stack.push(strand[i]);
    }

    string complement;
    char s;
    while(!stack.empty()){
        s = stack.top();
        if (s == 'A'){
            complement.push_back('T');
        }
        else if (s == 'T'){
            complement.push_back('A');
        }
        else if (s == 'G'){
            complement.push_back('C');
        }
        else if (s == 'C'){
            complement.push_back('G');
        }
        stack.pop();
    }

    cout << complement << endl;



    return 0;
}

