#include <iostream>
using namespace std;
 
class Target {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    Target()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend class declaration
    friend class F;
};
 
// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
    void display(Target& t)
    {
        cout << "The value of Private Variable = " << t.private_variable << endl;
        cout << "The value of Protected Variable = " << t.protected_variable <<endl;
    }
};
 
// Driver code
int main()
{
    Target t;
    F fri;
    fri.display(t);
    return 0;
}

