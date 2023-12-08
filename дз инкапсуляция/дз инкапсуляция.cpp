#include <iostream>
#include<ctime>
using namespace std;
class People;
class Dog {
private:
    bool tail;
    int count_ears;
    int count_legs;
    bool wool;
    int age;
    double weight = 23.5;

    string name;
    string breed;
    /*string size = "big";*/
    bool is_happy;
    int hungry = 100;
    string comands[4] = { "sit", "lie", "stand", "voice" };
    string comand;
    
    int smart;
    int energy;
public:
    void SetSmart(int s)
    {
        smart = s;
    }
    int GetSmart()
    {
        return smart;
    }
    void SetEnergy(int e)
    {
        energy = e;
    }
    int GetEnergy()
    {
        return energy;
    }
    
    void SetComand(string c, int width)
    {
        for(int i = 0; i < width; i++)
            if(comands[i] == c)
                comand = c;
    }
    string GetComand()
    {
        return comand;
            
    }
    void SetHungry(int hun)
    {
        hungry = hun;
    }
    int GetHungry()
    {
        return hungry;
    }
    void SetHappy(bool h)
    {
        is_happy = h;
    }
    bool GetHappy()
    {
        return is_happy;
    }
    void SetName(string n)
    {
        
        name = n;
    }
    string GetName()
    {
        return name;
    }

