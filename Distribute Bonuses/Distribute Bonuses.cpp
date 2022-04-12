using namespace std;
#include <iostream>
#include <vector>

// This function basically creates 3 "pointers", one to look at the 
// element we are going to increment, the other 2 point to the neighbouring elements

//We create a vector called "bonus" that is initialized with only 1's, that is
//the vector we are incrementing if the neghbouring elements are lower (from the
//input vector)

// To do that, we first need to check the last and first element


void distribute_bonus(vector<int> input)
{
    int n = input.size();
    int idx = n - 1;
    vector<int> bonus(n, 1);

    // See if we are to increment first element
    if (input[0] > input[1])
    {
        bonus[0]++;
    }

    //See if we should increment last element
    if (input[idx] > input[idx-1])
    {
        bonus[idx]++;
    }


    //Look at the remaining elements and compare them to neighbouring elements
    for (int i = 1; i < idx; i++)
    {
        if (input[i] > input[i+1])
        {
            bonus[i]++;
        }
        if (input[i] > input[i - 1])
        {
            bonus[i]++;
        }
    }

    //Print the vector
    cout << "[";
    
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
        {
            cout << bonus[i] << ",";
        }
        else
        {
            cout << bonus[i];
        }
        
    }
    cout << "]" << endl;
    
    

    
}




int main()
{
    vector<int> input{1, 2, 3, 2, 3, 5, 1 };

    distribute_bonus(input);

  
}

