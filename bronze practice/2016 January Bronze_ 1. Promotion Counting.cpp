#include <iostream>

using namespace std;

int main() {

    int bb;
    int ba;

    int sb;
    int sa;
    
    int gb;
    int ga;
    
    int pb;
    int pa;


    cin >> bb >> ba >> sb >> sa >> gb >> ga >> pb >> pa;


    int gold_to_plat = pa - pb;

    int silver_to_gold = ga + gold_to_plat - gb;

    int bronze_to_silver = sa + silver_to_gold - sb;

    cout << gold_to_plat << endl << silver_to_gold << endl << bronze_to_silver;


}