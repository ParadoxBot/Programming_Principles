
/* Exercises for Chapter 4, Computation */

#include "../std_lib_facilities.h"

/* Excercise 1 */

/*
int main(){
    vector<double>temps;
    int d = 0;
    double add = 0;
    int i = 0;

    for(double temp; cin>>temp; )
        temps.push_back(temp);
    // Compute median temperature:
    sort(temps);
    int rem = temps.size()%2;
    if(rem==0){
        d = temps.size()/2;
        add = temps[d] + temps[d-1];
        add = add/2.0;
        cout<<"Median Temperature: " << add << '\n';
    }
    else{
        cout<<"Median Temperature: " << temps[temps.size()/2] << '\n';
    }
}
*/

/* Exercise 2 */

/*
int main(){
    vector<double>dists;

    for(double dist;cin>>dist; ){
        dists.push_back(dist);
    }
    sort(dists);

    double sum = 0;
    for(double x : dists) sum += x;

    cout<<"Smallest distance: " << dists[0] << ".\n";
    cout << "Largest distance: " << dists[dists.size()-1] << ".\n";
    cout << "Mean distance: " << sum/dists.size() << ".\n";
}
*/

/* Exercise 4 */

/*
int main(){
    int guess = 50;
    int low = 1;
    int high = 101;
    char ans = ' ';
    double range = 100;

    cout<< "Hello, I will attempt to figure out the number you are thinking.\n";

    while(range>1){
           cout<< "Is the number higher than or equal to "<< guess<<"? (y/n)\n";
           cout<< high<<'\t' << low<<'\t' << range <<'\t'<<guess<<'\n';
           cin>>ans;
    if(ans=='y'){
        low = guess;
        range = high - low;
        guess = low + range/2;
    }
    else if(ans == 'n'){
        high = guess;
        range = high - low;
        guess = high - range/2;
    }
    }
    cout <<"Is your number " << guess <<"?\n";
}

*/

/* Exercise 5 */
/*
int main(){
    double val1 = 0;
    double val2 = 0;
    char oper = ' ';

    cout<<"Enter the numbers you'd like to use, as well as \n the operation you'd like to perform.\n\n";
    while(cin>>val1>>oper>>val2){
        switch (oper) {
        case '+':
            cout<<"The sum of "<<val1<<" and "<<val2<<" is "<<val1+val2<<".\n\n";
            break;
        case '-':
            cout<<"The difference between "<<val1<<" and "<<val2<<" is "<<val1 - val2<<".\n\n";
            break;
        case '*':
            cout<<val1<<" and "<<val2<<" multiplied together is "<<val1 * val2<<".\n\n";
            break;
        case '/':
            cout<<val1<<" divided by "<<val2<<" is "<<val1 / val2<<".\n\n";
            break;
        default:
            simple_error("I'm sorry, I don't understand the operation.\n");
            break;
        }
    }
}
*/

/* Exercise 6 */

/*
int get_number(){
    const int not_a_symbol = words.size();	// not_a_symbol is a value that does not correspond
                                                // to a string in the numbers vector
    int val = 0;
    if (cin>>val) return val; // try to read an integer composed of digits

    cin.clear();	// clear string after failed attempt to read an integer
    string s;
    cin>>s;
    for (int i=0; i<words.size(); ++i)	// see if the string is in numbers
        if (words[i]==s) val = i;
    if (val==not_a_symbol) error("unexpected number string: ",s);
    return val;
}

int main(){
    vector<string>words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout<<"Enter a number to be converted to a word.\n\n";
    while(cin>>val1){
        s
        }
          cout<< val1 << " is equivalent to "<<words[val1]<<".\n";
    }
}
*/

