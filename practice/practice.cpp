#include <iostream>

using namespace std;

/*
//for
****
****
**** 
int main(){
    int number_one , number_two;
    cin >> number_one >> number_two;
    for (int x = 1;x <= number_one;x++){
        for (int y = 1;y<=number_two;y++){
            cout << "*";
        }
        cout<<endl;
    }
}
*/

/*
for
*****
*   *
*****
int main(){
    int number_one , number_two ;
    cin >> number_one >> number_two;
    for(int x = 1;x<=number_one;x++){

        for(int y = 1;y<=number_two;y++){
            if(y==1 || y==number_two || x==1 || x==number_one){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

/*
for two number
****
***
**
*
int main(){
    int number_one , number_two;
    cin>>number_one>>number_two;
    for(int x = 1;x<=number_one;x++){
        for(int y=1;y<=number_two;y++){
                cout<<"*";
                
        }
        cout<<endl;
        number_two = number_two-1;
    }
}


for one number 
***
**
*
int main(){
    int number;
    cin>>number;
    for (int x=number;x>=1;x--){
        for (int y=1;y<=x;y++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}



//half pyramid after 180 rotation
   *
  **
 ***
****
int main(){
    int n;
    cin>>n;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n;y++){
            if(y<=n-x){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

//for half pyramid using number
1
22
333
4444

int main(){
    int n ;
    cin>>n;
    for (int x =1;x<=n;x++){

        for(int y=1;y<=x;y++){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

//for 
1
2 3
4 5 6

int main(){
    int n;
    cin>>n;
    int count = 1;
    for (int x=1;x<=n;x++){
        for(int y=1;y<=x;y++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}



//butterfly pattern

int main(){
    int n;
    cin>>n;
    for(int x = 1;x<=n;x++){
        for(int y = 1;y<=x;y++){
            cout<<"*";
        }
        int space = 2*n-2*x;
        for(int y=1;y<=space;y++){
            cout<<" ";
        }
        for(int y = 1;y<=x;y++){
            cout<<"*";
        }
        cout << endl;
    }
    for(int x = n;x>=1;x--){
        for(int y = 1;y<=x;y++){
            cout<<"*";
        }
        int space = 2*n-2*x;
        for(int y=1;y<=space;y++){
            cout<<" ";
        }
        for(int y = 1;y<=x;y++){
            cout<<"*";
        }
        cout << endl;
    }
}


//inverted pattern
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1
int main(){
    int n;
    cin>>n;
    for(int x=n;x>=1;x--){
        for(int y=1;y<=x;y++){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}


//0-1 pattern

int main(){
    int n;
    cin>>n;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=x;y++){
            if((x+y)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    
}

//rombosh
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int x=1;x<=n-i;x++){
            cout << " ";
        }
        for(int y=1;y<=n;y++){
            cout << "*" <<" ";
        }

        cout << endl;
    }
    
}


//number patterns
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=n-i;x++){
            cout<<" ";
        }
        for(int y = 1;y<=i;y++){
            cout << y << " ";
        }

        cout<<endl;
    }
}


//palindromix pattern
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
int main(){
    int  n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        for(x=1;x<=n-i;x++){
            cout<<"  ";
        }
        int k=i;
        for(;x<=n;x++){
            cout<<k--<<" ";
        }
        k=2;
        for(;x<=n+i-1;x++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}

//start pattern
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        for(x=1;x<=n-i;x++){
            cout<<"  ";
        }
        //int k =i;
        for(;x<=n;x++){
            //k--;
            cout<<"*"<<" ";
        }
        //k=2;
        for(;x<=n+i-1;x++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int k=n;k>=1;k--){
        int x;
        for(x=n-k;x>=1;x--){
            cout<<"  ";
        }
        for(;x<=k-1;x++){
            cout<<"*"<<" ";
        }
        int y= k-1;
        for(;y>=1;y--){
            cout<<"*"<<" ";
        }        
        cout<<endl;
        
    }
}


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=n-i;x++){
            cout<<"  ";
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int x=1;x<=n-i;x++){
            cout<<"  ";
        }
        for(int x=1;x<=2*i-1;x++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

//z pattern
****
  *
 *
****
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=n;x++){
            if(i==1||i==n||(i+x)==(n+1)){
                cout<<"*"<<" ";
            }else{
                cout<<"  ";
            }
        }   
        cout<<endl;
    }
}
*/
