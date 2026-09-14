#include <iostream>
using namespace std;


class student{
	int math,physics,chemistry;
	
	public:
		// extraction operator overloading (input)
		
		friend istream& operator>>(istream& input,student& s);
		
		// insertion operator overloading (output)
		
		friend ostream& operator<<(ostream& output,student& s);
		
};
		//definition of >>
		istream& operator>>(istream& input, student& s){
			cout<<"enter math marks: ";
			input>>s.math;
			cout<<"enter physics marks: ";
			input>>s.physics;
			cout<<"enter chemistry marks: ";
			input>>s.chemistry;
			return input;
		}
		
		ostream& operator<<(ostream& output,student& s){
			output<<"\nmath"<<s.math;
			output<<"\nphysics"<<s.physics;
			output<<"\nchemistry"<<s.chemistry;
			return output;
		}
		

int main() {
    // Your code here
    student s;
    cin>>s;
    cout<<s;
    
    
    return 0;
}


