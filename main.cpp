#include <iostream>
#include <string>

using namespace std;

class BucksClass{
public:
        BucksClass (){
        cout << "this will get printied automagicaly \n";
        cout << "nova linha \n";
         cout << "Mais uma linha";

        }

};


int main()
{
   BucksClass bo;


    return 0;
}

/**
    int a;

    int b;

    int sum;
    cout << "Enter a number hoss! \n";
    cin >> a;
    cout << "Enter another number \n";
    cin >> b;
    sum = a + b;
    cout << "the sum of those numbers is "<< sum << endl;

   if (a==b){
        cout <<"O primeiro e diferente do segundo"<< endl;
            }
*/

/**
* void printSomething ();
* printSomething();
*    void printSomething (){
*        cout << "oooo i am text on he screen"<< endl;
*
*   }
*/

/**
int a;
void printCrap(int x){
    cout << "buckys favortie number is " << x << endl;
}
int main()
{
    a = 12;
    printCrap(a);

    return 0;
}
*/

/**
int addNumbers (int x, int y){
    int answer = x + y;
    return answer;

}

int main()
{
   cout << addNumbers(43, 86);
    return 0;
}
*/

/**
class BucksClass{
    public:
        void coolSaying(){
            cout << "preachin to the choir" << endl;
        }
};


int main()
{
    BucksClass buckysObjet;
    buckysObjet.coolSaying();
    return 0;
}
*/

/** >>> Má prática<<<
class BucksClass{
public:
    void setName (string x){
        name = x;
        }
        string getName (){
        return name;
         }
    private:
        string name;
};


int main()
{
   BucksClass bo;
   bo.setName("Sir Buck Roberts");
   cout << bo.getName();
    return 0;
}
*/
