#include <bits/stdc++.h>
#include <assert.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int M,t2,t3,t4;
    cin>>M>>t2>>t3>>t4;
    multimap<int, int, greater<int> > m;
    for (int i = 0; i < M; ++i){
		int nIngrediants;
		cin>>nIngrediants;
		string str;
		for (int j = 0; j < nIngrediants; ++j)
			cin>>str;
		m.insert({nIngrediants, i});
	}
	
	int nt3 = 0, nt2 = 0, nt4 = 0;
	int D = 0;
	int Q = 0;
	
	Q = M/4;
	M = M % 4;
	if(Q > t4) M += 4*(Q-t4), D += t4, nt4 = t4;
	else D += Q, nt4 = Q;
	
	Q = 0;
	Q = M/2;
	M = M % 2;
	if(Q > t2) M += 2*(Q-t2), D += t2, nt2 = t2;
	else D += Q, nt2 = Q;
	
	
	
	
	Q = 0;
	Q = M/3;
	M = M % 3;
	if(Q > t3) M += 3*(Q-t3), D += t3, nt3 = t3;
	else D += Q, nt3 = Q;
	
	
	

	
	cout<<D<<endl;
	auto it = m.begin();
	
	for (int i = 0; i < nt4; ++i){
		cout<<"4";
		for (int j = 0; j < 4; ++j){
			cout<<" "<<(*it).second;
			it++;
		}if(i < nt4-1) cout<<endl;
	}
	
	if(nt2 && nt4) cout<<endl;
	for (int i = 0; i < nt2; ++i){
		cout<<"2";
		for (int j = 0; j < 2; ++j){
			cout<<" "<<(*it).second;
			it++;
		}
		if(i < nt2-1) cout<<endl;
	}
	
	
	
	if(nt3 && (nt2 || nt4)) cout<<endl;
	for (int i = 0; i < nt3; ++i){
		cout<<"3";
		for (int j = 0; j < 3; ++j){
			cout<<" "<<(*it).second;
			it++;
		}
		if(i < nt3-1) cout<<endl;
	}
	
	
	
	
	
	
	
    return 0;
    assert(false);
}
