#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>ls={2,4,6,8};
    ls.push_back(10);
    cout<<"***1 way of printing****"<<endl;
    list<int>::iterator it=ls.begin();//iterator method of printing
    while(it!=ls.end())
    {
        cout<<*(it)<<"  ";
        (it)++;
    }
    cout<<"\n\n";
    cout<<"****Other way of printing**** "<<endl;
    for(auto it:ls){//same as vector method
        cout<<it<<"  ";
    }
    cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";

    cout<<"****INSERTING AT FRONT POSITION*****"<<endl;
    ls.push_front(1);
    for(auto it:ls){//same as vector method
        cout<<it<<"  ";
    }
    cout<<"\n\n";
    ls.emplace_front(0);//using emplace function
    for(auto it:ls){//same as vector method
        cout<<it<<"  ";
    }
    cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";


    cout<<"To check the number of element present in List\n\n";
    cout<<"\nNumber of element ="<<ls.size();


    cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";

    cout<<"****For deleting values********\n\n";
    ls.pop_back();//Deletes item from last
      for(auto it:ls){//same as vector method
        cout<<it<<"  ";
    }
     cout<<"\n\n";
     ls.pop_front();
     for(auto it:ls){//same as vector method
        cout<<it<<"  ";
     }

      cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";

    cout<<"****FOR SORTING****\n\n";
    list<int> as={3,6,1,8,2,10,0,5};
    as.sort();
    for(auto it:as){//same as vector method
        cout<<it<<"  ";
     }

      cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";

   cout<<"***For Reversing****\n\n";
   list<string> st={"Mukesh","Kumar","Sah"};
    for(auto it:st){//same as vector method
        cout<<it<<"  ";
     }
     cout<<"\n\n";
     st.reverse();//this will reverse our list
     for(auto it:st){//same as vector method
        cout<<it<<"  ";
     }

      cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";

     cout<<"****REMOVE FUNCTION*****\n\n";
     list<int>l2={1,2,3,4,5,6,7,8};
     for(auto it:l2){//same as vector method
        cout<<it<<"  ";
     }
     cout<<"\n\n";
     l2.remove(5);//this will remove value 5 from the list
      for(auto it:l2){//same as vector method
        cout<<it<<"  ";
     }


    cout<<"\n\n";
    cout<<"****************************************";
    cout<<"\n\n";

    cout<<"***USING CLEAR FUNCTION****\n\n";
    list<int>l3={5,6,7,1,2,3,4};
    for(auto it:l3)
    {
        cout<<it<<"  ";
    }
    cout<<"\n\n";
   l3.clear();//this doesnot take any agrument and deletes the whole list
   for(auto it:l3)
    {
        cout<<it<<"  ";
    }
    cout<<"To check number of element present = "<<l3.size()<<endl;












}
