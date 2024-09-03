// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the no : ";
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout << "*" <<i ;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<"\n";
//         i++;
//     }
// }

// output 
// 1 2 3 
// 1 2 3
// 1 2 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << n-j+1;
//             j++;
//         }
//         cout << "\n";
//         i++;

//     }
// }
// output
// Enter the number5
// 54321
// 54321
// 54321
// 54321
// 54321

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number";
//     cin>>n;
//     int i = 1;
//     int count = 0;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             count = count + 1;
//             cout<<count <<" , ";
//             j++;
//         }
//         cout << "\n";
//         i++;
//     }
// }
// output
// Enter the number4
// 1 , 2 , 3 , 4 ,
// 5 , 6 , 7 , 8 ,
// 9 , 10 , 11 , 12 , 
// 13 , 14 , 15 , 16 ,

//  #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*"<<i;
//             j++;
//         }
//         cout << "\n";
//         i++;
//     }
// }
// output
// Enter the number4
// *1
// *2*2
// *3*3*3
// *4*4*4*4

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number";
//     cin>>n;
//     int count = 0;
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             count += 1;
//             cout<<count<<" , ";
//             j++;
//         }
//         cout << "\n";
//         i++;
//     }
// }
// output
// Enter the number4
// 1 ,
// 2 , 3 ,
// 4 , 5 , 6 ,
// 7 , 8 , 9 , 10 ,

//  #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number";
//     cin>>n;
   
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         int value = i;
//         while(j<=i){
//             cout<<value;
//             value++;
//             j++;
//         }
//         cout << "\n";
//         i++;
//     }
// }
// output
// Enter the number5
// 1
// 23
// 345
// 4567

//  #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number";
//     cin>>n;
   
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<< i-j + 1 ;
//             j++;
//         }
//         cout << "\n";
//         i++;
//     }
// }

// Enter the number5
// 1
// 21
// 321
// 4321
// 54321

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n=5;
//     while(i<=n){
//         int j = 1;
        
//         while(j<=n){
//             char ch = 'A' + i - 1;
//             cout<< ch <<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n=5;
//     while(i<=n){
//         int j = 1;
        
//         while(j<=n){
//             char ch = 'A'+ j - 1 ;
//             cout<< ch <<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n=5;
//     char ch = 'A';
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<< ch <<" ";
//             ch = ch + 1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 


// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 3;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A'+i+j-2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<"\n";
//         i++;
//     }
// }

// output
// A B C 
// B C D 
// C D E 

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n= 4;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char ch = 'A'+ i - 1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<"\n";
//         i++;
//     }
// }

//output
// A
// B B
// C C C
// D D D D

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 4;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char ch = 'A'+ i + j - 2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// A 
// B C
// C D E
// D E F G

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 4;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A' + n - i;
//         while(j<=i){
//             cout<<ch<<" ";
//             ch = ch+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// D
// C D
// B C D
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1 ;
//     int n = 4;
//     while(i<=n){
//         int space = n - i;
//         while(space){
//             cout<<" "<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }

//  output
//       *
//     * *
//   * * *
// * * * *


// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 5 ;
//     while(i<=n){
//         int j = 1;
//         int va = n - i;
//         while(j<=va){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 4;
//     while(i<=n){
//         int space = i-1 ;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         int start = n - i + 1;
//         while(j<=start){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }

// output
// ****
//  ***
//   **
//    *

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 5;
//     while(i<=n){
//         int space = i - 1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         int start = n - i + 1;
//         while(j<=start){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
//  output
//  11111
//   2222
//    333
//     44
//      5


// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 4;
//     while(i<=n){
//         int space = n - i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
//    1
//   22
//  333
// 4444 

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 4;
//     while(i<=n){
//         int space = i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         int start = n - i + 1;
//         while(j<=start){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// output
// 1234
//  123
//   12
//    1


// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 4;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<j;
//             j++;
//         }

//         int start = i - 1;
//         while(start){
//             cout<<start;
//             start--;
//         }

//         cout<<endl;
//         i++;
//     }
// }
// output
//    1
//   121
//  12321
// 1234321 

#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n = 5;
    while(i<=n){
        int j = 1;
        int start = n - i + 1;
        while(j<=start){
            cout<<j;
            j++;
        }
        int space = i-1;
        while(space){
            cout<<"*";
            space--;
        }
        int secondspace = i -1;
        while(secondspace){
            cout<<"*";
            secondspace--;
        }
        int k = 1;
        int second = n - i + 1;
        while(k<=second){
            int l = second-k+1;
            cout<<l;
            k++;
        }
        cout<<endl;
        i++;
    }
}

output
1234554321
1234**4321
123****321
12******21
1********1
