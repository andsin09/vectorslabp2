/*
Name: Andrew Sinha
Date: 1/28/2025
Program: Vectors Part 2 Lab
Extra: sorting the vector in the end + using a function to print
*/

#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void printVec(vector <string> mains){

for(string main : mains){
    cout << main << ", ";
}

    cout << "" << endl;

}

int main()
{
    vector <string> mains = {"hela", "winter soldier", "cloak and dagger", "adam warlock", "captain america"};
    printVec(mains);
    
    
    
    string oMain;
    cout << "Who do you main?" << endl;
    cin >> oMain;
    mains.insert(mains.begin() + 4, oMain);
    printVec(mains);
    
    
    int remo;
    cout << "What position main do you want to remove?" << endl;
    cin >> remo;
    mains.erase(mains.begin() + (remo) );
    printVec(mains);
    
    sort(mains.begin(), mains.end());
    printVec(mains);
    
    
    cout << "                            .:-------------:                              " << endl;
    cout << "   ..                       ::.::::-:.::-==:                          ..  " << endl;
    cout << "   =*:                      :-......-::--==:                         .+.. " << endl;
    cout << "   .#%%##*:.                ................                     .=*#%*.. " << endl;
    cout << "    :%%%%%%#+:.                                              .-+##%%%%=.  " << endl;
    cout << "    .+%%%%%%%##*=:..:-++=-..:.... .........::-=-:-++*#+:..:=*#%%%%%%%%:.  " << endl;
    cout << "     .=+*#%%%%%%%%#*+:.-%%#+:+%%#=..=###+:.=#%%%+..+%%%#-.+#%%%%%#*##*=-  " << endl;
    cout << "      ..+=---=+*##%%#-.+%%#-:*%%*::+#%#=.:+###%#-.-#%%%=.=#%#*+-:.:...    " << endl;
    cout << "     ..=%%#-. ..:=#%#-:#%%*.-#%#=-#%#+:.=##+*#%#:.+%%%*:.+##*+==-::...    " << endl;
    cout << "     .:%%%*.:-+###*+=::#%#+.=%%*+#%*-.-*%%*+#%%+.:*%%#-.  ..-=+*##%%#+..  " << endl;
    cout << "     .#%%#--#%#*:.   .-%%*-:*%%%%#=.:+#%#++#%%#-.+#%%=.....:.. .=#%%#:.   " << endl;
    cout << "    .+%%%* .:#%%%#+:..=%%*.:#%%#*:.=#%%*:.-#%%*-.+%%%######-..:#%%%%=.    " << endl;
    cout << "    -%%%#:....+%%%%%#+..=+:+###=.=*###+: :+###*:-*########-..*%%%%%*..    " << endl;
    cout << "   .#%%%%*:....-%%%%%#*=-:..                        .-+*#####%%%%%%:.     " << endl;
    cout << "   -::...      .......                                 .........::...     " << endl;
    
    
    
    
    
    
    
    return 0;
}
