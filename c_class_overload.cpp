
class simpleOfOverload
{
public:
    int add(int a, int b){ return (a+b); };
    int add(int a, int b, int c){ return (a+b+c); };
    float add(int a, double b){ return (a+b); };
    float add(double a, int b){ return (a+b); };
};

int main()
{
    simpleOfOverload cal;

    cal.add(1, 1);
    cal.add(2, 1, 1);
    cal.add(2, 1.0);
    cal.add(3.0, 1);

    return 0;
}
