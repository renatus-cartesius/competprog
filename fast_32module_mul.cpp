#include <iostream>

using namespace std;

struct state
{
    unsigned a, b, c, d;
};

uint32_t xorshift128(state& s)
{
    uint32_t bk = s.d;
    uint32_t ft = s.a;
    s.d = s.c;
    s.c = s.b;
    s.b = s.a;
    bk ^= bk << 11;
    bk ^= bk >> 8;
    return s.a = bk ^ ft ^ (ft >> 19);
}

uint64_t xorshift128ll(state& s)
{
    uint64_t l = xorshift128(s);
    uint64_t r = xorshift128(s);
    return l << 32 | r;
}

struct test
{
    uint64_t x, y, modulo;
};

const uint32_t BITS = 32;

test xorshift128_test(state& s)
{
    test t;
    t.x = xorshift128ll(s) & ((1ll << BITS) - 1);
    t.y = xorshift128ll(s) & ((1ll << BITS) - 1);
    t.modulo = xorshift128ll(s) & ((1ll << BITS) - 1) | (1ll << (BITS - 1));
    if (t.x >= t.modulo)
        t.x -= t.modulo;
    if (t.y >= t.modulo)
        t.y -= t.modulo;
    return t;
}

uint64_t prod(const test& t)
{
    // TODO
}

int main()
{
    int n;
    state s;
    cin >> n >> s.a >> s.b >> s.c >> s.d;
    uint64_t ans = 0;
    for (int i = 0; i < n; ++i)
        ans += prod(xorshift128_test(s));
    cout << ans << endl;
}
