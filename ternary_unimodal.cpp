#include <bits/stdc++.h>
using namespace std;

int main(){
	auto f = [](double x)->double{
// function ex : -x*x -x +5		
	};
	const double eps = 1e-9;
	double l = 0, r = 1e9;
	while(r - l > eps){
		double m1 = l + (r-l) / 3;
		double m2 = r - (r-l)/3;
		if(f(m1) < f(m2)) l = m1;
		else r = m2;
	}
	cout << f(l);
}
/*							maxi
					          ..
					         .  .
					        .    .
					       .      .
					      .        .
					     .          .
					    .            .
					   .              .
					  .                .
					 .                  .


if reverse function like V(ex : -x*x + ....) then reverse the l and r || comparator symbol in 
search 
*/
