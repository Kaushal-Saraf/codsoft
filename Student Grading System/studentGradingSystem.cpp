#include<bits/stdc++.h>
using namespace std;
class students{
    public:
        string * name_array;
        char * grade_array;
        int studentNumber;
        int totalstudent;
    students(int size){
        totalstudent=size;
        studentNumber=0;
        name_array = new string[size];
        grade_array = new char[size];
    }
    void addStudents(string name,char grade){
        if(studentNumber<totalstudent){
            name_array[studentNumber]= name;
            grade_array[studentNumber]= grade;
            studentNumber++;
        }
        else{
            cout<<"Total Students limt exceed."<<endl;
        }
    }
    void printStudents(){
        if(studentNumber==0){
            cout<<"Please add students."<<endl;
        }
        else{
            cout<<"Name";
            for(int i=0;i<22;i++){
                cout<<" ";
            }
            cout<<"Grade"<<endl;
            for(int i=0;i<studentNumber;i++){
                cout<<name_array[i];
                int spaces = 26-(name_array[i].size());
                for(int j=0;j<spaces;j++){
                    cout<<" ";
                }
                cout<<grade_array[i]<<endl;
            }
        }
        cout<<endl;
    }
    char calculateAverage(){
        double average=0;
        char ans;
        for(int i=0;i<studentNumber;i++){
            double gradeNum = grade_array[i];
            average+=gradeNum;
        }
        ans= round(average/double(studentNumber));
        return ans;
    }
    char calculateMax(){
        char max='Z';
        for(int i=0;i<studentNumber;i++){
            if(grade_array[i]<max){
                max=grade_array[i];
            }
        }
        return max;
    }
    char calculateMin(){
        char min='A';
        for(int i=0;i<studentNumber;i++){
            if(grade_array[i]>min){
                min = grade_array[i];
            }
        }
        return min;
    }
    ~students(){
        delete[] name_array;
        delete[] grade_array;
        studentNumber =0;
        totalstudent=0;
    }
};
int main(){
    cout<<"Enter the total number of Students:"<<" ";
    int totalStudents;
    cin>>totalStudents;
    students firstclass(totalStudents);
    for(int i=0;i<totalStudents;i++) {
        string name;
        char grade;
        cout<<"Please enter the name of "<<i+1<< " student: ";
        cin>>name;
        while(name.size()>20){
            cout<<"Invalid name please enter name of less than 20 characters"<<endl;
            cout<<"Renter name: ";
            cin>>name;
        }
        cout<<"Please enter the grade of "<<i+1<< " student: ";
        cin>>grade;
        while(grade<'A' || grade>'F'){
            cout<<"Invalid grade enter the grade between A and F."<<endl;
            cout<<"Renter grade: ";
            cin>>grade;
        }
        firstclass.addStudents(name,grade);
    }
    firstclass.printStudents();
    cout<<"Average Score of all the students is: "<<firstclass.calculateAverage()<<endl;
    cout<<"Maximum Score among all the students is: "<<firstclass.calculateMax()<<endl;
    cout<<"Minimum Score among all the students is: "<<firstclass.calculateMin()<<endl;
    system("pause");
    return 0;
}