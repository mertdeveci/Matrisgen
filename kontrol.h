
void kontrol1(){
	    printf("\n#ERROR: Eksik veya cok fazla parametre kullanimi\n");
        printf("\n");
        exit(EXIT_FAILURE);
}


void kontrol2(char *cp){

		printf("\n#ERROR: HATALI PARAMETRE KULLANIMI-->%s<--\n",cp);
        exit(EXIT_FAILURE);
}

void kontrol3(char *p){
	if(strcmp(p,"i")==0){
		return;
	}
	if(strcmp(p,"f")==0){
		return;
	}
	if(strcmp(p,"d")==0){
		return;
	}
	kontrol2(p);
}

void kontrol4(int i, char *p){
	if(i==0){
		kontrol2(p);
	}
}

void kontrol6(char *p){
	if(strcmp(p,"-t")==0){
		return;
	}
	kontrol2(p);
}
