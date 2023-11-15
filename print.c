void rgb(int r, int g, int b) {
    printf("\x1b[38;2;%d;%d;%dm",r,g,b);
}
void cls() {
    printf( "\x1b[2J");
}
void reverse_text() {
    printf("\x1b[7m");
}
void stop_reverse_text() {
    printf("\x1b[27m");
}
void hide_cursor() {
    printf("\x1b[?25l");
}
void show_cursor() {
    printf("\x1b[?25h");
}

void cursor_to(int r, int c) {
    printf("\x1b[%d;%dH",r,c);
}

void print_symbol(u32 i) {
    printf("%c", alph[i]);
}
void print_key(const u32 k[N]) {
	for (u32 j = 0; j < N; j++) { print_symbol(k[j]); printf(" "); }
    //for (u32 j = 0; j < N; j++) printf("%02d ", k[j]); 
    printf("\n");
}

void print_text(u32 t[T]) {
	for (u32 i = 0; i < T; i++) print_symbol(t[i]);
    //for (u32 i = 0; i < T; i++) printf("%02d ", t[i]);
}

	