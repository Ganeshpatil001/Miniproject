#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Library
{
	char name[50];
	char author[50];
	int code;
	int yr;
	int price;
	int pages;
}book;
int login()
{
	char username[26];
	char password[12];
	
    printf("-->Login<--\n\n");
    printf("Enter Username: \n");
    scanf("\n");
    scanf("%[^\n]%*c",username);
        
    printf("\n");
    printf("Enter password: \n");
    scanf("%s",password);
    
    if(strcmp(username,"Library access") ==0)
    {
    	if(strcmp(password,"952703") ==0)
    	{
    		printf("\nLogged in successfully!\n\n");
		}
		else
		{
			printf("\n Wrong Password\n");
			exit(0);
		}
	}
	else
	{
		printf("\nUser doesn't exist\n");
		exit(0);
	}
}

int main()
{
	printf("\t\t\t\t\t***!!Library Management System!!***\n\n");
	login();
	int i=50,found=0, bk, num, j;
	book arr[100];
	char s1[50],s2[50];
	
	strcpy(arr[0].name,"Wings Of Fire");
	strcpy(arr[0].author, "Dr.Abdul Kalam with Ankit Tiwari");
	arr[0].code =1;
	arr[0].yr=1999;
	arr[0].price=400;
	arr[0].pages=228;

	
	strcpy(arr[1].name,"A Place Called Home");
	strcpy(arr[1].author, "Preeti Stoney");
	arr[1].code = 2;
	arr[1].yr=2022;
    arr[1].price=231;
    arr[1].pages=252;
	
	strcpy(arr[2].name, "The India Story");
	strcpy(arr[2].author, "Bimal jalal");
	arr[2].code = 3;
	arr[2].yr=2021;
	arr[2].price=320;
	arr[2].pages=200;
	
	strcpy(arr[3].name, "Queen Of Fire");
	strcpy(arr[3].author, "Devika Rangacheri");
	arr[3].code = 4;
	arr[3].yr=2021;
	arr[3].price=145;
	arr[3].pages=107;
	
	strcpy(arr[4].name, "Decoding India Babudom");
	strcpy(arr[4].author, "Ashwini Shrivastava");
	arr[4].code = 5;
	arr[4].yr=0000;
	arr[4].price=345;
	arr[4].pages=300;
	
	strcpy(arr[5].name, "We The People");
	strcpy(arr[5].author, "N.A.Palkhiwala");
	arr[5].code = 6;
	arr[5].yr=1994;
	arr[5].price=340;
	arr[5].pages=332;
	
	strcpy(arr[6].name, "Withou Fear Or Favour");
	strcpy(arr[6].author, "Neelam Sanjay Reddy");
	arr[6].code = 7;
	arr[6].yr=1989;
	arr[6].price=400;
	arr[6].pages=344;
	
	strcpy(arr[7].name, "Voice of Conscience");
	strcpy(arr[7].author, "V.V.Giri");
	arr[7].code = 8;
	arr[7].yr=1975;
    arr[7].price=300;
	arr[7].pages=245;	
	
	strcpy(arr[8].name,"An Era Of Drakness");
	strcpy(arr[8].author, "Shashi Tharoor");
	arr[8].code = 9;
	arr[8].yr=2016;
	arr[8].price=448;
	arr[8].pages=402;
	
	strcpy(arr[9].name, "The Tree Mistakes Of My Life");
	strcpy(arr[9].author, "Chetan Bagat");
	arr[9].code = 10;
	arr[9].yr=2008;
	arr[9].price=180;
	arr[9].pages=150;
	
	strcpy(arr[10].name, "Interpreter Of Maladies");
	strcpy(arr[10].author, "Rabindranath Tagore");
	arr[10].code = 11;
	arr[10].yr=1999;
	arr[10].price=250;
	arr[10].pages=195;
	
	strcpy(arr[11].name, "My Early Life");
	strcpy(arr[11].author, "M.K.Gandhi");
	arr[11].code = 12;
	arr[11].yr=1932;
	arr[11].price=200;
	arr[11].pages=144;
	
	strcpy(arr[12].name, "My Truth");
	strcpy(arr[12].author, "Indira Gandhi");
	arr[12].code = 13;
	arr[12].yr=1979;
	arr[12].price=230;
	arr[12].pages=200;
	
	strcpy(arr[13].name, "Panchtantra");
	strcpy(arr[13].author, "Vishnu Sharma");
	arr[13].code = 14;
	arr[13].yr=1991;
	arr[13].price=109;
	arr[13].pages=258;
	
	strcpy(arr[14].name, "The First And Last Freedom");
	strcpy(arr[14].author, "Jiddu Krishnamurti");
	arr[14].code = 15;
	arr[14].yr=1954;
	arr[14].price=231;
	arr[14].pages=288;
	
	strcpy(arr[15].name, "Mann Ki Baat- A Social Revolution On Radio");
	strcpy(arr[15].author, "Narendra Modi");
	arr[15].code = 16;
	arr[15].yr=2018;
	arr[15].price=330;
	arr[15].pages=280;
	
	strcpy(arr[16].name, "God Save The Hon'ble Supreme Court");
	strcpy(arr[16].author, "Fali S. Nariman");
	arr[16].code = 17;
	arr[16].yr=2018;
	arr[16].price=300;
	arr[16].pages=256;
	
	strcpy(arr[17].name, "President's lady ");
	strcpy(arr[17].author, "Sangeeta Ghosh");
	arr[17].code = 18;
	arr[17].yr=2018;
	arr[17].price=340;
	arr[17].pages=300;
	
	strcpy(arr[18].name, "Republic Of Caste ");
	strcpy(arr[18].author, "Anand Teltumbde");
	arr[18].code = 19;
	arr[18].yr=2018;
	arr[18].price=550;
	arr[18].pages=440;
	
	strcpy(arr[19].name, "The Future Of Humanity");
	strcpy(arr[19].author, "Michiokaku");
	arr[19].code = 20;
	arr[19].yr=2018;
	arr[19].price=445;
	arr[19].pages=449;
	
	strcpy(arr[20].name, "6 Times Thinne");
	strcpy(arr[20].author, "N. N. Vohra");
	arr[20].code = 21;
	arr[20].yr=2018;
	arr[20].price=400;
	arr[20].pages=330;
	
	strcpy(arr[21].name, "Evil The Mahabharata");
	strcpy(arr[21].author, "Meena Arora Nayak");
	arr[21].code = 22;
	arr[21].yr=2018;
	arr[21].price=614;
	arr[21].pages=481;
	
	strcpy(arr[22].name, "Across The Universe");
	strcpy(arr[22].author, "Ajoy Bose");
	arr[22].code = 23;
	arr[22].yr=2018;
	arr[22].price=334;
	arr[22].pages=200;
	
	strcpy(arr[23].name, "Economics for the common good");
	strcpy(arr[23].author, "Jean Tirole");
	arr[23].code = 24;
	arr[23].yr=2018;
	arr[23].price=1826;
	arr[23].pages=577;
	
	strcpy(arr[24].name, "The Only Story");
	strcpy(arr[24].author, "Julian Barnes");
	arr[24].code = 25;
	arr[24].yr=2018;
	arr[24].price=695;
	arr[24].pages=440;
	
	strcpy(arr[25].name, "Straight Talk");
	strcpy(arr[25].author, "Abhishek Manu Singhvi");
	arr[25].code = 26;
	arr[25].yr=2018;
	arr[25].price=625;
	arr[25].pages=501;
	
	strcpy(arr[26].name, "Golden Boy Neeraj Chopra");
	strcpy(arr[26].author, "Navdeep Singh Gill");
	arr[26].code = 27;
	arr[26].yr=2022;
	arr[26].price=280;
	arr[26].pages=200;
	
	strcpy(arr[27].name, "A Nation To Protect");
	strcpy(arr[27].author, "Priyam Gandhi Mody");
	arr[27].code = 28;
	arr[27].yr=2022;
	arr[27].price=424;
	arr[27].pages=300;
	
	strcpy(arr[28].name, "Mamata : Beyond 2021");
	strcpy(arr[28].author, "Jayanta Ghosal");
	arr[28].code = 29;
	arr[28].yr=2022;
	arr[28].price=454;
	arr[28].pages=500;
	
	strcpy(arr[29].name, "Lal Salam ");
	strcpy(arr[29].author, "Smriti Irani");
	arr[29].code = 30;
	arr[29].yr=2022;
	arr[29].price=252;
	arr[29].pages=190;
	
	strcpy(arr[30].name, "Modi@20:Dreams Meeting Delivery");
	strcpy(arr[30].author, "V.P.Venkaiah Naidu");
	arr[30].code = 31;
	arr[30].yr=2022;
	arr[30].price=300;
	arr[30].pages=330;
	
	strcpy(arr[31].name, "Tomb Of Sand");
	strcpy(arr[31].author, "Geetanjali Shree's");
	arr[31].code = 32;
	arr[31].yr=2022;
	arr[31].price=380;
	arr[31].pages=250;
	
	strcpy(arr[32].name, "It's Wonderful Life");
	strcpy(arr[32].author, "Ruskin Bond");
	arr[32].code = 33;
	arr[32].yr=2021;
	arr[32].price=319;
	arr[32].pages=290;
	
	strcpy(arr[33].name, "Kashmiri Century");
	strcpy(arr[33].author, "Khemlata Wakhlu");
	arr[33].code = 34;
	arr[33].yr=2021;
	arr[33].price=500;
	arr[33].pages=341;
	
	strcpy(arr[34].name, "Human Rights And Terrorism In India");
	strcpy(arr[34].author, "Subramanian Swamy");
	arr[34].code = 35;
	arr[34].yr=2021;
	arr[34].price=575;
	arr[34].pages=390;
	
	strcpy(arr[35].name, "Translating Myslef And Others");
	strcpy(arr[35].author, "Jhumpa Lahiri");
	arr[35].code = 36;
	arr[35].yr=2021;
	arr[35].price=458;
	arr[35].pages=330;
	
	strcpy(arr[36].name, "Shining Sikh Youth Of India");
	strcpy(arr[36].author, "Dr.Prabhleen Singh");
	arr[36].code = 37;
	arr[36].yr=2021;
	arr[36].price=450;
	arr[36].pages=303;
	
	strcpy(arr[37].name, "400 Days");
	strcpy(arr[37].author, "Chetan Bhagat");
	arr[37].code = 38;
	arr[37].yr=2021;
	arr[37].price=189;
	arr[37].pages=332;
	
	strcpy(arr[38].name, "My Encounter In Parliament");
	strcpy(arr[38].author, "Bhalchandra Mungekar");
	arr[38].code = 39;
	arr[38].yr=2020;
	arr[38].price=400;
	arr[38].pages=280;
	
	strcpy(arr[39].name, "A Child Of Destiny");
	strcpy(arr[39].author, "K.Ramakrishna Rao");
	arr[39].code = 40;
	arr[39].yr=2020;
	arr[39].price=230;
	arr[39].pages=150;
	
	strcpy(arr[40].name, "Amazing Ayodhya");
	strcpy(arr[40].author, "Neena Rai");
	arr[40].code = 41;
	arr[40].yr=2020;
	arr[40].price=346;
	arr[40].pages=386;
	
	strcpy(arr[41].name, "One Arranged Murder");
	strcpy(arr[41].author, "Chetan Bhagat");
	arr[41].code = 42;
	arr[41].yr=2020;
	arr[41].price=225;
	arr[41].pages=314;
	
	strcpy(arr[42].name, "Kitchen's Of Gratitude");
	strcpy(arr[42].author, "Chef Vikas Khanna");
	arr[42].code = 43;
	arr[42].yr=2020;
	arr[42].price=300;
	arr[42].pages=219;
	
	strcpy(arr[43].name, "The New Delhi Conspiracy");
	strcpy(arr[43].author, "Meenakshi Lekhi");
	arr[43].code = 44;
	arr[43].yr=2019;
	arr[43].price=330;
	arr[43].pages=274;
	
	strcpy(arr[44].name, "Mind - Master");
	strcpy(arr[44].author, "Viswanathan Anand And Susan Ninan");
	arr[44].code = 45;
	arr[44].yr=2019;
	arr[44].price=340;
	arr[44].pages=293;
	
	strcpy(arr[45].name, "Sridevi:Girl Woman Superstar");
	strcpy(arr[45].author, "Satyartha Nayak");
	arr[45].code = 46;
	arr[45].yr=2019;
	arr[45].price=413;
	arr[45].pages=330;
	
	strcpy(arr[46].name, "My Life,My Mission");
	strcpy(arr[46].author, "Baba Ramdev");
	arr[46].code = 47;
	arr[46].yr=2019;
	arr[46].price=200;
	arr[46].pages=180;
	
	strcpy(arr[47].name, "Triple Talaq : Examining Faith");
	strcpy(arr[47].author, "Salman Khurshid");
	arr[47].code = 48;
	arr[47].yr=2018;
	arr[47].price=333;
	arr[47].pages=290;
	
	strcpy(arr[48].name, "Missing");
	strcpy(arr[48].author, "Sumana Roy");
	arr[48].code = 49;
	arr[48].yr=2018;
	arr[48].price=440;
	arr[48].pages=331;
	
	strcpy(arr[49].name, "Game changer");
	strcpy(arr[49].author, "Shahid Afridi");
	arr[49].code = 50;
	arr[49].yr=2019;
	arr[49].price=379;
	arr[49].pages=304;
	

	do
	{
		printf("\n============Menu==============");
		printf("\n\nEnter 1 to search by Book Name\nEnter 2 to search by Author Name\nEnter 3 to search by Book ID\nEnter 4  To Search by Publish Year \nEnter 5 to display books available in Library\nEnter 6 to Exit\n\nEnter your option:  ");
	    scanf("%d",&num);
	    
	    switch(num)
	    {
	    	case 1:
	    		printf("\nEnter Book Name to search: \n");
	    		scanf("\n");
	    		scanf("%[^\n]%*c", s1);
	    		printf("\n");
	    		
	    		for(i=0; i<50; i++)
	    		{
	    			if(strcmp(s1,arr[i].name)==0)
	    			{
	    				found=1;
	    				
	    				 printf("\n\t\t*****Hurray!BOOK FOUND*****\n");
	    				
	    				printf("Book Code : %d\n",arr[i].code);
	    				printf("Book Name : %s\n",arr[i].name);
	    				printf("Author : %s\n",arr[i].author);
	    				printf("year : %d\n",arr[i].yr);
	    				printf("prize : %d\n",arr[i].price);
	    				printf("pages: %d\n",arr[i].pages);
	    				
	    				printf("-----------------------------------------------");
	    			}
	    		}
	    				if(found==0)
	    				printf("\nBook Not Found\nEnter a valid Book Nmae");
	    				break;
					
				case 2:
				printf("\nEnter Author Name to search: \n");
				scanf("\n");
	    		scanf("%[^\n]%*c", s2);
	    		printf("\n");
	    		
	    		for(i=0; i<50; i++)
	            {
	    			if(strcmp(s2,arr[i].author)==0)
	    			{
	    				found =1;
	    				
	    			 printf("\n\t\t*****Hurray!BOOK FOUND*****\n");
	    				
	    				printf("Book Code : %d\n",arr[i].code);
	    				printf("Book Name : %s\n",arr[i].name);
	    				printf("Author : %s\n",arr[i].author);
	    				printf("year : %d\n",arr[i].yr);
	    				printf("prize : %d\n",arr[i].price);
	    				printf("pages : %d\n",arr[i].pages);
	    				
	    				printf("-----------------------------------------------");
	    			}
	    		}
	        
	    				if(found==0)
	    				printf("\nBook Not Found\nEnter a valid Author name");
	    				break;
				
				case 3:
                    printf("\nEnter Book ID to search: \n");
				    scanf("%d",&bk);
				
		     		for(i=0; i<50; i++)
		    		{
			    		if(bk == arr[i].code)
				    	{
					    	found=1;
						
					    	 printf("\n\t\t*****Hurray!BOOK FOUND*****\n");
	    				
	    		    		printf("Book Code : %d\n",arr[i].code);
	    		    		printf("Book Name : %s\n",arr[i].name);
	    		    		printf("Author : %s\n",arr[i].author);
	    		    		printf("year : %d\n",arr[i].yr);
	    		    		printf("prize : %d\n",arr[i].price);
	    		    		printf("pages : %d\n",arr[i].pages);
	    		    	
	    		    		
	    				
	    				printf("-----------------------------------------------");
						
				    	}
				    } 
				
				    	if(found==0)
	    				printf("\nBook Not Found\nEnter a valid Book Id");
	    				break;
				
					case 4:
                    printf("\n Enter Publish Year to search: \n");
				    scanf("%d",&bk);
				
		     		for(i=0; i<50; i++)
		    		{
			    		if(bk == arr[i].yr)
				    	{
					    	found=1;
						
					    	 printf("\n\t\t*****Hurray!BOOK FOUND*****\n");
	    				
	    		    		printf("Book Code : %d\n",arr[i].code);
	    		    		printf("Book Name : %s\n",arr[i].name);
	    		    		printf("Author : %s\n",arr[i].author);
	    		    		printf("year : %d\n",arr[i].yr);
	    		    		printf("prize : %d\n",arr[i].price);
	    		    		printf("pages : %d\n",arr[i].pages);
	    		    	
	    		    		
	    				
	    				printf("-----------------------------------------------");
						
				    	}
				    } 
				
				    	if(found==0)
	    				printf("\nBook Not Found\nEnter a valid Book Id");
	    				break;
				
				case 5:
                      printf("\n Available books in library are listed below :\n\n");
                      
                      for(j=0; j<i; j++)
                      {
                      	
                      	printf("Book name : %s\n",arr[j].name);
	    				printf("Author Name : %s\n",arr[j].author);
	    				printf("Book code : %d\n",arr[j].code);
	    				printf("year : %d\n",arr[j].yr);
	    				printf("price : %d\n",arr[j].price);
	    				printf("pages : %d\n",arr[j].pages);
	    				
	    				printf("-----------------------------------------------\n");
                      	
					  }
	    		    break;
	    		    
	    		case 6:
	    		    printf("\n\t\t*****->!!Thank You!!<-*****\n");
	    			printf("\n---------------------------------------------------");
	    			
	    			exit(0);
	    			
	    		default:
	    			printf("Not found,Enter a valid option from 1 to 5");
	    			break;
       }
}
	while(num!=0);
	return 0;
}
