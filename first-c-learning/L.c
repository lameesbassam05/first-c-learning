#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    /*  escape sequance = charactar combination consisting of a backslash \
                         followed by a letter or combination digist.
                         They spacify actinos within a line or string or text.
                         \n = newline
                         \t = tep
    */
    printf("I like pizza!\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like pezza\" - Abraham lincon probably\n\n");

    // variable = Allocated space in memory to store a value.
    //            We refer to variable's name we access the stored value.
    //            Thate variabel's now behaves as if it was the vaue it contains .
    //            But we need to declare with type of data we are storing.
    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration + initializaton

    int age = 20;        // integer
    float gpa = 2.05;    // floanting point number
    char grade = 'c';    // singel character
    char name[] = "Bro"; // array of characters

    printf("You are %d years old\n", age);
    printf("Hello %s\n", name);
    printf("Your avarge grade is %c\n", grade);
    printf("Your gpa is %f\n\n", gpa);

    char a = 'C';     // single character    %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.141592;           // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true; // 1 byte (true or false) %d

    char f = 120;          // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short h = 32767;          // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);     // char
    printf("%s\n", b);     // character array
    printf("%f\n", c);     // float
    printf("%lf\n", d);    // double
    printf("%d\n", e);     // bool
    printf("%d\n", f);     // char as numeric value
    printf("%d\n", g);     // unsigned char as numeric value
    printf("%d\n", h);     // short
    printf("%d\n", i);     // unsigned short
    printf("%d\n", j);     // int
    printf("%u\n", k);     // unsigned int
    printf("%lld\n", l);   // long long int
    printf("%llu\n\n", m); // unsigned long long int

    // format specifier % = defines and formats a type of data to be disblayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = disimal precision
    // %1 = minimum filed width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n\n", item3);

    // constant = fixd value that cannot be altered by the brogram during its execution

    const float PI = 3.14159;
    printf("%f\n\n", PI);

    // arthemetic operators

    // + (additional)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int X = 5;
    int Y = 2;

    // int Z = X + Y;
    // int Z = X - Y;
    // int Z = X / (float)Y;
    // int Z = X * Y;

    float Z = X % Y;
    printf("%d\n\n", Z);

    X++;
    Y--;

    // augmented assignment operators = used to replace a statement where an operator
    //                                  takes a variable as one of its arguments
    //                                  and then assigns the result back to the same variable
    //                                  x = x + 1
    //                                  x+=1

    int A = 10;

    // A = A + 2;
    // A+=2;

    // A = A - 3;
    // A-=3;

    // A = A * 4;
    // A*=4;

    // A = A / 5;
    // A/=5;

    // A = A % 2;
    // A%=2;

    printf("%d\n\n", A);

    char namee[30]; // bytes
    int agee;

    printf("Wahat's your name?", namee);
    // scanf("%s", &namee); [or]
    fgets(namee, 30, stdin);
    namee[strlen(namee) - 1] = '\0';

    printf("How old are you?", agee);
    scanf("%d", &agee);

    printf("Hello %s, how are you?\n", namee);
    printf("You are %d years old\n\n", agee);

    double B = sqrt(9);
    double C = pow(2, 4);
    int D = round(3.14);
    int E = ceil(3.14);
    int F = floor(3.99);
    double G = fabs(-100);
    double H = log(3);
    double I = sin(60);
    double J = cos(60);
    double K = tan(60);

    printf("%lf\n", B);
    printf("%lf\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%d\n", F);
    printf("%lf\n", G);
    printf("%lf\n", H);
    printf("%lf\n", I);
    printf("%lf\n", J);
    printf("%lf\n\n", K);

    const double IB = 3.14159;
    double radius;
    double cirumference;
    double area;

    printf("Enter the radius on the cercle");
    scanf("%lf", &radius);

    cirumference = 2 * IB * radius;
    printf("Cirumference: %lf\n", cirumference);

    area = IB * radius * radius;
    printf("Area: %lf\n\n", area);

    double L;
    double M;
    double N;

    printf("Enter side L: \n", L);
    scanf("%lf", &L);

    printf("Enter side M: \n", M);
    scanf("%lf", &M);

    N = sqrt(L * L + M * M);
    printf("Side N: %lf\n\n", N);

    int aage;
    printf("Enter your age\n", aage);
    scanf("%d", &aage);

    if (aage >= 18)
    {
        printf("You are now signed up!\n\n");
    }
    else if (aage == 0)
    {
        printf("You can't sign up! were just born!\n\n");
    }
    else if (aage > 0)
    {
        printf("You havin't been born yet!\n\n");
    }
    else
    {
        printf("You are too young to sign up!\n\n");
    }

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char gradee;

    printf("Enter a letter grade: \n\n", gradee);
    scanf("%c", &gradee);

    /* if (gradee == 'A')
    {
        printf("Perfect!\n\n");
    }
    else if (gradee == 'B')
    {
        printf("You did good!\n\n");
    }
    else if (gradee == 'c')
    {
        printf("You did ok!\n\n");
    }
    else if (gradee == 'D')
    {
        printf("At least it's not an F\n\n");
    }
    else if (gradee == 'F')
    {
        printf("YOU FILED\n\n");
    }
    else
    {
        printf("That's not valid grade\n\n");
    }*/

    switch (gradee)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("YOU FAILED!\n");
        break;
    default:
        printf("Please enter only valid grades");
    }

    return 0;
}