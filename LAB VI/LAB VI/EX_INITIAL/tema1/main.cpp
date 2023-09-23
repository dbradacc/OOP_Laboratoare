#include <iostream>
using namespace std;

class Pereche{
public:
    //constructori
    Pereche() : a(0), b(1) {}
    Pereche(int aa, int bb) : a(aa), b(bb) {}
    Pereche(const Pereche& other) : a(other.a), b(other.b) {}

    //functii getter si setter
    int get_a() const { return a; }
    void set_a(int aa) { a = aa; }
    int get_b() const { return b; }
    void set_b(int bb) { b = bb; }

private:
    int a;
    int b;
};

//supraincarcarea operatorului <<
ostream& operator<<(ostream& os, const Pereche& p) {
    os << p.get_a() << "/" << p.get_b();
    return os;
}

class Rational{
public:
    //constructori
    Rational() : n(Pereche()) {}
    Rational(const Pereche& nn) : n(nn) {}
    Rational(int aa, int bb) : n(Pereche(aa, bb)) {}
    Rational(const Rational& other) : n(other.n) {}

    //functii getter si setter
    Pereche get_n() const { return n; }
    void set_n(const Pereche& nn) { n = nn; }

    //supraincarcarea operatorilor pentru adunare,scadere, inmultire, impartire
    Rational operator+(const Rational& other) const {
        return Rational(n.get_a() * other.n.get_b() + other.n.get_a() * n.get_b(),
                        n.get_b() * other.n.get_b());
    }

    Rational operator-(const Rational& other) const {
        return Rational(n.get_a() * other.n.get_b() - other.n.get_a() * n.get_b(),
                        n.get_b() * other.n.get_b());
    }

    Rational operator*(const Rational& other) const {
        return Rational(n.get_a() * other.n.get_a(), n.get_b() * other.n.get_b());
    }

    Rational operator/(const Rational& other) const {
        return Rational(n.get_a() * other.n.get_b(), n.get_b() * other.n.get_a());
    }

    //functie pentru simplificare
    void simplificare() {
        int a = n.get_a();
        int b = n.get_b();
        int r;
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        n.set_a(n.get_a() / a);
        n.set_b(n.get_b() / a);
    }

private:
    Pereche n;
};

//supraincarcarea operatorului <<
ostream& operator<<(ostream& os, const Rational& r) {
    os << r.get_n();
    return os;
}

int main()
{
    Rational p(-2,3), r(2,6), s(1,5), t(-1,4);
    r.simplificare();
    cout << r << endl;
    r = r + s;
    p = p - r;
    t = t * p;
    s = p / r;
    cout << p << endl <<

    return 0
}
