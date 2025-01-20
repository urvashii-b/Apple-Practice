#include<bits/stdc++.h>
using namespace std;

// pass by value
void printCompany(string company, string name){
    cout<<"Hi, "<<name<<"! Congrats on getting into "<<company<<"\n";
}

// pass by reference
void changecompany(string &company){
    company = "Apple";
}

int main(){
    /*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    */

    // strings - getline
    cout<<"Hey, I'm Urvashi"<<"\n";
    string name;
    cout<<"What's your name? ";
    getline(cin,name);
    cout<<"it's nice to meet you, "<<name<<endl;
    // int n = name.size();
    // name[n-1] = 's';
    // cout<<"Changed your name to: "<<name<<"\n";

    // if-else
    int age;
    cout<<"enter your age: ";
    if(!(cin>>age)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Invalid input!!\n";
    }else{
        if(age>=18){
            cout<<"Oh, you are "<<age<<" years old! An adult :)"<<"\n";
        }else{
            cout<<"Oh, you are "<<age<<" years old! A kid :)"<<"\n";
        }
    }

    // switch statements
    int day;
    cout<<"Enter your fav day (1-mon, 2-Tue,...): ";
    cin>>day;
    switch(day){
        case 1:
            cout<<"MONday!!\n";
            break;
        case 2:
            cout<<"TUESday!!\n";
            break;
        case 3:
            cout<<"WEDnesday!!\n";
            break;
        case 4:
            cout<<"THURSday!!\n";
            break;
        case 5:
            cout<<"FRIday!!\n";
            break;
        case 6:
            cout<<"SATurday!!\n";
            break;
        case 7:
            cout<<"SUNday!!\n";
            break; 
        default:
            cout<<"INvalid\n";
    }

    // arrays
    cout<<"Enter 5 numbers to be stored in an array: ";
    int arr[5]; 
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    // srand(time(0)); different numbers each time you run the program
    int randomI = rand()%5;
    cout<<"Lucky draw from array: "<<arr[randomI]<<"\n";
    char arr2[3][5]; // 3 rows of 5 cols - 2d array

    // functions 
    string company;
    cout<<"Which company are you from? ";
    getline(cin,company);
    printCompany(company,name);
    changecompany(company);
    cout<<"New company: "<<company<<endl;


    return 0;
}