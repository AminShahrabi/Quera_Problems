#include <bits/stdc++.h>

// shush gharbi

using namespace std;

int main()
{	
	int n, s, buy, copy, balance;
	string temp, temp2, both = "";
	
	cin >> n;	
	for (int i = 0; i < n; i++){
		balance = 0;
		cin >> s;
		
		for (int j = 0; j < s; j++){
			buy = 0;
			copy = 0;
			cin >> temp >> temp2;
			if (temp == "buy_one"){
				buy++;
			}
			else copy++;
			
			if (temp2 == "buy_one"){
				buy++;
			}
			else copy++;
			
			if (buy == 1 && balance == 0){
				balance++;
			}
			else if (copy > 0){
				balance = balance * 2;
			}
			else balance++;
		
		
	}
	cout << balance << endl;
}
}
