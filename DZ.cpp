#include <iostream>
using namespace std;

class Desklamp {
public:
    string Color;
    string Brand;
    double weight;
    double height;
    int Brightness;
    bool IsOn = false;

    void On() {
        cout << "Lamp On\n";
    }

    void Off() {
        cout << "Lamp off\n";
    }

    void straighten() {
        cout << "Lamp is straighten\n";
    }

    void compress() {
        cout << "Lamp is compress\n";
    }

    void Lampochka() {
        cout << "Working\n\n";
    }
};

class Laptop {
public:
    string Color;
    string Brand;
    double weight;
    double height;
    int hertz;
    bool IsOn = false;

    void On() {
        cout << "laptop On\n";
    }

    void Off() {
        cout << "laptop off\n";
    }

    void Bluescreenofdeath() {
        cout << "blue screen of death\n";
    }

    void Quiet() {
        cout << "Lamp is works quietly\n";
    }

    void Noisy() {
        cout << "works noisy\n\n";
    }
};

class Flashlight {
public:
    string Color;
    string Brand;
    double weight;
    double height;
    int distance;
    bool IsOn = false;

    void On() {
        cout << "Flashlight On\n";
    }

    void Off() {
        cout << "Flashlight off\n";
    }

    void BatteryHave() {
        cout << "there is a battery\n";
    }

    void BatteryDontHave() {
        cout << "no battery\n";
    }

    void Isactingup() {
        cout << "the flashlight is acting up\n\n";
    }
};

class Ps3 {
public:
    string Color;
    string Model;
    double weight;
    double height;
    int games;
    bool IsOn = false;

    void On() {
        cout << "Ps3 On\n";
    }

    void Off() {
        cout << "Ps3 off\n";
    }

    void MGS3() {
        cout << "Metal Gear Solid 3: Snake Eater On\n";
    }

    void TwistedMetal() {
        cout << "Twisted Metal On\n";
    }

    void PVZ() {
        cout << "Plants vs Zombie On\n\n";
    }
};

class GrannyGame {
public:
    string Name;
    string placeofresidence;
    double weight;
    double height;
    int years;
    bool Is_Alive = true;

    void Idle() {
        cout << "Granny is stand\n";
    }

    void Walk() {
        cout << "Granny is walk\n";
    }

    void Hit() {
        cout << "Granny is hit you\n";
    }

    void Kill() {
        cout << "Granny is kill you\n";
    }

    void Eat() {
        cout << "Granny is eaty you\n\n";
    }
};

int main()
{
    Desklamp desklamp;
    desklamp.Brand = "Philips";
    desklamp.Color = "black";
    desklamp.height = 30;
    desklamp.IsOn = true;
    desklamp.Brightness = 4;
    desklamp.weight = 5.5;
    desklamp.On();
    desklamp.Off();
    desklamp.straighten();
    desklamp.compress();
    desklamp.Lampochka();

    Laptop laptop;
    laptop.Brand = "hp";
    laptop.Color = "gray";
    laptop.height = 23;
    laptop.IsOn = true;
    laptop.hertz = 4;
    laptop.weight = 1.5;
    laptop.On();
    laptop.Off();
    laptop.Bluescreenofdeath();
    laptop.Quiet();
    laptop.Noisy();

    Flashlight flashlight;
    flashlight.Brand = "Yajia";
    flashlight.Color = "yellow";
    flashlight.height = 23;
    flashlight.IsOn = true;
    flashlight.distance = 500;
    flashlight.weight = 1.5;
    flashlight.On();
    flashlight.Off();
    flashlight.BatteryHave();
    flashlight.BatteryDontHave();
    flashlight.Isactingup();

    Ps3 ps3;
    ps3.Color;
    ps3.Model = "Slim";
    ps3.height = 274;
    ps3.weight = 5;
    ps3.games = 3;
    ps3.IsOn = true;
    ps3.On();
    ps3.Off();
    ps3.MGS3();
    ps3.TwistedMetal();
    ps3.PVZ();

    GrannyGame granny;
    granny.Name = "Zina";
    granny.placeofresidence = "house in the middle of the forestе";
    granny.height = 168;
    granny.weight = 50;
    granny.years = 70;
    granny.Is_Alive = true;
    granny.Idle();
    granny.Walk();
    granny.Hit();
    granny.Kill();
    granny.Eat();
}