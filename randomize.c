
void randomize_key(u32 k[N]) {
    for (u32 i = 0; i < N; i++) k[i] = i;
    shuffle(k,N);
}
void randomize_text(u32* t) {
	for (u32 i = 0; i < T; i++) t[i] = arc4random_uniform(B);
}
void cyclical_text(u32* t) {
	for (u32 i = 0; i < T; i++) t[i] = i%B;
}