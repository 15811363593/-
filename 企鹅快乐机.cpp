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
	cout<<"�����ֻ�alpha0.0.1,�粩�Ȩ����"<<endl<<"������2��δ֪��(x,y).."<<endl; 
	while(1==1){
		cin>>x>>y;
		cout<<"a1"<<x<<"+"<<"b1"<<y<<"=c1"<<endl<<"a2"<<x<<"+"<<"b2"<<y<<"=c2"<<endl<<"�밴�˸�ʽ�ֱ�����a1,b1,c1,a2,b2,c2.."<<endl;
		cin>>a1>>b1>>c1>>a2>>b2>>c2;
		cout<<"����Ϊ"<<endl; 
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
		cout<<endl<<"����:"<<endl;
		D=aaa(a1,b1,a2,b2);
		Dx=aaa(c1,b1,c2,b2);
		Dy=aaa(a1,c1,a2,c2);
		cout<<"D="<<D<<endl<<"Dx="<<Dx<<endl<<"Dy="<<Dy<<endl<<endl<<"���:"<<endl<<x<<"="<<Dx/D<<endl<<y<<"="<<Dy/D<<endl;
		freopen("�����ֻ�.log","w",stdout);
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
    	cout<<"�����ѽ���"<<endl; 
	}
	return 0;
}
