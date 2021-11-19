// Veri Yapıları Dersi 2. Ödev
// Ödevin Sorusu PDF Şeklinde Bulunmakta


#include <iostream>
#include <string>

using namespace std;


struct NStack {
	int data;
	struct NStack *prev;
};


struct CStack {
	char data;
	struct CStack *prev;
};


int charTint(char data){
	switch(data){
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
	}
}



string operator * (string a, unsigned int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}


int main(){
	NStack *nhead = NULL, *ntail = NULL, *nptr = NULL, *nptr1 = NULL, *nptr2 = NULL;
	CStack *chead = NULL, *ctail = NULL, *cptr = NULL, *cptr1 = NULL, *cptr2 = NULL;
	
	string girdi, buffer, buffer1;
	cin >> girdi;
	
	for(int i = 0; i<girdi.length(); i++){
		
		if(48 < girdi[i] && girdi[i] < 58){
			
			if(nhead == NULL){
				
				nhead = new NStack;
				nhead->data = charTint(girdi[i]);
				nhead->prev = NULL;
			}else if(ntail == NULL){
					
					ntail = new NStack;
					ntail->data = charTint(girdi[i]);
					ntail->prev = nhead;
			}else {
					
				nptr = new NStack;
				nptr->prev = ntail;
				nptr->data = charTint(girdi[i]);
				
				ntail = nptr;
			}
		}else {
			
			if(chead == NULL){
				
				chead = new CStack;
				chead->data = girdi[i];
				chead->prev = NULL;
			}else if(ctail == NULL){
					
				ctail = new CStack;
				ctail->data = girdi[i];
				ctail->prev = chead;
			}else {
					
				cptr = new CStack;
				cptr->data = girdi[i];
				cptr->prev = ctail;
					
				ctail = cptr;
			}
			
		}
	}
	
	
	
	
	while(ctail->data == ']')
		ctail = ctail->prev;
	
	
	
	
	if(ntail == NULL)
		ntail = nhead;
	
	
	
	
	
	nptr = ntail;
	cptr1 = cptr2 = cptr = ctail;
	
	// 2[ab3[cd4[ef]]]
	
	
	
	while(nptr != NULL){
		
		cptr = cptr1;
			
		while(cptr->data != '['){
					
			buffer += cptr->data;
					
			cptr = cptr->prev;
		}				
			
		cptr1 = cptr->prev;	
			
		buffer = buffer * nptr->data;
				
			
		nptr = nptr->prev;
	}
	
	cout << buffer;
	
	
	return 0;
}
