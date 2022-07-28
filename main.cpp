//Keene Cabahug my final piggy latin translator
#include <iostream>
#include <string>
using namespace std;
 
 
string pigggyLatin(string);
 
int main()
{
 char choice;
  char playAgain=' ';
 cout<<"Please input a word or phrase:\n";
   string mySentence;
 
  getline(cin, mySentence);//get user input
   mySentence = pigggyLatin(mySentence);//translate to piggy latin
   cout << mySentence << endl;//print out new translation
 
 
 
     do{ cout<<"Translate again Y(y)/N(n)?\n";
     cin>>playAgain;
    
       cin.ignore();
       if(playAgain == 'N' || playAgain == 'n'){
         cout<<"Goodbye!!!";
         return 0;}
       cout<<"Please input a word or phrase:\n";
   string mySentence;
 
   getline(cin, mySentence);
   mySentence = pigggyLatin(mySentence);
   cout << mySentence << endl;
 
  
 
   } while (playAgain == 'Y' || playAgain == 'y');//end of do/while loop 
 
   
   
  
  
   
   return 0;     
 }//end of my main man
 
   
 
        
 
 
string pigggyLatin(string word){
 
  
   string pigggyLatinWord, pigggyLatinSentence = "";
   int length = 0, index = 0;
 
   while (word[index] != '\0'){
      
       if (word.find(' ', index) != -1){
           length = word.find(' ', index);
           length -= index;
           pigggyLatinWord = word.substr(index, length);
           pigggyLatinWord.insert(length, "ay");
           pigggyLatinWord.insert(length, 1, word[index]);
           pigggyLatinWord.erase(0, 1);
           index += length + 1;
       }
       else{
           pigggyLatinWord = word.substr(index);
           length = pigggyLatinWord.length();
           pigggyLatinWord.insert(length, "ay");
           pigggyLatinWord.insert(length, 1, word[index]);
           pigggyLatinWord.erase(0, 1);
           index = word.length();
       }
 
       pigggyLatinSentence += (pigggyLatinWord + " ");
   }
   return pigggyLatinSentence;
}// end of string piggy latin 
 

