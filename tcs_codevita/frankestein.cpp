#include <bits/stdc++.h>
using namespace std;

vector<string> splitIngredients(const string &s) {
    vector<string> parts;
    string cur = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '=') continue; // skip '='
        if (s[i] == '+') {
            if (!cur.empty()) parts.push_back(cur);
            cur.clear();
        } else {
            cur += s[i];
        }
    }
    if (!cur.empty()) parts.push_back(cur);
    return parts;
}

int orbsForpotion(vector<string> potions, vector <string> ingredients, int index){
    string name = potions[index];
    vector<string> parts = splitIngredients(ingredients[index]);
    int orbCount = parts.size()-1;

    for (int i = 0; i < parts.size(); i++)
    {
        for (int j = 0; j < potions.size(); j++)
        {
            if (potions[j]==parts[i]){
                orbCount+=orbsForpotion(potions, ingredients, j);
            }
        }
        
    }
    return orbCount;
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    vector<string> potions(n);
    vector<int> orbs(n);
    vector<string> ingredients(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        string potion = "";
        int k;
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] == '=')
            {
                k = j;
                break;
            }
            else
            {
                potion += a[i][j];
            }
        }
        potions[i] = (potion);
        string ingredient = "";
        while (k < a[i].size())
        {
            ingredient += a[i][k];
            k++;
        }
        ingredients[i] = (ingredient);
    }
    
    

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<potions[i]<<" "<<ingredients[i]<<endl;
    // }

    string requiredPotion;
    cin >> requiredPotion;

    vector<string> pIngredient;
    for (int i = 0; i < n; i++)
    {
        orbs[i] = orbsForpotion(potions, ingredients, i);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << orbs[i] << endl;
    // }

    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (potions[i] == requiredPotion)
        {
            if (result == -1)
            {
                result = orbs[i];
            }
            else
            {
                result = min(result, orbs[i]);
            }
        }
    }
    cout << result << endl;

    return 0;
}