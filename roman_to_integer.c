int romanvalue(char s);
int romanToInt(char* s) {
    int len=strlen(s);
	int result=0,i,j;
	for(i=0;i<len;i++){
			if(romanvalue(s[i])>=romanvalue(s[i+1])){
				result=result+romanvalue(s[i]);
			}
			else{
				result+=romanvalue(s[i+1])-romanvalue(s[i]);
				i++;
			}
			
	}
	return result;
}
int romanvalue(char s){
	if(s=='M'){
		return 1000;
	}
	else if(s=='I'){
		return 1;
	}
	else if(s=='V'){
		return 5;
	}
	else if(s=='X'){
		return 10;
	}
	else if(s=='L'){
		return 50;
	}
	else if(s=='C'){
		return 100;
	}
	else if(s=='D'){
		return 500;
	}
 return 0;
}
