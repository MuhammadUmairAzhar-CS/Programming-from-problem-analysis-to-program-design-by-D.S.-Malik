// 16. Author Royalties
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double netPrice, copiesSold;
    
    cout << "Enter net price per copy: $";
    cin >> netPrice;
    cout << "Enter estimated copies sold: ";
    cin >> copiesSold;
    
    double option1 = 5000 + 20000;
    double option2 = netPrice * copiesSold * 0.125;
    double option3;
    if (copiesSold <= 4000)
        option3 = netPrice * copiesSold * 0.10;
    else
        option3 = netPrice * 4000 * 0.10 + netPrice * (copiesSold - 4000) * 0.14;
    
    cout << fixed << setprecision(2);
    cout << "Option 1: $" << option1 << endl;
    cout << "Option 2: $" << option2 << endl;
    cout << "Option 3: $" << option3 << endl;
    
    if (option1 >= option2 && option1 >= option3)
        cout << "Best option: Option 1" << endl;
    else if (option2 >= option1 && option2 >= option3)
        cout << "Best option: Option 2" << endl;
    else
        cout << "Best option: Option 3" << endl;
    
    return 0;
}
