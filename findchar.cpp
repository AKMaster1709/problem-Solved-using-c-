// Abhishek Jain
// Roll No. 0101CS211005

#include <iostream>
using namespace std;

int main(int argc, const char** argv) {

    char str[100];
    int vowel = 0, consonant = 0, word = 0, number = 0;
    cout<<"enter any string:";
    cin.getline(str,150);

    for(int i = 0; str[i]!='\0'; i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='o' ||str[i]=='u' ||str[i]=='i' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
    {
        vowel++;
    }
    else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='z'))
    {
        consonant++;
    }
    else if((str[i]=' '))
    {
        word++;
    }
    else if(str[i]>='0' && str[i]<='9')
    {
        number++;
    }
    }
    cout<<"vowels in string:"<<vowel<<endl;
    cout<<"characters in string:"<<consonant + vowel<<endl;
    cout<<"words in string:"<<word<<endl;
    cout<<"numbers in string:"<<number<<endl;
    return 0;
}