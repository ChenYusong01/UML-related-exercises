#include<iostream>
using namespace std;
class family{
	public:
		virtual void message();
};
void family::message(){
	cout<<"��Һ�ѽ��"<<endl;
}
class Dad:public family{
	public:
		void message(){
			cout<<"���ǰְ�"<<endl;
		}
}; 
class Mom:public family{
	public:
		void message(){
			cout<<"��������"<<endl;
		}
};
void mes(family *news){
	news->message();
}
int main(){
	family Family;
	Dad dad;
	Mom mom;
	mes(&Family);
	mes(&dad);
	mes(&mom);
	
}
