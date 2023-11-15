void copy_key(u32 d[N],u32 s[N]) {
    for (u32 i = 0; i < N; i++)  d[i]= s[i];
}
void encode(u32 c[T], u32 p[T], u32 f[N]) {
	u32 comp[N] = {0};
	u32 g[N] = {0};
	u32 t = 0;
	for (u32 i = 0 ; i < N ; i++) {
		t = (p[i] + f[i%N])%N;
		c[i] = f[t];
		copy_key(g,f);
		shift(f,N,c[i]);
		compute_composition(comp, f, g);
		copy_key(f, comp);
	}
}
void decode(u32 d[T],  u32 c[T], u32 f[N]) {
	u32 comp[N] = {0};
	u32 g[N] = {0};
	u32 inv[N] = {0};
	u32 t = 0;
	for (u32 i = 0 ; i < N ; i++) {
		compute_inverse(inv,f);
		t = inv[c[i]];
		d[i] = (N + t - f[i%N])%N;
		copy_key(g,f);
		shift(f,N,c[i]);
		compute_composition(comp, f, g);
		copy_key(f, comp);
	}
}
void reverse(u32 t[T]) {
    u32 temp[T];
    for (u32 i = 0; i < T; i++) temp[i] = t[i];
    for (u32 i = 0; i < T; i++) t[i] = temp[T - 1 - i];
}

void encrypt(u32 c[T], u32 p[T], u32 k[N]) {
	u32 f[N] = {0};
	u32 u[T] = {0};
	u32 v[T] = {0};
	copy_text(v,p);
	for (u32 r = 0 ; r < N ; r++) {
		copy_key(f,k);
		shift(f,N, f[r]);
		copy_text(u,v);
		encode(v,u,f);
	}
	copy_text(c,v);
}
void decrypt(u32 d[T], u32 c[T], u32 k[N]) {
	u32 f[N] = {0};
	u32 u[T] = {0};
	u32 v[T] = {0};
	copy_text(v,c);
	for (u32 r = 0 ; r < N ; r++) {
		copy_key(f,k);
		shift(f, N, f[N - 1 - r]);
		copy_text(u,v);
		decode(v,u,f);	
	}
	copy_text(d,v);
}


