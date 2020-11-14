
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std; 
int main(){
  int shring1,shring,arc; 
  bool ulet=true;
  bool uletss=true;
  std::string y;
int vwls=0, cnsnts=0;
int uno=0, dos=0;
std::string kump;
while(ulet){
		cout<<"______________________________"<<endl;
        cout<<"|         -MAIN MENU-        |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1]String Menu             |"<<endl;
        cout<<"| [2]Char Menu               |"<<endl;
        cout<<"|____________________________|"<<endl;
		 cout<<"PLEASE SELECT NO. : ";
        std::cin>>shring;
	system("cls");
 
   if(shring==1){
	do{ 
std::string wrds;
std::string kump;
  
   
cout<<"Enter words: ";
std::cin.ignore();
getline(cin,wrds);
	
   int wrds1= wrds.length();
  
	
		cout<<"________________________________________________"<<endl;
        cout<<"|                -STRING MENU-                 |"<<endl;
        cout<<"|                 -----------                  |"<<endl;
        cout<<"| [1] Vowels, Consonant, Substring and Compare |"<<endl;
        cout<<"| [2] Length, Index                            |"<<endl;
        cout<<"| [3] Replace, Delete                          |"<<endl;
        cout<<"|______________________________________________|"<<endl;
		
        cout<<"PLEASE SELECT NO. : ";
		cin>>shring1;

	   switch(shring1){


		   case 1:{
			  
			   int j=0;
			   while(j<wrds1){
				   if(wrds[j]=='a'||wrds[j]=='A'||wrds[j]=='e'||wrds[j]=='E'||wrds[j]=='i'||wrds[j]=='I'||wrds[j]=='o'||wrds[j]=='O'||wrds[j]=='u'||wrds[j]=='U'){
					   vwls++;
				   }else if(wrds[j]!=' '){
					   cnsnts++;
				   }
				   j++;
			   }
   
   cout<<"Vowels: "<<vwls<<endl;
   cout<<"Consonants: "<<cnsnts<<endl;


   cout<<"Substring"<<endl;
   cout<<"Enter initial: ";
   cin>>uno>>dos;
   std::string shrub= wrds.substr(uno,dos);

   cout<<"Substring: "<<shrub<<endl;

  
   cout<<"COMPARE"<<endl;
   cout<<"Enter String 2: ";
   std::cin.ignore();
  getline(cin,kump);
   int par= wrds.compare(kump);
      cout<<"Compare "<<par<<endl;

				  }
				 
				break;
				
		   case 2:{
			   int kain=wrds.length();
			   cout<<"Length: "<<kain<<endl;
				std::string tayo;
			   cout<<"Enter character to search: "<<tayo<<endl;
			   std::cin>>tayo;
			   for(int i=0; i<wrds1; i++){
				   
				   if(tayo==wrds.substr(i,1)){
					   
					   cout<<tayo<<"The character "<<tayo<<" is in the Index "<<i<<endl;
				   }
					
			   }
				  }
			   break;

		   case 3:{
			   cout<<"Enter initial and length: ";
			   cin>>uno>>dos;
			   cout<<"Enter word to replace: "<<endl;
			   cin>>kump;
			   std::string palit=wrds.replace(uno,dos,kump);
			   
				 std::cout<<"Replace: "<<palit<<endl;
				 palit.erase(uno,dos);
				 std::cout<<"Delete: "<<palit<<endl;

				  }
	     
				

	   }

				   cout<<"Do you want to go back to String Menu? [Y/N] ";
			cin>>y;
			   
			   if(y=="y"||y=="Y"){
				   uletss=true;
				   vwls=0, cnsnts=0;
					 uno=0, dos=0;
					
			   }else{
				   uletss=false;
			   }
			   system("cls");
}while(uletss);
			  
		  }
	  

   else if(shring==2) {
			do{
				int vwls1=0, cnsnts1=0;
	   char pngusap[50];
	   
	   cout<<"Enter words: ";
	   cin.ignore();
	   gets(pngusap);

	    cout<<"________________________________________________"<<endl;
        cout<<"|                 -CHAR MENU-                  |"<<endl;
        cout<<"|                 -----------                  |"<<endl;
        cout<<"| [1] Vowels, Consonant, Substring and Compare |"<<endl;
        cout<<"| [2] Length, Index                            |"<<endl;
        cout<<"| [3] Replace, Delete                          |"<<endl;
        cout<<"|______________________________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
		cin>>arc;
	  

	   switch(arc){

	   case 1:{
		   for(int i=0; i<strlen(pngusap); i++){
			   if(pngusap[i]=='a'||pngusap[i]=='A'||pngusap[i]=='e'||pngusap[i]=='E'||pngusap[i]=='i'||pngusap[i]=='I'||pngusap[i]=='o'||pngusap[i]=='O'||pngusap[i]=='u'||pngusap[i]=='U'){
				   vwls1++;
			   }else if(pngusap[i]!=' '){

				   cnsnts1++;
			   }
		   }
		   cout<<"Vowels: "<<vwls1<<endl;
		   cout<<"Consonants: "<<cnsnts1<<endl;
		   std::string kp= pngusap;

		   cout<<"Substring"<<endl;
		   cout<<"Enter initial and length: ";
		   cin>>uno>>dos;
		  cout<<"Substring: "<<kp.substr(uno,dos)<<endl;

		  cout<<"COMPARE"<<endl;
		   cout<<"Enter 2nd String: ";
		   cin.ignore();
		   getline(cin,kump);
		   cout<<"Compare"<<strcmp(pngusap,kump.c_str())<<endl;
			  }

		   break;

	   case 2:{

		   cout<<"Length: "<<strlen(pngusap)<<endl;
		   char km;
		    cout<<"Enter Character to search: ";
			cin>>km;
		   for(int i=0; i<strlen(pngusap); i++){
			   if(pngusap[i]==km){
				   cout<<"The character "<<km<<" is in the Index "<<i<<endl;

			   }
			
		   }
		   
			  }

		   break;

	   case 3:{
		   char rp;
		   char av;
		   cout<<"REPLACE"<<endl;
		   cout<<"Enter char to update: ";
		   cin>>rp;
		   cout<<"Enter Character: ";
		   cin>>av;
		   for(int i=0; i<strlen(pngusap); i++){
			   if(pngusap[i]==rp){
				   pngusap[i]=av;
			   }
		   }
		   cout<<pngusap<<endl;

		   cout<<"Enter initial and length: ";
		   cin>>uno>>dos;
		   int j=uno;
		   while(j<strlen(pngusap)){
			   pngusap[j]=pngusap[dos+j];
			   j=j+1;
		   }
		   for(int i=0; i<strlen(pngusap); i++){
			   cout<<pngusap[i];
		   }
		   cout<<endl;
			  }

		   
	   }
	
 cout<<"Do you want to go back to arr Char Menu? [Y/N] ";
			cin>>y;
			   
			   if(y=="y"||y=="Y"){
				   uletss=true;
				   vwls=0, cnsnts=0;
				  uno=0, dos=0;

			   }else{
				   uletss=false;
			   }
			   system("cls");

	   }while(uletss);
   
   }

   

    
	}
 

 system("pause");
  }
