#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"*************Inserting in vector****************\n";
    vector <int> v1={10,12,15,11,17};
    v1.push_back(100);//insert 100 after 17
    v1.erase(v1.begin());//delete 10
    for(int i=0;i<v1.size();i++){//size() will give dynamic size of array
        cout<<v1[i]<<" ";//prints all the elements of vector
    }
    cout<<"\n\n*****************************************************\n\n";

    cout<<"\nINITIALIZING  VECTOR\n"<<endl;
    vector<int>v2 (5,100);
    for(auto it: v2)
    {
        cout<<it<<"  ";
    }
    cout<<"\n\n***********WAYS OF PRINTING VECTOR************\n\n";
    vector<int>v3={12,13,14,11,10};
    for(vector<int>::iterator it= v3.begin();it!=v3.end();it++)//1st
    {
        cout<<*(it)<<" ";
    }
    cout<<"\n\n";
    for(auto it=v3.begin();it!=v3.end();it++)//2nd
    {
        cout<<*(it)<<" ";

    }
    cout<<"\n\n";
   for(auto it:v3)//3rd
    {
    cout<<it<<" ";
     }

     cout<<"\n******************************************\n\n";
     cout<<"****ERASE FUNCTION*****"<<endl;
     vector<int>v4={10,20,30,40,50};
     v4.erase(v4.begin());//erases first element i.e 10
     for(auto it:v4)
        cout<<it<<" ";
     cout<<"\n\n";
     v4.erase(v4.begin()+2,v4.begin()+4);//this will delete a range of values
     for(auto it:v4)
        cout<<it<<" ";
     cout<<"\n\n";


     cout<<"******INSERT FUNCTION*********"<<endl;

      vector<int>v5={11,22,33,44,55};
      for(auto it:v5)
        cout<<it<<"  ";
       cout<<"\n\n";
      v5.insert(v5.begin(),50);//inserts 50 in the beginning
      for(auto it:v5)
        cout<<it<<"  ";
       cout<<"\n\n";
       v5.insert(v5.begin()+3,4,642);//inserts 642 value after 22 three times
       for(auto it:v5)
        cout<<it<<"  ";
       cout<<"\n\n";

       vector<int>copy(4,50);
       v5.insert(v5.begin()+2,copy.begin(),copy.end());//merge 2 vectors----inserts copy vector to vector v5 after the value 22
       for(auto it:v5)
        cout<<it<<"  ";
       cout<<"\n\n";

       cout<<"*********SWAPPING IN VECTORS***********"<<endl;
       cout<<"\n\n";

       vector<int>v6={1,2,3,4,5};
       vector<int>v7={90,80,7,60,50};
       cout<<"Before swapping"<<endl;
        for(auto it:v6)
        cout<<it<<"  ";
    cout<<"\n";
         for(auto it:v7)
        cout<<it<<"  ";
        cout<<"\n";
       v6.swap(v7);
        cout<<"After swapping"<<endl;
        for(auto it:v6)
        cout<<it<<"  ";
        cout<<"\n";
         for(auto it:v7)
        cout<<it<<"  ";
       cout<<"\n\n";
v7.clear();//erases the entire vector









}
