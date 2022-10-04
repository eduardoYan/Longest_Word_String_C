#include <iostream>
#include <string.h>
#include <string>

using namespace std;

string LongestWord(string frase){

    string Longest ="nada";
    int contador=0;
    int Long=0;

    for (int i=0;i<=frase.length();i++){
         if(isalpha(frase[i]) != 0){
            contador++;

        }
        else{
            if(contador > Long){
                Long = contador;
                Longest = frase.substr(i- Long, Long);
            }
            contador =0;
        }
    }
        return Longest;
}

int main(){
    string frase;
    cout <<"digite a frase ae pai"<<endl;
    getline(cin,frase);
    cout <<LongestWord(frase)<<endl;

    //cout <<LongestWord(frase);
    return 0;

}


