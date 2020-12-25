#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
double aaa(double a,double b,double c,double d){
	return a*d-b*c;
}
int main(){
	double a1,b1,c1,a2,b2,c2,D,Dx,Dy;
	char x,y;
	cout<<"企鹅快乐机alpha0.0.1,苗博睿版权所有"<<endl<<"请输入2个未知数(x,y).."<<endl; 
	while(1==1){
		cin>>x>>y;
		cout<<"a1"<<x<<"+"<<"b1"<<y<<"=c1"<<endl<<"a2"<<x<<"+"<<"b2"<<y<<"=c2"<<endl<<"请按此格式分别输入a1,b1,c1,a2,b2,c2.."<<endl;
		cin>>a1>>b1>>c1>>a2>>b2>>c2;
		cout<<"方程为"<<endl; 
		if(b1>=0){
			cout<<a1<<x<<"+"<<b1<<y<<"="<<c1<<endl;
		}else{
			cout<<a1<<x<<b1<<y<<"="<<c1<<endl;
		}
		if(b2>=0){
			cout<<a2<<x<<"+"<<b2<<y<<"="<<c2<<endl;
		}else{
			cout<<a2<<x<<b2<<y<<"="<<c2<<endl;
		}
		cout<<endl<<"过程:"<<endl;
		D=aaa(a1,b1,a2,b2);
		Dx=aaa(c1,b1,c2,b2);
		Dy=aaa(a1,c1,a2,c2);
		cout<<"D="<<D<<endl<<"Dx="<<Dx<<endl<<"Dy="<<Dy<<endl<<endl<<"结果:"<<endl<<x<<"="<<Dx/D<<endl<<y<<"="<<Dy/D<<endl;
		freopen("企鹅快乐机.log","w",stdout);
		time_t t;
    	struct tm * lt;
    	time (&t);
    	lt = localtime (&t);
    	cout<<"#"<<lt->tm_year+1900<<"/"<<lt->tm_mon<<"/"<<lt->tm_mday<<" "<<lt->tm_hour<<":"<<lt->tm_min<<":"<<lt->tm_sec<<endl;
    	if(b1>=0){
			cout<<a1<<x<<"+"<<b1<<y<<"="<<c1<<endl;
		}else{
			cout<<a1<<x<<b1<<y<<"="<<c1<<endl;
		}
		if(b2>=0){
			cout<<a2<<x<<"+"<<b2<<y<<"="<<c2<<endl;
		}else{
			cout<<a2<<x<<b2<<y<<"="<<c2<<endl;
		}
    	cout<<"D="<<D<<endl<<"Dx="<<Dx<<endl<<"Dy="<<Dy<<endl<<x<<"="<<Dx/D<<endl<<y<<"="<<Dy/D;
    	fclose(stdout);
    	cout<<"程序已结束"<<endl; 
	}
	return 0;
}
