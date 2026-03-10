# include<iostream>
using namespace std;


class Student{

    string name;
     int rollNumber;
     float marks;
     char grade;


     public:

        void setname(string n){
            name = n;
        }
         void setrollNumber(int r){
           rollNumber = r;
        }
         void setmarks(float m){
            marks = m;
        }
         void setgrade(char g){
            grade = g;
        }




        string getname(){
            return name;
        }
        int getrollNumber(){
          return rollNumber;
        }

         float getmarks(){
            return marks;
        }
        
        char getgrade(){
            return grade;
        }


        void calculateGrade(){

            if (marks >=90 && marks<=100)
                grade ='A';

                else if (marks>=80)
                    grade='B';

                    else if (marks>=70)
                    grade='C';

                        else if (marks>=60)
                        grade='D';

                            else
                            grade='F';

        }



        void display(){

            cout <<"name "<<name<<endl;
            cout <<"rollnumber "<< rollNumber<<endl;
            cout <<"marks "<<marks<<endl;
            cout <<"grade "<<grade<<endl;


        }


};

int main(){

    Student s;
    int choice =0;
    int roll;
    string name;
    float marks;

    while (choice !=4){

        cout << "1. Accept info"<<endl;
        cout << "2. display info"<<endl;
        cout << "3. grade calculate"<<endl;
        cout << "4. exit programe"<<endl;
        cout << "Enter your choice"<<endl;
        
        cin>>choice;

        switch(choice){


            case 1:
                cout <<"enter your name"<<endl;
                cin>>name;

                cout <<"Enter rollnumber"<<endl;
                cin>>roll;

                cout <<"Enter marks"<<endl;
                cin>>marks;

                s.setname(name);
                s.setrollNumber(roll);
                s.setmarks(marks);

                break;


                case 2:
                    s.display();
                    break;


                case 3:
                    s.calculateGrade();
                    break;

                case 4:
                     cout<<"Exit the problem"<<endl;
                     break;


                default :
                    cout <<"Invalid choice"<<endl;

        }


    }



    return 0;
}