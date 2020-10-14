#include<iostream>
using namespace std;
void base(int x)
{   
    int i,comp;
    comp=x;
	string str1[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"};
	string str2[]={"","Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty","Hundred"};
	string ch="Hundred" , ch2 = "Thousand";
	for(i=0;i<=19999;++i){
		// for number with no teens
	if(x<=99&&x>=20){
		int c,temp;
		c= x%10;
		x=x/10;
		temp=x%10;
		if(c==0){
			cout<<comp<<"- "<<str2[temp]<<endl;
		}
		if(c!=0){
			cout<<comp<<"- "<<str2[temp]<<" "<<str1[c]<<endl;
		}
	}
	else if(x>=100&&x<=999){
		int hun,c,temp,temp2,temp3;
		temp3 = x;
		c= temp3%10; // c is giving us the one's place digit.
		hun = temp3%100;
		temp3 = temp3/10; 
		temp=temp3%10; // temp is giving us the ten's place digit.
		temp3=temp3/10;
		temp2= temp3%10; // temp2 is giving us the hundredth's place digit.
		if(c==0&&temp==0){
			cout<<x<<"- "<<str1[temp2]<<" "<<ch<<endl;
		}
		else if(temp==0&&c != 0){
			cout<<x<<"- "<<str1[temp2]<<" "<<ch<<" "<<str1[c]<<endl;
		}
		else if(c==0&&temp!=0){
			cout<<x<<"- "<<str1[temp2]<<" "<<ch<<" "<<str2[temp]<<endl;
		}
		else if(hun>=11&&hun<=19){
			cout<<x<<"- "<<str1[temp2]<<" "<<ch<<" "<<str1[hun]<<endl;
		}
		else if(hun>=21&&hun<=99){
			cout<<x<<"- "<<str1[temp2]<<" "<<ch<<" "<<str2[temp]<<" "<<str1[c]<<endl;
		}
	}
	else if(x>=10000&&x<=10999){
		int hun,c,temp,temp2,temp3;
		temp3 = x;
		c= temp3%10; // c is giving us the one's place digit.
		hun = temp3%100;
		temp3 = temp3/10; 
		temp=temp3%10; // temp is giving us the ten's place digit.
		temp3=temp3/10;
		temp2= temp3%10; // temp2 is giving us the hundredth's place digit.
		if(c==0&&temp==0&&temp2==0){
			cout<<x<<"- "<<"Ten"<<" "<<ch2<<" "<<endl;
		}
		else{
			cout<<x<<"- "<<"Ten"<<" "<<ch2<<" ";
			if(c==0&&temp==0){
			cout<<str1[temp2]<<" "<<ch<<endl;
			}
		else if(temp==0&&c != 0){
			cout<<str1[temp2]<<" "<<ch<<" "<<str1[c]<<endl;
			}
		else if(c==0&&temp!=0){
			cout<<str1[temp2]<<" "<<ch<<" "<<str2[temp]<<endl;
			}
		else if(hun>=11&&hun<=19){
			cout<<str1[temp2]<<" "<<ch<<" "<<str1[hun]<<endl;
			}
		else if(hun>=21&&hun<=99){
			cout<<str1[temp2]<<" "<<ch<<" "<<str2[temp]<<" "<<str1[c]<<endl;
			}
		}
	}
	else if(x>10999&&x<=19999){
		long ones,thous,hunds,tens,teen;
		ones = x%10;
		thous = x/1000;
		hunds = x%1000;
		hunds = hunds/100;
		tens = x%100;
		tens = tens/10;
		teen  = x%100;
		if(hunds==0&&tens==0&&ones==0)
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<endl;
		else if(hunds==0&&tens==0&&ones!=0)
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<" AND"<<str1[ones]<<endl;
		else if(hunds!=0&&tens!=0&&ones==0)
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<" "<<str1[hunds]<<" "<<ch<<" "<<str2[tens]<<endl;
		else if(hunds==0&&tens!=0&&ones!=0)
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<" AND "<<str2[tens]<<" "<<str1[ones]<<endl;			
		else if(hunds!=0&&tens==0&&ones!=0)
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<" "<<str1[hunds]<<" "<<ch<<" AND "<<str1[ones]<<endl;
		else if((hunds!=0&&tens!=0&&ones!=0)&&(teen>=11&&teen<=19))
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<" "<<str1[hunds]<<" "<<ch<<" AND "<<str1[teen]<<endl;	
		else if(hunds!=0&&tens!=0&&ones!=0)
			cout<<x<<"- "<<str1[thous]<<" "<<ch2<<" "<<str1[hunds]<<" "<<ch<<" "<<str2[tens]<<" "<<str1[ones]<<endl;				
	}
	else if(x>=1000&&x<10000){
			long c,thou,temp,temp2,temp3,teen;
			temp3 = x; 
			c = temp3%10;
			teen = x%100;
			temp3 = temp3/10;
			temp = temp3%10;
			temp3 = temp3/10;
			temp2 = temp3%10;
			temp3 = temp3 / 10;
			thou = temp3%10;
			if(c==0&&temp==0&&temp2==0){
				cout<<x<<"- "<<str1[thou]<<" "<<ch2<<endl;
			}
			else if(c!=0&&temp==0&&temp2==0){
				cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[c]<<endl;
			}
			else if(c==0&&temp!=0&&temp2==0){
				cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str2[temp]<<endl;
			}
			else if(c!=0&&temp!=0&&temp2==0){
				if(teen>=11&&teen<=19)
					cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[teen]<<endl;
				else
					cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str2[temp]<<" "<<str1[c]<<endl;
			}
			else if(c==0&&temp==0&&temp2!=0){
				cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[temp2]<<" "<<ch<<endl;
			}
			else if(c!=0&&temp==0&&temp2!=0){
				cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[temp2]<<" "<<ch<<" "<<str1[c]<<endl;
			}
			else if(c==0&&temp!=0&&temp2!=0){
				cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[temp2]<<" "<<ch<<" "<<str2[temp]<<endl;
			}
			else if(c!=0&&temp!=0&&temp2!=0){
				if(teen>=11&&teen<=19)
					cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[temp2]<<" "<<ch<<" "<<str1[teen]<<endl;
				else
					cout<<x<<"- "<<str1[thou]<<" "<<ch2<<" "<<str1[temp2]<<" "<<ch<<" "<<str2[temp]<<"-"<<str1[c]<<endl;
			}
	}
	else if(x<=19){
		cout<<x<<"- "<<str1[x]<<endl;
	}
	++comp;
    x=comp;
 }
}
int main()
{
	base(0);
}
