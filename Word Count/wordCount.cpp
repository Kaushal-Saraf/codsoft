#include<bits/stdc++.h>
using namespace std;
int main(){
    string fileLocation;
    cout<<"Please Enter the location of the File: ";
    cin>>fileLocation;
    ifstream inFile;
    inFile.open(fileLocation);
    string str="";
    string fullstring= "";
    int noOfWords=0;
    while(getline(inFile,str))
    {  
        fullstring+=str+" ";
    }
    int i=0;
    int totalLenght= fullstring.size();
    while(i<=totalLenght)
    {
        if(fullstring[i]==' '){
            noOfWords++;
        }
        i++;
    }
    cout<<"Total number of words in this file is : "<<noOfWords<<endl;
    system("pause");
    return 0;
}
