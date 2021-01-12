//Nafisa Hossain Bushra 
//Score Algorithm Start
int t = 0; //timer variable for score
char str[100], str2[100];

void store_score()  //store score after game over
{
	FILE *fp=fopen("Score.txt","a");
    if(fp!=NULL)
    {
		fprintf(fp,"%s   %d\n",str2,t);
	}
	fclose(fp);
}

