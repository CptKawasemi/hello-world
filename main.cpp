#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string choice;
    double sum {};
    double mean {};
    vector <int> vec{10,10,5,1,2,3};
    int app{};
    do{
        cout<<"\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit"<<endl;
        cin>>choice;

        if (choice=="P" || choice=="p")
            for (int a:vec)
                cout<<a<<" ";

        if (choice=="A" || choice=="a") {
            cout << "Type number: " << endl;
            cin >> app;
            vec.push_back(app);
        }

        if (choice=="M" || choice=="m") {
            for (int a:vec){
                sum+=a;
                mean=sum/vec.size();
            }
            cout<<"The mean is "<<mean<<endl;
        }

        if (choice=="S" || choice=="s"){
            cout<<"Min element: "<<*min_element(vec.begin(),vec.end());
        }

        if (choice=="L" || choice=="l"){
            cout<<"Max element: "<<*max_element(vec.begin(),vec.end());
        }

    }while(choice!="q" && choice!="Q");
    cout<<"Goodbye";
    return 0;
}