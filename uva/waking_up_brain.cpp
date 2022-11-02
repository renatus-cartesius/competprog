#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<stdio.h>
#include<map>
using namespace std;

int visited[26];

int main() {
	int n,m;
	string awake, tmp;

	while(cin >> n){
		vector<string> con;
		map<char, int> mp;
		
		cin >> m;
		memset(visited, 0, sizeof(visited));

		cin >> awake;
		int x = 0;
		for(int j = 0; j < 3; j++) if (mp.find(awake[j]==mp.end()) mp[awake[j]] = x++;

		for(int i = 0; i < m; i++) {
			cin >> tmp;
			con.push_back(tmp);
		}
	}
}


