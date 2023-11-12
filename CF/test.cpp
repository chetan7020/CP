#include<bits/stdc++.h>

using namespace std;

int minimize_families_to_hotel(vector<vector<int>>& visited_families) {
  // Initialize the number of families to be sent to the hotel.
  int families_to_hotel = 0;

  // Create a vector to keep track of the families that have already been assigned a lodging.
  vector<bool> assigned_families(visited_families.size(), false);

  // Iterate over the families in reverse order.
  for (int i = visited_families.size() - 1; i >= 0; i--) {
    // If the family has not already been assigned a lodging, try to assign it to a lodging that it has not already visited.
    if (!assigned_families[i]) {
      for (int j = 0; j < visited_families[i].size(); j++) {
        if (!assigned_families[visited_families[i][j]]) {
          // Assign the family to the lodging.
          assigned_families[i] = true;
          assigned_families[visited_families[i][j]] = true;
          break;
        }
      }

      // If the family could not be assigned a lodging, it must be sent to the hotel.
      if (!assigned_families[i]) {
        families_to_hotel++;
      }
    }
  }

  return families_to_hotel;
}

// Example usage:

int main() {
  // First input

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  
  vector<vector<int>> visited_families1 = {{1, 2, 3},
                                          {2, 3, 4},
                                          {3, 4, 0},
                                          {4, 0, 1},
                                          {0, 1, 2}};

  int families_to_hotel1 = minimize_families_to_hotel(visited_families1);

  cout << families_to_hotel1 << endl; // 0

  // Second input
  vector<vector<int>> visited_families2 = {{2, 3, 4},
                                          {2, 3, 4},
                                          {0, 1},
                                          {0, 1},
                                          {0, 1}};

  int families_to_hotel2 = minimize_families_to_hotel(visited_families2);

  cout << families_to_hotel2 << endl; // 0

  // Third input
  vector<vector<int>> visited_families3 = {{2, 3, 4},
                                          {2, 3, 4},
                                          {0, 1},
                                          {0, 1, 2},
                                          {0, 1, 2}};

  int families_to_hotel3 = minimize_families_to_hotel(visited_families3);

  cout << families_to_hotel3 << endl; // 1

  return 0;
}
