#include<stdio.h>

main()
{
	printf("\n\n Welcome to Prince cinemas \n\n");
	
	printf("\n\n Press 1 for hollywood movies \n\n");
	printf("\n\n Press 2 for bollywood movies \n\n");
	printf("\n\n Press 3 for tollywood movies \n\n");
	printf("\n\n Press 4 for Gujarati movies \n\n");
	
	int n;
	char c;
	
	printf("\n enter your preference: " );
	scanf("%d",&n);
	switch(n)
	{
		case 1:
  		    printf("\n\n hollywood movies \n\n");
			printf("\n\n Press 'A' for action movies \n\n");
			printf("\n\n Press 'B' for comedy movies \n\n");
			printf("\n\n Press 'C' for horror movies \n\n");
			printf("\n\n Press 'D' for thriller movies \n\n");
			
			printf("\n enter your choice: ");
			scanf( " %c",&c);
			
			switch(c)
			{
		      case 'A':
			  case 'a': 
			      printf("\n\n action movies \n\n");
				  
				  printf("\n\n Press 11 for Die hard \n\n");
				  printf("\n\n Press 12 for The Matrix \n\n");
				  printf("\n\n Press 13 for The dark knight \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Die hard \n\n");
				  		break;
				    case 12:
					    printf("\n\n your choice is The matrix \n\n");
						break;		
					case 13:
					    printf("\n\n your choice is The dark knight \n\n");	
					    break;
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'B':
			  case 'b':
				  printf("\n\n comedy movies \n\n");
				  
				  printf("\n\n Press 11 for Superbad \n\n");
				  printf("\n\n Press 12 for Step brothers \n\n");
				  printf("\n\n Press 13 for The hangover \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Superbad \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Step brothers \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is The hangover \n\n");
					    break;
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'C':
			  case 'c':  
			      printf("\n\n horror movies \n\n");
				  
				  printf("\n\n Press 11 for The exorcist \n\n");
				  printf("\n\n Press 12 for The shining \n\n");
				  printf("\n\n Press 13 for Psycho \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is The exorcist \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is The shining \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Psycho \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      }
				break;   
			  case 'D':
			  case 'd': 
			      printf("\n\n Thriller movies \n\n");
				  
				  printf("\n\n Press 11 for The Prestige \n\n");
				  printf("\n\n Press 12 for The Departed \n\n");
				  printf("\n\n Press 13 for Memento \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is The Prestige \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is The Departed \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Memento \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      }
				 
		    }
		break;		   
		case 2:
		   	printf("\n\n bollywood movies \n\n");
			printf("\n\n Press 'A' for action movies \n\n");
			printf("\n\n Press 'B' for comedy movies \n\n");
			printf("\n\n Press 'C' for horror movies \n\n");
			printf("\n\n Press 'D' for thriller movies \n\n");
			
			printf("\n enter your choice: ");
			scanf( " %c",&c);
			
			switch(c)
			{
		      case 'A':
			  case 'a': 
			      printf("\n\n action movies \n\n");
				  
				  printf("\n\n Press 11 for Sholay \n\n");
				  printf("\n\n Press 12 for Shingam \n\n");
				  printf("\n\n Press 13 for Wanted \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Sholay \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Shingam \n\n");	
					    break;
					case 13:
					    printf("\n\n your choice is Wanted \n\n");
						break;	
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'B':
			  case 'b':
				  printf("\n\n comedy movies \n\n");
				  
				  printf("\n\n Press 11 for Dhamaal \n\n");
				  printf("\n\n Press 12 for Golmaal \n\n");
				  printf("\n\n Press 13 for Hera pheri \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Dhamaal \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Golmaal \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Hera pheri \n\n");
					    break;
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'C':
			  case 'c':  
			      printf("\n\n horror movies \n\n");
				  
				  printf("\n\n Press 11 for Stree \n\n");
				  printf("\n\n Press 12 for Bhoot police \n\n");
				  printf("\n\n Press 13 for Tumbbad \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Stree \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Bhoot police \n\n");
					    break;   
					case 13:
					    printf("\n\n your choice is Tumbbad \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      } 
			    break;  
			  case 'D':
			  case 'd': 
			      printf("\n\n Thriller movies \n\n");
				  
				  printf("\n\n Press 11 for The Drishyam \n\n");
				  printf("\n\n Press 12 for The Badlapur \n\n");
				  printf("\n\n Press 13 for Talaash \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Drishyam \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Badlapur \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Talaash \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      } 
				
			}
		break;		    
		case 3:
		    printf("\n\n Tollywood movies \n\n");
			printf("\n\n Press 'A' for action movies \n\n");
			printf("\n\n Press 'B' for comedy movies \n\n");
			printf("\n\n Press 'C' for horror movies \n\n");
			printf("\n\n Press 'D' for thriller movies \n\n");
			
			printf("\n enter your choice: ");
			scanf( " %c",&c);
			
			switch(c)
			{
		      case 'A':
			  case 'a': 
			      printf("\n\n action movies \n\n");
				  
				  printf("\n\n Press 11 for Pushpa \n\n");
				  printf("\n\n Press 12 for RRR \n\n");
				  printf("\n\n Press 13 for Kantara \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Pushpa \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is RRR \n\n");
						break;	
					case 13:
					    printf("\n\n your choice is Kantara \n\n");	
					    break;
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'B':
			  case 'b':
				  printf("\n\n comedy movies \n\n");
				  
				  printf("\n\n Press 11 for Venky \n\n");
				  printf("\n\n Press 12 for Jalsa \n\n");
				  printf("\n\n Press 13 for Kick \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Venky \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is jalsa \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Kick \n\n");
					    break;
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'C':
			  case 'c':  
			      printf("\n\n horror movies \n\n");
				  
				  printf("\n\n Press 11 for Kanchana \n\n");
				  printf("\n\n Press 12 for Arundhati \n\n");
				  printf("\n\n Press 13 for Masooda \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Kanchana \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Arundhati \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is masooda \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      }
				break;   
			  case 'D':
			  case 'd': 
			      printf("\n\n Thriller movies \n\n");
				  
				  printf("\n\n Press 11 for Eleven \n\n");
				  printf("\n\n Press 12 for Forensic \n\n");
				  printf("\n\n Press 13 for Chithha \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Eleven \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Forensic \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Chithha \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      }
				
	    	}
		break;		     		  
		case 4:
		    printf("\n\n Gujarati movies \n\n");
			printf("\n\n Press 'A' for action movies \n\n");
			printf("\n\n Press 'B' for comedy movies \n\n");
			printf("\n\n Press 'C' for horror movies \n\n");
			printf("\n\n Press 'D' for thriller movies \n\n");
			
			printf("\n enter your choice: ");
			scanf( " %c",&c);
			
			switch(c)
			{
		      case 'A':
			  case 'a': 
			      printf("\n\n action movies \n\n");
				  
				  printf("\n\n Press 11 for Laalo \n\n");
				  printf("\n\n Press 12 for Saheb \n\n");
				  printf("\n\n Press 13 for Suryansh \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Laalo \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Saheb \n\n");
						break;	
					case 13:
					    printf("\n\n your choice is Suryansh \n\n");
						break;	
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'B':
			  case 'b':
				  printf("\n\n comedy movies \n\n");
				  
				  printf("\n\n Press 11 for Chhello divas \n\n");
				  printf("\n\n Press 12 for Gujjubhai the great \n\n");
				  printf("\n\n Press 13 for Chaal jeevi laiye \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Chhello divas \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Gujjubhai the great \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Chaal jeevi laiye \n\n");
					    break;
				    default: 
					    printf("\n\n your choice is invalid \n\n");			
				  }
				break;  
			  case 'C':
			  case 'c':  
			      printf("\n\n horror movies \n\n");
				  
				  printf("\n\n Press 11 for Vash \n\n");
				  printf("\n\n Press 12 for Avadh \n\n");
				  printf("\n\n Press 13 for Karkhanu \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Vash \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Avadh \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Karkhanu \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      } 
			    break;  
			  case 'D':
			  case 'd': 
			      printf("\n\n Thriller movies \n\n");
				  
				  printf("\n\n Press 11 for Raado \n\n");
				  printf("\n\n Press 12 for Dhummas \n\n");
				  printf("\n\n Press 13 for Paaghadi \n\n");
				  
				  printf("\n enter any option: ");
				  scanf("%d",&n);
				  
				  switch(n)
				  {
				  	case 11:
				  		printf("\n\n your choice is Raado \n\n");
				  		break;
				  	case 12:
					    printf("\n\n your choice is Dhummas \n\n");
					    break;
					case 13:
					    printf("\n\n your choice is Paaghadi \n\n");
					    break;
					default: 
					    printf("\n\n your choice is invalid \n\n");    
			      }
				 
	    	}
		break;		     		  		       
	default:
	    printf("\n\n your choice in invalid \n\n");
	    	
	}
}
