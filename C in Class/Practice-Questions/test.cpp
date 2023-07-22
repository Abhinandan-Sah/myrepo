#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="a 2b savi";
    // cout<<s[4];
    // for(i=0; i<s.size(); i++){
    //     if('a'>=s[0]<='z'){
            
    //         s[0]=s[0]-32;
    //         i++;
    //     }

    //     if(s[i] == ' '){
    //         i=i+1;
    //         if('a'>=s[i]<='z'){
    //             s[i]=s[i]-32;
    //         }

    //     }
       
    // }

    // while(i<s.size()){
    //     if('a'>=s[0]<='z'){
            
    //         s[0]=s[0]-32;
    //         i++;
    //     }
    //     i++;
        // if(s[i] == ' '){
        //     i=i+1;
        //     if('a'>=s[i]<='z'){
        //         s[i]=s[i]-32;
        //         i++;
        //     }


        // }
        // else{
        //     i++;
        // }

    // }
    int i=0;
    while(i<s.size()){
        if('a'>=s[0]<='z'){
            s[0]=s[0]-32;
            
        }
        if(s[i] == ' '){
            i++;
          if('a'>=s[i]<='z'){
             s[i]=s[i]-32;
             i++;
           }           
        }
        else{
            i++;
        }
    }
    
    cout<<endl<<s.size()<<endl;

    cout<<"string: "<<s;
    return 0;
}