    void SetBreed(string b)
    {
        
        breed = b;

    }
    string GetBreed()
    {
        return breed;
    }
    void SetWeight(double wei)
    {
        if (wei > 0 && wei < 40)
        {
            weight = wei;
        }
    }
    double GetWeight()
    {
        return weight;
    }
    void SetAge(int a)
    {
        if (a > 0 && a < 16)
        {
            age = a;
        }
    }
    int GetAge()
    {
        return age;
    }
    void SetWool(bool w)
    {
        wool = w;
    }
    bool GetWool()
    {
        return wool;
    }
    void SetTail(bool t)
    {        
           tail = t;
    }
    bool GetTail()
    {
        return tail;
    }
    void SetLegs(int l)
    {
        if (l > 0 && l < 5)
        {
            count_legs = l;
        }
    }
    int GetLegs()
    {
        return count_legs;
    }
    void SetEars(int e)
    {
        if (e > 0 && e < 3)
        {
            count_ears = e;
        }
    }
    int GetEars()
    {
        return count_ears;
    }
    void SayGav()
    {
        cout << "Gav gav\n";
    }
    void Print()
    {
        cout << "\t:" << name << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Breed: " << breed << "\n";
        cout << "Energy: " << energy << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Smart: " << smart << "\n";

        cout << "Is happy?: ";
        if (is_happy == 1)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    void GetUp()
    {
        cout << name << " gets up\n";
    }
    void Sleep()
    {
        cout << name << " is sleeping\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void StudyComands(string comand)
    {
        if (energy > 30)
        {

            if (comands[0] == comand)
            {
                smart += 8;
                energy -= 10;

                cout << name << " trying study sit comand\n";
            }

            else if (comands[1] == comand)
            {
                smart += 10;
                energy -= 10;

                cout << name << " trying study lie comand\n";
            }
            else if (comands[2] == comand)
            {
                smart += 10;
                energy -= 20;

                cout << name << " trying study stand comand\n";
            }
            else if (comands[3] == comand)
            {
                smart += 20;
                energy -= 30;

                cout << name << " trying study voice comand\n";
            }
            else
            {
                cout << name << " don't know how to learn this comand\n";
            }
            is_happy = false;
            
        }

    }

    void Licking(string h)
    {
        cout << name << " lick " << h << "\n";
        is_happy = true;
    }

    void Eat()
    {
        cout << "dog is eating\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void Drink()
    {
        cout << "dog is drinking water\n";
        if (energy != 100)
            energy += 10;
        else
            energy = 100;
    }

    void Walking()
    {
        if (energy >= 30)
        {

            cout << "Gav gav go to outside\n";

            energy -= 20;
            is_happy = true;
        }
    }
};

class People {
private:
    bool mood;
    int age;
    string name;
    double weight;
    string surname;
    string dogs_meals[6] = { "meat", "korm", "carrot", "fish", "zucchini", "porridge" };
    string meal;
    int energy;
public:
    void SetEnergy(int e)
    {
        energy = e;
    }
    int GetEnergy()
    {
        return energy;
    }
    void SetWeight(double wei)
    {
        if (wei > 0 && wei < 268)
        {
            weight = wei;
        }
    }
    double GetWeight()
    {
        return weight;
    }
    void SetName(string n)
    {
        
        
        name = n;
    }
    string GetName()
    {
        return name;
    }
    void SetSurname(string sur)
    {
        
        surname = sur;
    }
    string GetSurname()
    {
        return surname;
    }
    void SetMood(bool m)
    {
        mood = m;
    }
    bool GetMood()
    {
        return mood;
    }
    void SetAge(int a)
    {
        if (a > 0 && a < 120)
        {
            age = a;
        }
    }
    int GetAge()
    {
        return age;
    }
    void SetMeal(string m, int width)
    {
        for (int i = 0; i < width; i++)
            if (dogs_meals[i] == m)
                meal = m;
    }
    string GetMeal()
    {
        return meal;

    }
    void Print()
    {
        cout << " :" << name << " " << surname << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Mood: ";
        if (mood == 1)
            cout << "good\n";
        else
            cout << "bad\n";


    }
    void GetUp()
    {
        cout << "Good morning to you\n";
    }
    void Sleep()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 40;
        cout << "You go to bed\n";
    }
    void Eat()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 20;
        cout << "You eating \n";
    }
    void Walk(Dog& d)
    {
        if (energy > 20)
        {

            cout << "You go walking with your friend " << d.GetName() << "\n";

            energy -= 20;
        }
    }

    void Feed(string meal, Dog d)
    {
        int hun = 100;
        if (energy > 10)
        {
            
            if (dogs_meals[0] == meal)
            {
                
                if (hun == 100)
                {
                    hun = 100;
                    d.SetHungry(hun);
                }                    
                else
                    d.SetHungry(hun += 20);

                d.SayGav();
                d.SayGav();

                cout << d.GetName() << " eating\n";
            }

            else if (dogs_meals[1] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    d.SetHungry(hun);
                }                   
                else
                {
                    hun += 10;
                    d.SetHungry(hun);
                }

                d.SayGav();
                cout << d.GetName() << " started eating\n";
            }
            else if (dogs_meals[2] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    d.SetHungry(hun);
                }
                else
                {
                    hun += 1;
                    d.SetHungry(hun);
                }

                cout << d.GetName() << " looked at you and ate you in disgust\n";
            }
            else if (dogs_meals[3] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    d.SetHungry(hun);
                }
                else
                {
                    hun += 8;
                    d.SetHungry(hun);
                }

                cout << d.GetName() << "started playing with it and ate it\n";
            }
            else if (dogs_meals[4] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    d.SetHungry(hun);
                }
                else
                {
                    hun += 3;
                    d.SetHungry(hun);
                }

                cout << d.GetName() << " ate the food\n";
            }
            else if (dogs_meals[5] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    d.SetHungry(hun);
                }
                else
                {
                    hun += 5;
                    d.SetHungry(hun);
                }

                cout << d.GetName() << " started beeping\n";
            }
            else
            {

                cout << d.GetName() << " BBUUEEEE\n";
            }
            energy -= 10;
        }
    }
};

class Computer {
private:

    int version;
    double price;
    string model;
    
