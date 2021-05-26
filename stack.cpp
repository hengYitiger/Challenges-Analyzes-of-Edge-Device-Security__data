//
//  stack0.c
//  
//
//  Created by  on .
//
//

#include <iostream>   
using namespace std;   

int main(int argc, const char *artv[])   
{   

 volatile int modified;
    char buffer[64];
    modified = 0;
    
	cout << "input buffer: " << endl;   
    cin >> buffer;   
    //gets(buffer);
    
    if (modified != 0) {
        
		cout << "You have changed the 'modified' variables!\n" << endl;   
		
    } else {
        
		cout << "Try again?!\n " << endl;   


	
    }



return 0;   
} 









