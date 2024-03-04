#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; string s;
	//get data from user
	cout << "How many beads u have in ur string? ";
	cin >> n;
	cout << "Enter ur string : ";
	cin >> s;

	s =" " + s + s + " "; //make it like a circle
	int lft[1000][2]; // 0 => red,1 => blue 
	int rgt[1000][2]; // i decide to make it 1000 to have long string that i can

	//left side
	lft[0][0] = lft[0][1] = 0; //make red and blue count 0 cuz at first we dont have any of them.
	for (int i = 1; i <= n + n; i++) {
		if (s[i] == 'r') lft[i][0] = lft[i - 1][0] + 1, lft[i][1] = 0; //check its red or not, if its red count it (means +1)
		else if (s[i] == 'b') lft[i][1] = lft[i - 1][1] + 1, lft[i][0] = 0; ////check its blue or not, if its blue count it (means +1)
		else if (s[i]=='w') lft[i][0] = lft[i - 1][0] + 1, lft[i][1] = lft[i - 1][1] + 1; //if its white, we add it to both of them (means red & blue)
	}
	//right side
	rgt[n + n + 1][0] = rgt[n + n + 1][1] = 0; //make red and blue count 0 cuz at first we dont have any of them.
	for (int i = n + n; i >= 1; i--) {
		if (s[i] == 'r') rgt[i][0] = rgt[i + 1][0] + 1, rgt[i][1] = 0; 
		else if (s[i] == 'b') rgt[i][1] = rgt[i + 1][1] + 1, rgt[i][0] = 0;
		else if (s[i] == 'w') rgt[i][0] = rgt[i + 1][0] + 1, rgt[i][1] = rgt[i + 1][1] + 1;
	}
	
	int ans = 0;
	for (int i = 1; i <= n + n; i++) {
		ans = max(ans, max(lft[i][0], lft[i][1]) + max(rgt[i + 1][0], rgt[i + 1][1])); // here we add Max of left and right together
	}
	ans = min(ans, n);
	cout << "____________________________________________\nMax beads that u can collect is : " << ans << endl;
}