#include<cstdlib>
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

int main()
{
    vector<int> otp;

//as we know we have to get only 6-digit otp then we will iterate the loop only 6 times
srand(time(0));
for(int i=1;i<=6;i++)
{
    otp.push_back(rand() % 10);
}
for(auto it=otp.begin();it!=otp.end();it++)
{
    cout << *it << " ";
}
cout<<endl;
cout<<"ENTER THE OTP:"<<endl;
vector<int> val;
int temp;
for(int i=1;i<=6;i++)
{
    cin>>temp;
    val.push_back(temp);
}
if(otp == val)
{
    cout<<"Verification Successful"<<endl;
}
else{
    cout<< "Wrong OTP"<<endl;
}
    return 0;
}