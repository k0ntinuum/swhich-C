void shift(u32* t, u32 l, u32 s) {
    u32 temp[T];
    for (u32 i = 0; i < l; i++) temp[i] = t[(l + i + s)%l];
    for (u32 i = 0; i < l; i++) t[i] = temp[i];
}
