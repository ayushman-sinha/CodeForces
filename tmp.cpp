#include<bits/stdc++.h>
using namespace std;
string pigLatin(string s){
    string ans = "",w="";
    s+=" ";//to handle last word
    
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){//if not space then we build each word
            w+=s[i];
        }
        else{
            string tmp="";
            int j=0;
            bool f=false;
            if(isupper(w.front()))//if first letter is capital then we make flag true
                f=true;
            transform(w.begin(),w.end(),w.begin(),::tolower);//convert to lower case
            while(j<w.length() && w[j]!='a' && w[j]!='e' && w[j]!='i' && w[j]!='o' && w[j]!='u'){//find first vowel
                tmp+=w[j];
                j++;
            }

            if(j==w.length()){//if no vowel found
                if(f)//if first letter of orignal word was capital then we make the first letter of new word capital
                  w[0]=toupper(w.front());                    
                ans+=w.substr(0);
                ans.push_back('-');
                ans+="ay ";
            }
            else{        
                if(f)//if first letter of orignal word was capital then we make the first letter of new word capital
                    w[j]=toupper(w[j]);                       
                ans+=w.substr(j);
                ans.push_back('-');
                ans+=tmp+"ay ";
            }       
            w="";//clear word
        }
    }

    return ans;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);//input string with spaces
    cout<<"Pig Latin Form : "<<pigLatin(s);
    return 0;

}