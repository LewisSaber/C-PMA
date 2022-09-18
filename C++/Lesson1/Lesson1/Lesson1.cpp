
#include"Cat.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
 
    Cat family[5];
    for (int i = 0; i < 5; i++)
    {
        
        family[i].Set_Name("1");
        family[i].Set_Age(i);
    }
    for (int i = 0; i < 5; i++)
    {
        family[i].Out();
    }
   /* Cat Tom;
    Cat Jak(5, "Jak");
    Jak.Meow(5);
    Cat Sed(Jak);
    Tom.Out();
    Jak.Out();
    Sed.Out();
    Tom.Set_Age(2);
    Jak.Set_Age(1);
    Sed.Set_Age(-1);
    cout<< "Change" <<endl;
    Tom.Out();
    Jak.Out();
    Sed.Out();
    cout << "Tom.Get_Age()";
    */
    return 0;
}
