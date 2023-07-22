#include<iostream>
using namespace std;

int main()
{
	string temp;
	int z, zz, y, yy, x, xx, w, ww;
	cin>>temp>>w;
	cin>>x>>temp>>y>>temp>>z;
	cin>>temp>>ww;
	cin>>xx>>temp>>yy>>temp>>zz;

	z = zz-z;
	y = yy-y;
	x = xx-x;
	w = ww-w;

	if(z<0){
		z = z+60;
		y--;
	}
	if(y<0){
		y = y+60;
		x--;
	}
	if(x<0){
		x = x+24;
		w--;
	}
	cout<<w<<" "<<"dia(s)"<<endl;
	cout<<x<<" "<<"hora(s)"<<endl;
	cout<<y<<" "<<"minuto(s)"<<endl;
	cout<<z<<" "<<"segundo(s)"<<endl;

	return 0;

}
