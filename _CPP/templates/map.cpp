/*A map in CPP STL is an associative container which store key value pair.To elaboarate a map store key of some data type value of some data type*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
   map<string,int> MarksMap;
   MarksMap["arpit"]=34;
   MarksMap["green"]=23;
   MarksMap["blue"]=23;
   MarksMap["red"]=24;
   MarksMap["grey"]=12;

   map<string,int> :: iterator it;
   for(it=MarksMap.begin();it!=MarksMap.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<"/n";
   }
   cout<<"The size is :- "<<MarksMap.size()<<endl;
   cout<<"The max size is:- "<<MarksMap.max_size()<<endl; 
   return 0;

}


























































































#






























