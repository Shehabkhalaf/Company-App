#include <iostream>

using namespace std;

int main()
{
    int p=0;
    string names[5000];
    int age[5000];
    int salary[5000];
    char genders[5000];
    while(true)
    {
        int n;
        cout<<"->Enter Your Choise: "<<endl;
        cout<<"1)Add New Employee"<<endl;
        cout<<"2)Print All Employees"<<endl;
        cout<<"3)Delete By Age"<<endl;
        cout<<"4)Update Salary By Name"<<endl;
        cout<<"**************************************"<<endl;
        cin>>n;
        if(n>4 || n<1)
        {
            cout<<"Invalid, Try again!"<<endl;
            continue;
        }
        switch (n)
        {
        case 1:
            cin>>names[p]>>age[p]>>salary[p]>>genders[p];
            p++;
            break;
        case 2:
            for(int j=0;j<p;j++)
            {
                if(age[j]!=0)
                {cout<<names[j]<<" "<<age[j]<<" "<<salary[j]<<" "<<genders[j]<<endl;}
            }
            break;
        case 3:
            int s,e;
            cout<<"->Enter Start and End Age"<<endl;
            cin>>s>>e;
            for(int j=0;j<p+1;j++)
            {
                if(age[j]>=s && age[j]<=e)
                {age[j]=0;}
            }
            break;
        case 4:
            string name;
            cout<<"Enter The Name And The Salary"<<endl;
            cin>>name;
            for(int j=0;j<p+1;j++)
            {
                if(names[j]==name)
                {
                    cin>>salary[j];
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
