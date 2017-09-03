/*
====================================================================
===                                                              ===
===                         Chapter 5                            ===
===                          Errors                              ===
===                                                              ===
====================================================================
*/

#include "../std_lib_facilities.h";


/* Excercise 2 */

/*
double ctok(double c){
    if(c<-273.15) error("Temperature is below absolute zero.\n"); //needed a pre-condition to check if temperature can exist. Absolute zero cannot be crossed.
    double k = c + 273.15; //int k shuold be double k to preserve information. Also we're returning a double but k being returned is int which is stupid.
    return k;          //int should be k. Syntax error: no ";"
}

int main(){
    double c = 0;
    while(cin>>c){
        cout<<ctok(c)<<"\n";
    }
}
*/

/* Excercise 5 */

/*
double ctok(double c){
    if(c<-273.15) error("Temperature is below absolute zero.\n"); //needed a pre-condition to check if temperature can exist. Absolute zero cannot be crossed.
    double k = c + 273.15; //int k shuold be double k to preserve information. Also we're returning a double but k being returned is int which is stupid.
    return k;          //int should be k. Syntax error: no ";"
}

double ktoc(double k){
    if(k<0)error("Temperature is below absolute zero.\n");
    double c = k - 273.15;
    return c;
}

int main(){
    double t = 0;
    char u = ' ';
    cout<<"Enter the temperature to convert, along with the letter unit (c/k).\n";
    try{
    while(cin>>t>>u){
        switch (u) {
        case 'c':
            cout<<ctok(t)<<" Kelvin\n";
            break;
        case 'k':
            cout<<ktoc(t)<<" Celcius\n";
            break;
        default:
            cout<<"Missing a readable unit letter.\n";
            break;
        }
    }
    }
    catch(runtime_error& e){
        cerr<<"Runtime_error: "<<e.what()<<'\n';
        return 1;
    }
}
*/

/* Excercise 6 */

/*
double ctof(double c){
    if(c<-273.15)error("Temperature is below absolute zero!\n");
    double f = 9.0/5*c + 32;

}

double ftoc(double f){
    if(f<-459.67)error("Temperature is below zero!\n");
    double c = 5.0/9*(f - 32);
}

int main(){
    double t = 0;
    char u = ' ';
    try{
        cout<<"Enter a temperature and the unit to convert from (c/f).\n";
        while(cin>>t>>u){
            switch (u) {
            case 'c':
                cout<<ctof(t)<<"Farenheit\n";
                break;
            case 'f':
                cout<<ftoc(t)<<"Celcius\n";
                break;
            default:
                cout<<"Whoops, I couldn't read that unit!\n";
                break;
            }
        }
    }
    catch(runtime_error& e){
              cerr<<"Runtime error: "<<e.what()<<"\n";
    }
}
*/

/* Excersise 7*/

/*
int main(){
    try{
        double a = 0;
        double b = 0;
        double c = 0;

        cout<<"Enter the values a, b, and c for the equation to solve.\n";

        while(cin>>a>>b>>c){
            //if(b*b - 4*a*c<0)error("b^2 - 4ac < 0");

            if(a==0){//bx + c = 0
                if(b==0){
                    cout<<"No roots\n";
                }
                else cout <<"root = "<< (-c)/b << '\n';
            }
            else if(b==0){
                double ca = -c/a;
                if(ca==0)
                    cout<<"x = 0\n";
                else if(ca<0)
                    cout<<"No real roots.\n";
                else
                    cout<<"two solutions: "<< sqrt(ca)<< " and "<<-sqrt(ca)<<"\n";
            }
            else{
                double sq = b*b - 4*a*c;
                if(sq==0)
                    cout<<"One real root: "<< -b/2*a<<"\n";
                else if(sq<0)
                    cout<<"No real roots.\n";
                else
                    cout<<"Two real roots: "<<(-b+sqrt(sq))/(2*a)<<" and "<< (-b-sqrt(sq))/(2*a)<<".\n";
            }
            cout<<"Enter another set.\n";
        }
    }
    catch(runtime_error& e){
        cerr<<"Error: "<<e.what()<<"; formula won't work!\n";
    }
}
*/

/* Exercise 8/9/10 */
/*
int main(){
    vector<double>list;
    vector<double>diff_list;
    double N = -1;

    try{
        cout<<"Please enter the number of values you want to sum:\n";
        cin>>N;
        if(N<1)error("You must select a positive value");
        cout<<"Please enter some integers (press '|' to stop:\n";
        for(double temp;cin>>temp;){
            list.push_back(temp);
        }
        if(N>list.size())throw range_error("Attempted to sum more numbers than exist in the list!\n");
        int sum = 0;
        for(int i=0;i<N;++i) sum += list[i];
        if(int t = narrow_cast<int>(sum));
        cout<<"The sum of the first "<<N<<" numbers ( ";
        for(int i=0;i<N;++i){
            cout<<list[i]<<" ";
        }
        cout<<") is "<<sum<<".\n";
        for(int i=0;i<N-1;++i){
            double d = list[i+1] - list[i];
            diff_list.push_back(d);
        }
        cout<<"The differences between each of the "<<N<<" numbers are ( ";
        for(double x:diff_list) cout<<x<<" ";
        cout<<"\n";
    }
    catch(range_error& e){
        cerr<<"Whoops, "<<e.what()<<"\n";
    }
    catch(runtime_error& e){
        cerr<<e.what()<<"\n";
    }
}
*/

/* Exercise 11 */
/*
int main(){
    vector<int>list={1,1};
    int sum = 0;
    int end = 0;
    int max = 0;

    while(cin>>end){
    for(int i=2;i<end;++i){
        sum = list[list.size()-2]+list[list.size()-1];
        if(sum<list[list.size()-1])
            break;
        if(sum>max) max = sum;
        list.push_back(sum);
        cout<<sum<<"\t";
        }
    cout<<"\n\nThe max Fibonacci number that int can hold is: "<<max<<".\n";
    list.clear();
    }
}
*/

/* Excercise 12 */
vector<int>answer = {1,2,5,9};
vector<int>guess;
unsigned bulls = 0;
int cows = 0;

void bull_check(){
    for(int i = 0;i<answer.size();++i){
        if(answer[i] == guess[i]) ++bulls;
    }
}

void cow_check(){
    for(int i = 0;i<answer.size();++i){
        for(int k = 0;k<answer.size();++k){
            if(i !=k && guess[k]==answer[i]) ++cows;
        }
    }
}

void number_switch(){
    answer.clear();
    for(int i = 0;i<4;++i){
        int x = randint(10);
        answer.push_back(x);
    }
}

void try_again(){
    cout<<"attempt\n";
    guess.clear();
    int temp = 0;
    for(;cin>>temp;){
        guess.push_back(temp);
    }
}


int main(){
    number_switch();
    char c = ' ';

    cout<<"Change answer number?(y/n)\n";
    cin>>c;
    switch (c) {
    case 'y':
        number_switch();
        break;
    default:
        break;
    }

    cout<<"\nEnter a guess to begin (the correct answer has " << answer.size()<<" elements.\n";
    while(bulls<answer.size()){
        try_again();
        if(guess.size()!=answer.size()){
            cout<<"Incorrect number of elements in your guess!\n";
        }
        else{
            bull_check();
            cow_check();
            cout<<"Answer: "<<bulls<<" bull(s), "<<cows<<" cow(s).\n";
            if(bulls==answer.size()){
                cout<<"Congratz!\n";
                break;
            }
       }
        cout<<"Try again!\n";
        try_again();
    }
}
















