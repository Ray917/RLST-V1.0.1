#include<iostream>
#include<string>
using namespace std;
string t,c;
char b[1001],x7[15]={'p','r','i','n','t','f',' ',char(34),char(92),'0','3','3','c',char(34)};
int s;
void start(){
	b[0]='x';b[1]='d';b[2]='g';b[3]='-';b[4]='o';b[5]='p';b[6]='e';b[7]='n';b[8]=' ';
}
int main(){
	system(x7);
	cout<<"Ray Group Linux System Tools [Version 1.0.1.10C03300202.3] for 64-bit."<<endl;
	cout<<"Copyright 2020 Ray Group. All rights reserved."<<endl;
	while(1){
		cout<<endl<<">> ";
		getline(cin,t);
		s=t.size();
		if(t.substr(0,7)!="python "&&
			t.substr(0,4)!="g++ "&&
			t.substr(0,5)!="bash "&&
			t.substr(0,4)!="pip "&&
			t.substr(0,8)!="install "&&
			t.substr(0,6)!="where "&&
			t.substr(0,6)!="print "&&
			t.substr(0,4)!="net "&&
			t.substr(0,5)!="sudo "&&
			t.substr(0,7)!="update "&&
			t.substr(0,6)!="start "&&
			t.substr(0,6)!="baidu "&&
			t.substr(0,9)!="bilibili "&&
			t.substr(0,11)!="translate::"){
				for(int i=0;i<s;i++)if(t[i]>='A'&&t[i]<='Z')t[i]+=('a'-'A');
		}
		if(s>512){
			cout<<"Error: Your code is too long."<<endl;
			cout<<"System can not execute your code because it is too long."<<endl;
		} 
		else if(t=="bash")system("bash");
		else if(t.substr(0,5)=="bash "){
			for(int i=5;i<s;i++)b[i-5]=t[i];
			system(b);
		}
		else if(t=="g++")system("g++");
		else if(t=="pip")system("pip");
		else if(t=="python")system("python"); 
		else if(t=="g++")system("g++");
		else if(t=="net")system("net");
		else if(t.substr(0,8)=="install "){
			c="sudo apt install ";
			for(int i=0;i<17;i++)b[i]=c[i];
			for(int i=8;i<=s;i++)b[i+9]=t[i];
			system(b);
		}
		else if(t.substr(0,7)=="update "){
			c="sudo apt update ";
			for(int i=0;i<16;i++)b[i]=c[i];
			for(int i=7;i<=s;i++)b[i+9]=t[i];
			system(b);
		}
		else if(t=="exit"){
			system(x7);
			return 0;
		}
		else if(t=="help"){
			cout<<"RLST [Version 1.0.1.10C03300202.3] for 64-bit x64 AMD64."<<endl;
			cout<<"Have any questions please E-mail us: ray_group@126.com"<<endl;
			cout<<"Author E-mail: tsangjr@163.com"<<endl;
		} 
		else if(t=="cls")system(x7); 
		else if(t.substr(0,5)=="ping "||
			t.substr(0,4)=="net "||
			t.substr(0,5)=="sudo "||
			t.substr(0,7)=="python "||
			t.substr(0,4)=="pip "||
			t.substr(0,4)=="g++ "){
				for(int i=0;i<s;i++)b[i]=t[i];
				system(b);
		} 
		else if(t=="rlst"){
			cout<<"Ray Group Linux System Tools [Version 1.0.1.10C03300202.3] for 64-bit."<<endl;
			cout<<"Copyright 2020 Ray Group. All rights reserved."<<endl;
		}
		else if(t.substr(0,6)=="where "){
			c="whereis ";
			for(int i=0;i<8;i++)b[i]=c[i];
			for(int i=6;i<=s;i++)b[i+2]=t[i];
			system(b);
		}
		else if(t=="shutdown")system("shutdown -h now");
		else if(t=="shutdown::reset"||t=="shutdown::restart")system("shutdown -r now");
		else if(t.substr(0,6)=="print "){
			for(int i=6;i<=s;i++)cout<<t[i];
			cout<<endl;
		}
		else if(t=="translate")system("xdg-open https://translate.google.cn/"); 
		else if(t.substr(0,17)=="translate::zh-cn "||t.substr(0,17)=="translate::zh-CN "){
			c="xdg-open  https://translate.google.cn/#view=home&op=translate&sl=auto&tl=zh-CN&text=";
			c[9]=char(34);
			t+=char(34);
			for(int i=0;i<84;i++)b[i]=c[i];
			for(int i=17;i<=s+1;i++)b[i+67]=t[i];
			system(b);
		}
		else if(t.substr(0,14)=="translate::en "){
			c="xdg-open  https://translate.google.cn/#view=home&op=translate&sl=auto&tl=en&text=";
			c[9]=char(34);
			t+=char(34);
			for(int i=0;i<81;i++)b[i]=c[i];
			for(int i=14;i<=s+1;i++)b[i+67]=t[i];
			system(b);
		}
		else if(t=="bilibili")system("xdg-open https://www.bilibili.com/");
		else if(t.substr(0,9)=="bilibili "){
			c="xdg-open  https://search.bilibili.com/all?keyword=";
			c[9]=char(34);
			t+=char(34);
			for(int i=0;i<50;i++)b[i]=c[i];
			for(int i=9;i<=s+1;i++)b[i+41]=t[i];
			system(b);
		}
		else if(t=="baidu")system("xdg-open https://www.baidu.com/");
		else if(t.substr(0,6)=="baidu "){
			c="xdg-open  https://www.baidu.com/s?&ie=utf-8&wd=";
			c[9]=char(34);
			t+=char(34);
			for(int i=0;i<47;i++)b[i]=c[i];
			for(int i=6;i<=s+1;i++)b[i+41]=t[i];
			system(b);
		}
		else if(t.substr(0,6)=="start "){
			start();
			t+=char(34);
			b[9]=char(34);
			for(int i=6;i<=s+1;i++)b[i+4]=t[i];
			system(b);
		}
		else if(t=="guid")system("xdg-open https://www.guidgen.com/");
		else if(t==""||t=="\n")continue;
		else{
			cout<<"Error: '";
			for(int i=0;i<s;i++){
				if(isalnum(t[i]))cout<<t[i];
				else break;
			}
			cout<<"' was not declared in this scope."<<endl;
			cout<<"Please check your input and try again."<<endl;
		}
	}
	system(x7); 
	return 0;
}