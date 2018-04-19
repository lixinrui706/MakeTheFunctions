#include <iostream>
#include <vector>
//Xinrui Li
using namespace std;

//prototypes:
bool isPositive(int number)
{
  if(number > 0)
    return true;
  else
    return false;
}
void fillWith(vector<int> &array, int number)
{
  for(int i = 0; i < array.size(); i++)
    array[i] = number;
}
void printVector(vector<int> array)
{
  for(int i = 0; i < array.size(); i++)
     cout << array[i] << " ";
}     

/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions
