void compute_inverse(u32 inv[N], u32 f[N]) {
    for (u32 i = 0; i < N; i++) inv[f[i]] = i;
}
void compute_composition(u32 comp[N], u32 outer[N], u32 inner[N]) {
    for (u32 i = 0; i < N; i++) comp[i] = outer[inner[i]];
}