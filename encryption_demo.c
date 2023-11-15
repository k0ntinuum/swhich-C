void encoding_demo(){
    u32 f[N] = {0};
	u32 g[N] = {0};
	u32 p[T];//plain
	u32 c[T];//cipher
	u32 d[T];//decode
	u32 e[T];//diff vector
	u32 hue = 155;
	randomize_key(f);
    //cls();
    rgb(255,255,255);
    printf("f = ");
	rgb(hue,hue,hue);
	print_key(f);printf("\n");
	for (u32 i = 0; i < T; i++) {
		//randomize_text(p);
		cyclical_text(p);
		shift(p, T, i);
		encrypt(c,p,f);
        decrypt(d,c,f);
		check_text_equality(d,p);
		record_difference(e,p,c);
		rgb(255,255,255);printf("f(");rgb(255,0,0);print_text(p);rgb(255,255,255);
		printf(") = ");rgb(255,255,0);print_text(c);printf("  ");rgb(hue,hue,hue);
        if (B == 2) print_text(e);
        printf("\n");
	}
}

        