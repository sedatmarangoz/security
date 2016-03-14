#include "headers/security.h"
#include "headers/HTTPPerform.h"
#include <iostream>
#include <string>
#include <exception>
#include <stdio.h>


int main( int argc, char *argv[] )
{
	int result;
	//SHAMIR_TYPE shamirOption;

	//if (checkArgs(argc, argv) < 0) 	
	//	return -1;  
  
	//char *pwd = (char *)strdup(PWD);  
	char pwd[] = "merhaba";
	
	result = securityCheckPassword(pwd, WITHOUT_SHAMIR);
	//result = securityInitDiscEncryption(pwd, WITHOUT_SHAMIR);

	//result = securityResetDiscEncryption();

/*
////////////////////////
	string response = "";
	HTTPPerform *performer = new HTTPPerform("http://10.155.10.213:8081/server/");
	try {	
		performer->perform(SHOW,0);
 		if (performer->getError() == 1)
 			cout << "Error occured during HTTP request :" << performer->getErrorMessage() << endl;
		else 
			cout << "HTTP request OK response :" << response << endl;
	}
	
	catch(exception &e)
        {
            cout << "Exception!:" << e.what() << endl;           
        }

////////////////////////
*/	
	if (result == 0) printf("=> RESULT : Password is OK...\n");
	else printf("=> RESULT : Password is NOT OK...\n");

	//securityGetCommandLineOutput();

	return 0;
}

/*
int main(int argc, char** argv) {

	HTTPPerform *performer = new HTTPPerform("http://10.155.10.213:8080/server/");
	applications* appList;
	string response="";	
	try {			
		//appList = performer->perform(DOWNLOAD,15);	
		performer->perform(GETSHARE,response);
 		if (performer->getError() == 1)
 			cout << "Error occured during HTTP request :" << performer->getErrorMessage() << endl;
		else 
			cout << "HTTP request OK response :" << response << endl;
 		
		else if (appList->apps != NULL)
 		{
 			for(int i=0;i< appList->size; i++)
				{							
					cout << "Application "<< to_string(i) << endl;
					cout << "\t" << "id: " << to_string(appList->apps[i].id)<<endl;
					cout << "\t" << "name: " << (appList->apps[i].name)<<endl;
					cout << "\t" << "developer name: " << (appList->apps[i].developerName)<<endl;
					cout << "\t" << "icon: " << (appList->apps[i].iconName)<<endl;					
				}
 		}
 		if(appList->apps->isInstalled == 1 && appList->apps->isDownloaded) 
			cout << "Application installed" << endl;			
		else 		
			cout << "Error occured: " << appList->apps->errorCode << endl;			
		
	
	}
	
	catch(exception &e)
        {
            cout << "Exception!:" << e.what() << endl;           
        }
		
	return 0;
}
*/