    bool mech_keyboard;
    string color;
public:
    void SetMechKeyboard(bool k)
    {
        mech_keyboard = k;
    }
    bool GetMechKeyboard()
    {
        return mech_keyboard;
    }
    void SetColor(string c)
    {
        color = c;
    }
    string GetColor()
    {
        return color;
    }
    void SetModel(string m)
    {
        model = m;
    }
    string GetModel()
    {
        return model;
    }
    void SetPrice(double p)
    {
        if (p > 0 && p < 2000000)
            price = p;
        else
            throw "Error";
    }
    double GetPrice()
    {
        return price;
    }
    void SetVersion(int v)
    {
        version = v;
    }
    int GetVersoin()
    {
        return version;
    }
    void Calculate(People& h)
    {
        int ener = h.GetEnergy();
        h.SetEnergy(ener -= 20);
        cout << "Computer start calculate math equation\n";
    }

    void SaveFiles()
    {
        cout << "Files saves\n";
    }
    void DownloadGame()
    {
        cout << "Computer almost download your game\n";
    }
    void MakeNoise(People& h)
    {
        h.SetMood(false);
        cout << "sssshhhhhhh\n";
    }

    void BreakDown(People& h)
    {
        h.SetMood(false);
        cout << "ops, computer kaput\n";
    }

    void SwitchIllumination(string color, People& h)
    {
        int ener = h.GetEnergy();
        if (h.GetEnergy() == 100)
            h.SetEnergy(100);
        else
        {
            ener += 5;
            h.SetEnergy(ener);
        }
           
        cout << "Illumination on keyboard\n";
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
        h.SetMood(true);

    }
};

class Juice {
private:
    int line;
    double price;
    string title;
    string taste;
   
    bool fresh_made;
public:
    void SetTaste(string tas)
    {
        taste = tas;
    }
    string GetTaste()
    {
        return taste;
    }
    void SetFresh(bool f)
    {
        fresh_made = f;
    }
    bool GetFresh()
    {
        return fresh_made;
    }
    void SetTitle(string t)
    {
        title = t;
    }
    string GetTitle()
    {
        return title;
    }
    void SetPrice(double p)
    {
        if (p > 0 && p < 1000)
            price = p;
        else
            throw "Very expencive juice";
    }
    double GetPrice()
    {
        return price;
    }
    void SetLine(int l)
    {
        line = l;
    }
    int GetLine()
    {
        return line;
    }
    void Overstay(People& h)
    {
        h.SetMood(true);
        cout << "this bad idea\n";
    }

    void BeTasty(People& h)
    {
        int ener = h.GetEnergy();
        if (ener == 100)
        {
            ener = 100;
        }
        else
        {

            h.SetMood(true);
            cout << "delicious juice\n";
            ener += 15;
            h.SetEnergy(ener);
        }
    }

    void Evaporate(People& h)
    {
        int ener = h.GetEnergy();
        h.SetMood(false);
        ener -= 5;
        h.SetEnergy(ener);
        cout << "juice is gone\n";
    }

    void MakeBubbles(People& h)
    {
        h.SetMood(true);
        cout << "the juice looks delicious\n";
    }

    void BitSpilled(People& h)
    {
        int ener = h.GetEnergy();
        h.SetMood(false);
        ener -= 5;
        h.SetEnergy(ener);
        cout << "I am handyman(\n";
    }
};

class Lamp {
private:
    int model;
    int line;
    
    double price;
    string color;
    string brand;
public:
    void SetBrand(string b)
    {
        brand = b;
    }
    string GetBrand()
    {
        return brand;
    }
    void SetColor(string c)
    {
        color = c;
    }
    string GetColor()
    {
        return color;
    }
    void SetModel(int m)
    {
        model = m;
    }
    int GetModel()
    {
        return model;
    }
    void SetPrice(double p)
    {
        if (p > 0 && p < 2000)
            price = p;
        else
            throw "Error";
    }
    double GetPrice()
    {
        return price;
    }
    void SetLine(int l)
    {
        line = l;
    }
    int GetLine()
    {
        return line;
    }
    void TurnOn()
    {
        cout << "light on\n";
    }

    void TurnOf()
    {
        cout << "light off\n";
    }


