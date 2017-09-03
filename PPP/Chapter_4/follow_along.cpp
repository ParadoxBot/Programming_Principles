
#include "../std_lib_facilities.h"

/*
// Convert Inches to cm, or cm to inches.
// A suffix 'i' or 'c' indicate inches or centimeters, respectively.

int main(){
    constexpr double cm_to_inch = 2.54;

    double length = 0;

    char unit = 0;
    cout<<"Please enter the length to convert, along with the original unit, (i/c).\n\n";
    cin>>length>>unit;

    if (unit == 'i'){
        cout<<length<<"in == " <<length*cm_to_inch<<"cm.\n";
    }
    else{
        cout<<length<<"cm == "<<length/cm_to_inch<<"in.\n";
    }
}
*/

/*
int main(){
    constexpr double kr_to_d = 0.127;
    constexpr double yen_to_d = 0.00915;
    constexpr double gbp_to_d = 1.28;

    double amt = 0;
    char unit = ' ';

    cout <<"Please enter the amount of currency you would like to convert, along with the name (y/k/p).\n";
    while (cin>>amt >> unit){

    if (unit == 'y'){
        cout<<amt<<"yen, at current exchange rate, would be worth $" << amt*yen_to_d << ".\n";
    }
    else if (unit == 'k'){
        cout<<amt<<"kroner, at current exchange rate, would be worth $" << amt*kr_to_d << ".\n";
    }
    else if (unit == 'p'){
        cout<<amt<<"GBP, at current exchange rate, would be worth $" << amt*gbp_to_d << ".\n";
    }
    else {
        cout<<"I'm sorry, this converter cannot recognize "<<unit<<"as a unit. Please try again.\n";
    }\
    }
}
*/

/*
int main(){
    constexpr double kr_to_d = 0.127;
    constexpr double yen_to_d = 0.00915;
    constexpr double gbp_to_d = 1.28;
    constexpr double yun_to_d = 0.15;

    double amt = 0;
    char unit = ' ';

    cout <<"Please enter the amount of currency you would like to convert, along with the name (y/k/p).\n";
    while (cin>>amt >> unit){
        switch(unit){
        case 'y':
            cout<<amt<<"yen, at current exchange rate, would be worth $" << amt*yen_to_d << ".\n";
            break;
        case 'k':
            cout<<amt<<"kroner, at current exchange rate, would be worth $" << amt*kr_to_d << ".\n";
            break;
        case 'p':
            cout<<amt<<"GBP, at current exchange rate, would be worth $" << amt*gbp_to_d << ".\n";
            break;
        case 'u':
            cout<<amt<<"Yuan, at current exchange rate, would be worth $" << amt*yun_to_d << ".\n";
            break;
        default:
            cout<<"I'm sorry, this converter cannot recognize "<<unit<<"as a unit. Please try again.\n";
            break;
        }
    }
}
*/

/*
int main(){
    char x = 'a';
    int i = 0;

    while (i<26){
        cout<< x << '\t' << int(x);
        cout << "\n";
        ++i;
        x=x+1;
    }
}
*/

/*
int main(){
    char x = 'A';

    for (int i=0;i<26;++i){
        x='A'+i;
        cout<<x<<'\t'<<int(x);
        cout<<'\n';
    }
    for (int i=0;i<26;++i){
        x='a'+i;
        cout<<x<<'\t'<<int(x);
        cout<<'\n';
    }
    for (int i=0;i<10;++i){
        x='0'+i;
        cout<<x<<'\t'<<int(x);
        cout<<'\n';
    }

}
*/

/*
int square(int x)
{
    int x2 = 0;
    for(int i=0;i<x;++i){
        x2=x2+x;
    }
    return x2;
}

int main(){
    int i = 1;

    while (i<=100){
        cout << i << '\t' << square(i)<<'\n';
        ++i;
    }
}
*/

/*
int square(int x)
{
    int x2 = 0;
    for(int i=0;i<x;++i){
        x2=x2+x;
    }
    return x2;
}

int main(){
    int i;
    for (i=1;i<=100;++i){
        cout << i << '\t' << square(i)<<'\n';
    }
}
*/

/*
int main(){
    vector<string>disliked;
    vector<string>sentence;

    cout<<"Enter the sentence to be checked.\n";
    for(string temp;cin>>temp; )                   //Entering the sentence into the second vector
        sentence.push_back(temp);
    for(int i=0;i<sentence.size(); ++i){                 //Compare each single word in vector sentence to every word in vector disliked.
        for(int i2=0;i2<disliked.size();++i2){
            if(sentence[i]==disliked[i2])
                sentence[i] = "****";
            else{}
        }
    }
    for(int i=0;i<sentence.size(); ++i)
        cout<<sentence[i]<< " ";
    cout<<".\n";
}
*/

/* Drill */
/*
int main(){
    double val1 = 0;
    double val2 = 0;

    while (cin>> val1 >> val2){
        if (val1<val2)
            cout<<"the smaller number is: " << val1 << ".\n"
               << " the larger number is: " << val2 << ".\n";
        else if (val1>val2)
            cout<<"the smaller number is: " << val2 << ".\n"
               << " the larger number is: " << val1 << ".\n";
        else
            cout<<"the numbers seem to be equal.\n";
        if (val1 - val2 <1.0/100 && val2 - val1 < 1.0/100)
            cout<<"the numbers are ALMOST equal...\n";
        else{};
    }

}
*/

/*
int main(){
    constexpr double cm_to_m=.01;
    constexpr double in_to_m=2.54*.01;                // Convert to cm, then m
    constexpr double ft_to_m=12*2.54*.01;             // Convert to inches, then cm, then m

    double large = 0;
    double large2 = 0;
    double small = 1000;
    double small2 = 1000;
    double temp = 0;
    double temp2 = 0;
    double running_total = 0;
    int i = 0;
    string unit = "";
    string lrg_unit = "m";
    string sml_unit = "m";
    vector<double>lengths;

    while (cin>> temp >> unit){                         // Read in value along with its unit
        if (unit == "cm")
            temp2=temp*cm_to_m;
        else if (unit=="in")
            temp2 = temp*in_to_m;
        else if (unit == "ft")
            temp2 = temp*ft_to_m;
        else if (unit == "m")
            temp2 = temp;
        else
           simple_error("Bad unit.\n");

        if(temp2<small2){
            small = temp;
            sml_unit = unit;
            small2 = temp2;
        }
        if(temp2>large2){
            large = temp;
            lrg_unit = unit;
            large2 = temp2;
        }
        cout<<"Largest so far: "<< large << ' '<< lrg_unit << ".\n"
           << "Smallest so far: "<< small << ' '<< sml_unit <<  ".\n";
        running_total = running_total + temp2;
        cout << "Running total of lengths, in meters: "<<running_total<<".\n";
        lengths.push_back(temp2);
        cout<<"Total lengths entered: "<< lengths.size() << ".\n";
        for(i=0;i<lengths.size();++i)
            cout<<lengths[i] << "m,\t";
        cout << "\n";
    }
}
*/