/* Exercise 9 */
/*
int main(){
    int current_pos = 1;
    double sum_square = 0;
    double current_s = 1;
    double val1 = 0;

    cout<<"How much rice u want?\n";
    while(cin>>val1){
        while(sum_square<val1){
            ++current_pos;
            current_s = current_s * 2;
            sum_square = sum_square + current_s;
        }
        cout<<"You'll need to get to square " <<current_pos<<", and you'll have "<< sum_square<< " grains of rice.\n This'll be " <<sum_square - val1<<" more than what you wanted.\n";
    }
}
*/

/* Exercise 10 */

/*
int main(){
    vector<string>options = {"Rock", "Paper", "Scissors"};
    vector<int>com_options = {1, 2, 2, 0, 1, 1, 1, 1, 0, 2, 1, 1, 1, 0, 1, 2, 2, 2, 0, 0, 0, 2, 0, 2, 0, 0, 2, 2, 0, 2, 2};
    int test_com_choice = 0;
    char player_choice= ' ';

    cout<<"Enter your choice of move (r/p/s).\n";
    while(cin>>player_choice){
        switch (player_choice) {
              case 'r':
                if(com_options[test_com_choice]==0) cout<<"Tie.\n";
              else if(com_options[test_com_choice]==1) cout<<"Paper covers rock, better luck next time!\n";
              else cout<<"Rock smashes scissors, you win!\n";
              break;
              case 'p':
              if(com_options[test_com_choice]==0) cout<<"Paper covers rock, you win!\n";
            else if(com_options[test_com_choice]==1) cout<<"Tie.\n";
            else cout<<"Scissors cut paper, better luck next time!\n";
              break;
              case 's':
              if(com_options[test_com_choice]==0) cout<<"Rock smashes scissors, better luck next time!\n";
            else if(com_options[test_com_choice]==1) cout<<"Scissors cut paper, you win!\n";
            else cout<<"Tie.\n";
              break;
              default: simple_error("Whooops, looks like you tried something I can't read!");
              break;
        }
        cout<<"P.S. The Computer chose: "<< options[com_options[test_com_choice]]<<".\n";
        ++test_com_choice;
    }
}
*/

/* Exercise 11 */

/*
vector<int> primes;

bool prime_check(int n){
    for(int p=0;p<primes.size();++p){
        if(n%primes[p]==0) return false;
    }
    return true;
}

int main(){
    primes.push_back(2);

        for(int i=3;i<=100;++i){
            if(prime_check(i)) primes.push_back(i);
        }
        cout << "Primes: ";
        for(int k=0;k<primes.size();++k){
            cout<<primes[k]<<",  ";
        }
}
*/

/* Exercise 12 */
/*
vector<int> primes;

bool prime_check(int n){
    for(int p=0;p<primes.size();++p){
        if(n%primes[p]==0) return false;
    }
    return true;
}

int main(){
    int max;
    while(cin>>max){
    primes.clear();
    primes.push_back(2);

        for(int i=3;i<=max;++i){
            if(prime_check(i)) primes.push_back(i);
        }
        cout << "Primes: ";
        for(int k=0;k<primes.size();++k){
            cout<<primes[k]<<"\t";
        }
        cout<<"\nTotal number of primes found: "<< primes.size()<<".\n";
    }
}
*/

/* Exercise 13 */

/*
int end = 1;
vector<int> multiples = {2};

int multiple(int n, int end){           //Adds each multiple of n between 1n and max into vector 'multiples'.
    int i = 0;
    for(int m=n;m<=end;){
        multiples.push_back(m);
        ++i;
        m=i*n;
    }
}

bool exists(int n){
    int c = 0;
    for(int p =0;p<multiples.size();++p){
        if(n==multiples[p]){
            c=1;
        }
        else{}
    }
    if(c==1) return true;
    else return false;
}

int main(){
    vector<int>primes;
    int end = 1;
    while(cin>>end){
        for(int x = 2;x<end;++x){           //First, check if x exists in multiples, using exists()
        if(exists(x)){}                     //If it exists, just move on to the next number
        else{
            primes.push_back(x);            //If is new, put it in primes, then find all its multiples
            multiple(x,end);                //and store them in vector.multiples
        }
        }
        cout<<"The primes between 1 and "<< end << " are:\n";
        for(int i=0;i<primes.size();++i){
            cout<<primes[i]<< "\t";
        }
        cout<<"\n";

        cout<<"The multiples between 1 and "<< end << " are:\n";
        for(int i=0;i<multiples.size();++i){
            cout<<multiples[i]<< "\t";
        }
        primes.clear();
        multiples.clear();
    }
}
*/

