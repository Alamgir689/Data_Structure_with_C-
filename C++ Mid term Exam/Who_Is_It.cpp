// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//     int id;
//     char name[100];
//     char section[26];
//     int mark;
// };
// int main()
// {
//     int t;
// cin>>t;
// for(int i=0;i<t;i++)
// {
//     Student a,b,c;
//     cin>>a.id>>" ">>a.name>>" ">>a.section>>" ">>a.mark;
//     cin>>b.id>>" ">>b.name>>" "l>>b.section>>" ">>b.mark;
//     cin>>c.id>>" ">>c.name>>" ">>c.section>>" ">>c.mark;

// if (a.mark>b.mark&&a.mark>c.mark)
// {
//      cout<<a.id<<endl<<a.name<<endl<<a.section<<endl<<a.mark<<endl ;
// }
//   else if(b.mark>a.mark&&b.mark>c.mark)
// {
//    cout<<b.id<<endl<<b.name<<endl<<b.section<<endl<<b.mark<<endl ; 
// }
//  else if(c.mark>a.mark&&c.mark>b.mark)
// {
//    cout<<c.id<<endl<<c.name<<endl<<c.section<<endl<<c.mark<<endl ;
// }

// if(a.mark!=b.mark!=c.mark)
// {
//     if(a.mark==b.mark)
//     if(a.id<b.id)
//     {
//         cout<<a.id<<endl<<a.name<<endl<<a.section<<endl<<a.mark<<endl ; 
//     }
//     else if(b.id<a.id)
//     {
//         cout<<b.id<<endl<<b.name<<endl<<b.section<<endl<<b.mark<<endl ; 
//     }
// }

// if(a.mark!=b.mark)
// {
//     if(a.mark==c.mark)
//     {
//         if(a.mark<c.mark)
//         {
//              cout<<a.id<<endl<<a.name<<endl<<a.section<<endl<<a.mark<<endl ; 
//         }
//         else if(a.mark>c.mark)
//         {
//           cout<<c.id<<endl<<c.name<<endl<<c.section<<endl<<c.mark<<endl ;  
//         }
//     }
// }
// if(b.mark==c.mark)
//     {
//         if(b.mark<c.mark)
//         {
//              cout<<b.id<<endl<<b.name<<endl<<b.section<<endl<<b.mark<<endl ; 
//         }
        
//         else if(b.mark>c.mark)
//         {
//           cout<<c.id<<endl<<c.name<<endl<<c.section<<endl<<c.mark<<endl ;  
//         }
//     }

// return 0;
// }
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[100];
    char section[26];
    int marks;
};
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        Student a,b,c;
        cin>>a.id>>a.name>>a.section>>a.marks;
        cin>>b.id>>b.name>>b.section>>b.marks;
        cin>>c.id>>c.name>>c.section>>c.marks;

        if(a.marks != b.marks)
        {
            if (a.marks == c.marks)
            {
                if(a.id < c.id){
                    cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
                }
                else{
                    cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
                }
            }
            else if(a.marks != c.marks){
                if(b.id < c.id){
                    cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
                }
                else{
                    cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
                }
            }
        }
        else if (a.marks > b.marks && a.marks > c.marks)
        {
             cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
        }
        else if(b.marks >a.marks && b.marks > c.marks)
        {
           cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
        }
        else if(c.marks > a.marks && c.marks > b.marks)
        {
           cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
        else if(a.marks != b.marks != c.marks)
        {
            if(a.id < b.id && a.id < c.id)
            {
                cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
            else if(b.id<a.id && b.id < c.id)
            {
                cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
            }
            else if(c.id<a.id && c.id < b.id)
            {
                cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
            }
        }

        else
        {
          if(a.id < b.id){
                cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
            else{
                cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
            }
        return 0;
        }
    }
}