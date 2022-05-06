# include <stdio.h>
# include <string.h>

 main()
{
	// chiffres en lettres;
sona :	unsigned long int x,rest,y,cnt,dxn,unt;
	int i,j,ch,s,k,l;
	char lettre[270];
	strcpy(lettre," ");
	puts("entre le nombre");
	scanf("%lu",&x);
	rest = x;
	j = 0;
	for(i=1000000000;i>=1;i/=1000)
	{
		y = rest/i;
		if(y!=0)
		{
		cnt = y/100;
		dxn = (y-cnt*100)/10;
		unt = y - cnt*100 - dxn*10;
		switch(cnt)
		 {
		  case 0:
		  break;
		  case 1:
		  strcat(lettre,"cent ");
		  break;
		   case 2:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"deux cents ");
		  else
		  strcat(lettre,"deux cent ");
		  break;
	      case 3:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"trois cents ");
		  else
		  strcat(lettre,"trois cent ");
		  break;
		  case 4:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"quatre cents ");
		  else
		  strcat(lettre,"quatre cent ");
		  break;	
	      case 5:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"cinq cents ");
		  else
		  strcat(lettre,"cinq cent ");
		  break;
	      case 6:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"six cents ");
		  else
		  strcat(lettre,"six cent ");
		  break;
	      case 7:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"sept cents ");
		  else
		  strcat(lettre,"sept cent ");
		  break;
	      case 8:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"huit cents ");
		  else
		  strcat(lettre,"huit cent ");
		  break;
		  case 9:
		  if((dxn==0)&&(unt==0)) strcat(lettre,"neuf cents ");
		  else
		  strcat(lettre,"neuf cent ");
		  break;
		 }// fin switch centaine
		 switch(dxn)
		 {
		 	case 0:
		 		break;
		 	case 1:
			 j = j+1;
			 break;
			case 2:
			strcat(lettre,"vingt ");
			break; 	
		 	case 3:
			strcat(lettre,"trente ");
			break; 
		 	case 4:
			strcat(lettre,"quarante ");
			break; 
		 	case 5:
			strcat(lettre,"cinquante ");
			break; 
		 	case 6:
			strcat(lettre,"soixante ");
		 	break; 
		 	case 7:
		 	j = j+1;	
			strcat(lettre,"sioxante ");
			break; 
		 	case 8:
			strcat(lettre,"quatre-vingt ");
			break; 
		 	case 9:
		 		j = j+1;
			strcat(lettre,"quatre-vingt ");
			break; 
		 }// fin switch dixaine
	    switch(unt)
		 {
		   case 0:
		  	if(j!=0) strcat(lettre,"dix ");
		    break;
		case 1:
		     {
			 if(j!=0) strcat(lettre,"onze ");
			 else
			 strcat(lettre,"un ");
		     break;
		     }
		 case 2:
		     if(j!=0) strcat(lettre,"douze ");
		     else strcat(lettre,"deux ");
		     break;
		  case 3:
		     if(j!=0) strcat(lettre,"treize ");
		     else strcat(lettre,"trois ");
		     break;
		   case 4:
		     if(j!=0) strcat(lettre,"quatorze ");
		     else strcat(lettre,"quatre ");
		     break;
		    case 5:
		     if(j!=0) strcat(lettre,"quinze ");
		     else strcat(lettre,"cinq ");
		     break;
		     case 6:
		     if(j!=0) strcat(lettre,"seize ");
		     else strcat(lettre,"six ");
		     break;
			  case 7:
		     if(j!=0) strcat(lettre,"dix-sept ");
		     else strcat(lettre,"sept ");
		     break;
			 case 8:
		     if(j!=0) strcat(lettre,"dix-huit ");
		     else strcat(lettre,"huit ");
		     break;
		      case 9:
		     if(j!=0) strcat(lettre,"dix-neuf ");
		     else strcat(lettre,"neuf ");
		     break;
		 }//fin switch unite
		    switch (i)
            {
                case 1000000000:
                    if(y>1) strcat(lettre,"milliards ");
                    else strcat(lettre,"milliard ");
                    break;
                case 1000000:
                    if(y>1) strcat(lettre,"millions ");
                    else strcat(lettre,"million ");
                    break;
                case 1000:
                    strcat(lettre,"mille ");                    
            }//fin switch i
        }//fin si 
	rest -= y*i;
    j = 0;	
		
	}// fin pour
	if(x==0) strcat(lettre,"zero");
	else
	printf("en lettre ca faire:");
	printf("  %s\n",lettre);
	s = strlen(lettre);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    puts("encore un autre si oui tappe '1'");
    scanf("%d",&ch);
    if(ch==1)
    goto sona;
    else
    puts("trimer pour nicker l'echec.");
}
