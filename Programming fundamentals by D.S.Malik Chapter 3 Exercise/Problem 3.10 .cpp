// 10. Tree Planting
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double yardLength, treeRadius, spaceBetweenTrees;
    int numTrees;
    double totalSpace;
    
    cout << "Enter length of yard: ";
    cin >> yardLength;
    cout << "Enter radius of fully grown tree: ";
    cin >> treeRadius;
    cout << "Enter required space between trees: ";
    cin >> spaceBetweenTrees;
    
    double spacePerTree = 2 * treeRadius + spaceBetweenTrees;
    numTrees = static_cast<int>(yardLength / spacePerTree);
    totalSpace = numTrees * spacePerTree;
    
    cout << fixed << setprecision(2);
    cout << "Number of trees that can be planted: " << numTrees << endl;
    cout << "Total space occupied: " << totalSpace << endl;
    
    return 0;
}
