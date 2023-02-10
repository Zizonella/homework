#include "Weapon.h"

int main()
{
    try
    {
        Weapon weapon;
        weapon.Fire();
        weapon.Reload();
        weapon.Reload();
    }
    // catch (const std::exception &e)
   
    catch (NoAmmoException &e)
    {
        cout << "Error: " << e.what() << '\n'; // this will give libc++abi: terminating with uncaught exception of type int [1]    71620 abort      ./a.out
    }
     //  Exercise 3
    catch (MagazineFullException e)
    {
        cout << "Error : " << e.what() << endl;
    }
    return 0;
}