/* Exercise 15 */

/*
int end = 1;
vector<int> multiples;

int multiple(int n, int end){           //Adds each multiple of n between 1n and max into vector 'multiples'.
    int i = 1;
    for(int m=n;m<=10000;){
        multiples.push_back(m);
        ++i;
        m=i*n;
    }
}

bool exists(int n){
    int c = 0;
    for(int p =0;p<multiples.size();++p){
        if(n==multiples[p]){
            c=1;
        }
        else{}
    }
    if(c==1) return true;
    else return false;
}

int main(){
    vector<int>primes;
    int end = 1;
    while(cin>>end){
        for(int x = 2;primes.size()<end;){           //First, check if x exists in multiples, using exists()
        if(exists(x)){}                     //If it exists, just move on to the next number
        else{
            primes.push_back(x);            //If is new, put it in primes, then find all its multiples
            multiple(x,end);                //and store them in vector.multiples
        }
        ++x;
        }
        cout<<"The first "<< end<<" primes are:\n";
        for(int i=0;i<primes.size();++i){
            cout<<primes[i]<< "\t";
        }
        cout<<"\n";
        primes.clear();
        multiples.clear();
    }
}
*/

/* Exercise 15 */

/*
vector<int>num_list;

void vread_out(){
for(int x:num_list){
    cout<<x<< "\t";
}
}

int main(){
    int temp = 0;
    int count = 1;
    int curr_num = 0;
    int mode_count = 0;
    int mode_num = 0;

    cout<<"Enter the list of numbers to evaluate.\n";
    for(;cin>>temp;){
    num_list.push_back(temp);
    }
    sort(num_list);
    cout<<"Current list:\n";
    vread_out();
    cout<<"\n\n";
          for(unsigned i=1;i<num_list.size();++i){
            curr_num = num_list[i-1];
            if(curr_num == num_list[i]){
            cout<<curr_num << "\t"<<count<<"\n";
                ++count;
            }
            else if(count>=mode_count){
                mode_count = count;
                mode_num = curr_num;
            cout<<curr_num << "\t"<<count<<"\n";
                count=1;
            }
    }
    cout<<"With the number of occurences at "<<mode_count<<", the current mode is "<<mode_num<<".\n";
}
*/

/* Excercise 18 */

/*
int main(){
    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;

    cout<<"Enter the values a, b, and c for the equation to solve.\n";

    while(cin>>a>>b>>c){
        x1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
        x2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
    }
    cout<<"Roots are: {"<<x1<<", "<<x2<<"}.\n";
}
*/


/*  Exercise 19 */

vector<string>names;
vector<int>scores;
string name=" ";
int score = 0;
char choice = ' ';

bool rep_check(string x){
    for(int i = 0;i<names.size();++i){
        if(x == names[i]) return true;
    }
    return false;
}

void vec_list(){
    for(int i=0;i<names.size();++i){
        cout <<names[i]<< "\t" << scores[i]<<'\n';
    }
}

int main(){
    cout<<"Enter the names and scores you wish to record.\n";
    for(;cin>>name>>score;){
        if (name == "NoName" && score==0){
            break;
        }
        else if(rep_check(name) == true){
            simple_error("Duplicate name!");
        }
        names.push_back(name);
        scores.push_back(score);
    }
    cout<<"Here's the list of names and scores:\n";
    vec_list();
    cout<<"\n\nWould you like to add more entries, check entries, or end? (a/c/e)\n";
    cin>>choice;
    switch (choice) {
    case 'a':
        main();
        break;
    default:
        break;
    }
}