    void SelectLightColor(string color, People& h)
    {
        int ener = h.GetEnergy();
        ener += 5;
        h.SetEnergy(ener);
        
        h.SetMood(true);
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
    }
    void BurnOut(People& h)
    {
        h.SetMood(false);

        cout << "lamp burn out\n";
    }

    void BlowUp(People& h)
    {
        h.SetMood(false);
        int ener = h.GetEnergy();
        ener += 5;
        h.SetEnergy(ener);
        cout << "ops, bad lamp blew up\n";
    }
};

class Kino {
private:
    double score;
    int count_coments;
    string appellation;
    string genre;
    string topic;
   
public:
    void SetTopic(string t)
    {
        topic = t;
    }
    string GetTopic()
    {
        return topic;
    }
    void SetGenre(string g)
    {
        genre = g;
    }
    string GetGenre()
    {
        return genre;
    }
    void SetAppellation(string a)
    {
        appellation = a;
    }
    string GetAppellation()
    {
        return appellation;
    }
    void SetCountComents(int c)
    {
        count_coments = c;
    }
    int GetCountComents()
    {
        return count_coments;
    }
    void SetScore(double s)
    {
        score = s;
    }
    double GetScore()
    {
        return score;
    }
    void MovieEntrance(People& h)
    {
        h.SetMood(false);
        cout << "date when we can see movie\n";
    }

    void RackBrain(People& h)
    {
        int ener = h.GetEnergy();
        if (ener != 100)
        {

            cout << "Film is difficult to brain\n";
            ener -= 15;
            h.SetEnergy(ener);
        }
        else
        {

            ener = 100;
            h.SetEnergy(ener);
        }

    }

    void TellAdvertisement()
    {
        cout << "Intresting film\n";
    }

    void EducatePeople(People& h)
    {
        int ener = h.GetEnergy();
        if (ener != 100)
        {

            cout << "Films about history\n";
            ener -= 10;
            h.SetEnergy(ener);
        }
        else
        {

            ener = 100;
            h.SetEnergy(ener);
        }

    }

    void UpliftMood(People& h)
    {
        h.SetMood(true);
        cout << "Up lift your mood\n";
    }
};

int main()
{
    srand(time(0));
    People h;
    Dog d;
    Computer c;
    Kino k;
    Lamp l;
    Juice j;
    k.SetGenre("Detective");
    string comand;
    string meal;
    string nick;
    string breed;
    string name;
    string surname;
    int age_human;
    int age_dog;
    
    d.SetSmart(0);
    h.SetEnergy(100);
    d.SetEnergy(100);
    cout << "What is your name?\n";
    cin >> name;
    h.SetName(name);
    cout << "What is your surname?\n";
    cin >> surname;
    h.SetSurname(surname);
    cout << "How old are you - ";
    cin >> age_human;
    h.SetAge(age_human);
    l.SetColor("white");
    
    d.SetLegs(4);
    d.SetEars(2);
    h.SetWeight(68.6);
    
    cout << "Name of your dog - ";
    cin >> nick;
    d.SetName(nick);
    d.GetName();

    cout << "Age your dog - ";
    cin >> age_dog;
    d.SetAge(age_dog);
    d.GetAge();
    cout << "Breed of your dog - ";
    cin >> breed;
    d.SetBreed(breed);
    d.GetBreed();



    h.GetUp();
    d.GetUp();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    h.Walk(d);
    d.SayGav();
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    l.TurnOn();
    l.SelectLightColor("pink", h);
    c.Calculate(h);
    c.DownloadGame();
    l.BurnOut(h);
    d.SayGav();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    d.Licking(h.GetName());
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    d.Sleep();
    k.MovieEntrance(h);
    j.BeTasty(h);
    d.GetUp();
    d.Walking();
    k.TellAdvertisement();
    k.EducatePeople(h);
    d.SayGav();
    k.RackBrain(h);
    k.UpliftMood(h);
    d.SayGav();
    j.BitSpilled(h);
    c.MakeNoise(h);
    c.BreakDown(h);
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Sleep();
    h.Sleep();
    
    d.Print();
    h.Print();
}
