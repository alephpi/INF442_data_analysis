#include <iostream>
using namespace std;
#define Assignments 0.4
#define Midterm 0.15
#define Final 0.35
#define Class 0.1
int ask_score(char* which){
  int score = 0;
  cout << "Enter the score for the " << which; 
  cin >> score;
  return score;


}
int main(int argc, char const *argv[])
{
    int first_assign, second_assign, third_assign, fourth_assign, midterm, final, section_grade = 0;
    float final_grade = 0;
    
    first_assign = ask_score("first_assign. ");
    second_assign = ask_score("second_assign. ");
    third_assign = ask_score("third_assign. ");
    fourth_assign = ask_score("fourth_assign. ");
    midterm = ask_score("midterm. ");
    final = ask_score("final. ");
    section_grade = ask_score("section_grade. ");
    final_grade = Assignments * (first_assign+second_assign+third_assign+fourth_assign) / (4.0f) + Midterm * midterm + Final * final + Class * section_grade;
    cout << "The final grade is: " << final_grade << endl;
    return 0;
}
