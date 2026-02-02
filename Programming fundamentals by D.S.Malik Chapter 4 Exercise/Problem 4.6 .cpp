// 6. Cookies Boxes Containers
#include <iostream>
using namespace std;

int main()
{
    int totalCookies, cookiesPerBox, boxesPerContainer;
    int fullBoxes, fullContainers, leftoverCookies, leftoverBoxes;
    
    cout << "Enter total cookies: ";
    cin >> totalCookies;
    cout << "Enter cookies per box: ";
    cin >> cookiesPerBox;
    cout << "Enter boxes per container: ";
    cin >> boxesPerContainer;
    
    fullBoxes = totalCookies / cookiesPerBox;
    leftoverCookies = totalCookies % cookiesPerBox;
    
    fullContainers = fullBoxes / boxesPerContainer;
    leftoverBoxes = fullBoxes % boxesPerContainer;
    
    cout << "Boxes needed: " << fullBoxes << endl;
    cout << "Containers needed: " << fullContainers << endl;
    cout << "Leftover cookies: " << leftoverCookies << endl;
    cout << "Leftover boxes: " << leftoverBoxes << endl;
    
    return 0;
}
