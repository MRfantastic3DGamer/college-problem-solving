/* CODER       : Dhruv Bansal   */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define vi vector<int>
#define vll vector<long long int>
#define all(a) a.begin(), a.end()
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repr(i, n) for (ll i = n; i >= 0; i--)
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define PI 3.141592653589793238462
#define INF INT_MAX
#define INF1 INT_MIN

string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

// ##################################################################

//                        DAY : 2

// ##################################################################

float TotalSalary(){
    int bas;
    cin >> bas;
    int ans = bas;
    ans += 0.7*bas;
    ans -= 0.11*bas;
    int al;
    char c;
    cin >> c;
    switch (c)
    {
    case 'A':
        al = 1700;
        break;
    case 'B':
        al = 1500;
        break;
    default:
        al = 1300;
        break;
    }
    ans += al;
    cout << ans;
    return ans;
}

int largestOfThree(){
    int a[3];
    rep(i,3) cin >> a[i];
    int x = max(a[0],a[1]);
    x = max(x,a[2]);
    cout << x << "\n";
    return x;
}

void VowelOrCons(){
    char c;
    cin >> c;
    char C[10] = {'a','e','i','o','u','A','E','I','O','U'};
    rep(i,10){
        if(c == C[i]){
            cout << "Vowel\n";
            return;
        }
        cout << "Not\n";
    }
}

bool LeapYear(int y){

    if(y%400 == 0 || (y%4 == 0 || y%100 == 0)){
        //cout << "Yes\n";
        return true;
    }
    //else cout << "No\n";
    return false;
}

void Weekday(){
    int year,mon,dat;
    cin >> year >> mon >> dat;
    int date = year * 365.25;
    int M[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(LeapYear(year)){
        M[1] = 29;
    }
    date += M[mon-1];
    date += dat;
    
    date %= 7;

    switch (date)
    {
    case 0:
        cout << "Mon\n";
        break;
    case 1:
        cout << "Tue\n";
        break;
    case 2:
        cout << "Wed\n";
        break;
    case 3:
        cout << "Thu\n";
        break;
    case 4:
        cout << "Fri\n";
        break;
    case 5:
        cout << "Sat\n";
        break;
    case 6:
        cout << "Sun\n";
        break;
    
    default:
        break;
    }
}

void TriangleType(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b && a == c){
        cout << "Equilateral\n";
    }
    else if(a == b || b == c || a == c){
        cout << "Isosceles\n";
    }
    else cout << "Scalene\n";
}

void HowIsTemp(){
    int t;
    cin >> t;
    t /= 10;

}

void Quadrant(){
    int x,y;
    cin >> x >> y;
    if(x > 0){
        if(y > 0){
            cout << 1;
        }
        else{
            cout << 4;
        }
    }
    else{
        if(y > 0){
            cout << 2;
        }
        else{
            cout << 3;
        }
    }
}

// ##################################################################

//                        DAY : 2

// ##################################################################

void D2Q1(int n){
    rep(i,n){
        rep(j,i+1){
            cout << i+j+1;
        }
        cout << "\n";
    }
}

void D2Q2(int n){
    rep(i,n){
        rep(j,i+1){
            cout << i+j+1 << " ";
        }
        cout << "\n";
    }
}

void D2Q3(int n){
    rep(i,n){
        rep(j,i+1){
            cout << i+j+1 << " ";
        }
        cout << "\n";
    }
}

void D2Q4(int n){
    rep(i,n){
        rep(j,i+1){
            cout << alphabet[26+i];
        }
        cout << "\n";
    }
}

void D2Q5(int n){
    rep(i,n){
        rep(j,i+1){
            cout << alphabet[26+i+j];
        }
        cout << "\n";
    }
}

void D2Q6(int n){
    rep(i,n){
        rep(j,i+1){
            cout << alphabet[26-i+j+n];
        }
        cout << "\n";
    }
}

void D2Q7(int n){
    rep(i,n){
        rep(j,n-i) cout << " ";

        rep(j,i+1){
            cout << j+1;
        }
        cout << "\n";
    }
}

void D2Q8(int n){
    rep(i,n){
        rep(j,n-i) cout << " ";

        rep(j,i+1)
            cout << "*";
        rep(j,i)
            cout << "*";

        cout << "\n";
    }
}

void D2Q9(int n){
    rep(i,n){
        rep(j,n-i) cout << " ";

        rep(j,i+1)
            cout << "*";
        rep(j,i)
            cout << "*";

        cout << "\n";
    }
    repr(i,n-2){
        rep(j,n-i) cout << " ";

        rep(j,i+1)
            cout << "*";
        rep(j,i)
            cout << "*";

        cout << "\n";
    }
}

void D2Q10(int n){
    repr(i,n-1){
        rep(j,n-i) cout << " ";

        rep(j,i+1)
            cout << "*";
        rep(j,i)
            cout << "*";

        cout << "\n";
    }
    rep(i,n){
        if(!i) continue;
        rep(j,n-i) cout << " ";

        rep(j,i+1)
            cout << "*";
        rep(j,i)
            cout << "*";

        cout << "\n";
    }
}

void D2Q11(int n){
    rep(i,n){
        rep(j,i) cout << j + 1;

        rep(j,n - i - 1)
            cout << " ";
        rep(j,n - i - 1)
            cout << " ";
        
        repr(j,i - 1) cout << j + 1;

        cout << "\n";
    }
}


void D2Q12(int n){
    repr(i,n - 1){
        rep(j,i) cout << j + 1;

        rep(j,n - i - 1)
            cout << " ";
        rep(j,n - i - 1)
            cout << " ";

        repr(j,i - 1) cout << j + 1;
        
        cout << "\n";
    }
}


// ##################################################################
 
//                          DAY : 3

// ##################################################################

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

D2Q5(5);

}