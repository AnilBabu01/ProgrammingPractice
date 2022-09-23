#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main() {
    char str[100] = "cprogrammingcode";
    int i,len;


    /* Declare hash */
    map<char,int> hash;
    len = strlen(str);

   /* Make key and value pair
      key denotes character
      value is the count of a character
   */
   for(i = 0; i < len; i++){

      hash[str[i]]= hash[str[i]] + 1;

   }


    /* Check the count
      if count is 1 then print the element
    */
   for(j=0;j<len;j++){

       if (hash[str[j]]==1){
          cout<<"First non-repeated character is "<<str[j];
          break;
       }
   }

   return 0;
}
