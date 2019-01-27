#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Virus
{
    private:
        string name;
        int malignancy;
        int age;
    public:
        Virus()
        {
        };

        void SetName(string _name)
        {
            name = _name;
        };

        void SetMalignancy(int _malignancy)
        {
            malignancy = _malignancy;
        };

        void SetAge(int _age)
        {
            age = _age;
        };

        void Update()
        {
            age++;

            if(name != "4L4Y" && name != "B41K")
            {
                if(name != "M4G3R")
                {
                    if(name == "LBHB41K")
                    {
                        if(age%5 == 0)
                        {
                            malignancy--;
                        }

                        if(malignancy < 0)
                        {
                            malignancy = 0;
                        }
                        if(malignancy > 99)
                        {
                            malignancy = 99;
                        }
                    }

                    else if(name == "ABA81L")
                    {
                        if(age < 100)
                        {
                            if(age%4 ==0)
                            {
                                malignancy += 7;
                            }
                        }
                        if(age > 100)
                        {
                            if(age%10 ==0)
                            {
                                malignancy /= 2;
                            }
                        }
                        if(malignancy < 0)
                        {
                            malignancy = 0;
                        }
                        if(malignancy > 99)
                        {
                            malignancy = 99;
                        }
                    }

                    else if(name == "ABA81LV2")
                    {
                        malignancy++;
                        if(age < 100)
                        {
                            if(age%4 ==0)
                            {
                                malignancy += 7;
                            }
                        }
                        if(age > 100)
                        {
                            if(age%10 ==0)
                            {
                                malignancy /= 2;
                            }
                        }
                        if(malignancy < 0)
                        {
                            malignancy = 0;
                        }
                        if(malignancy > 99)
                        {
                            malignancy = 99;
                        }
                    }

                    //LebayEffect
                    else
                    {
                        if(age >= 200)
                        {
                            if(age%5 == 0)
                            {
                                malignancy += 2;
                            }

                            if(malignancy < 0)
                            {
                                malignancy = 0;
                            }
                            if(malignancy > 99)
                            {
                                malignancy = 99;
                            }
                        }
                        else
                        {
                            if(age%3 == 0)
                            {
                                malignancy++;
                            }

                            if(malignancy < 0)
                            {
                                malignancy = 0;
                            }
                            if(malignancy > 99)
                            {
                                malignancy = 99;
                            }
                        }
                    }
                }
            }
            else
            {
                if(name == "4L4Y")
                {
                    malignancy += 2;

                    if(malignancy < 0)
                    {
                        malignancy = 0;
                    }
                    if(malignancy > 99)
                    {
                        malignancy = 99;
                    }
                }
                if(name == "B41K")
                {
                    if(age%100 == 0)
                    {
                        malignancy++;
                    }

                    if(malignancy < 0)
                    {
                        malignancy = 0;
                    }
                    if(malignancy > 99)
                    {
                        malignancy = 99;
                    }
                }
            }

            if(age<365 or name[0]=='D')
            {
                cout << "Nama: " << name << "; Usia: " << age << "; Tingkat Keganasan: " << malignancy << endl;
            }
        };
};

int main()
{
    int numberOfVirus;
    int numberOfDay;

    string virusName;
    int virusAge;
    int virusMalignancy;

    vector<Virus*> viruses;

    cin >> numberOfVirus;
    cin >> numberOfDay;

    for(int i=0; i<numberOfVirus; i++)
    {
        cin >> virusName;
        cin >> virusAge;
        cin >> virusMalignancy;

        Virus *virus = new Virus();
        virus->SetName(virusName);
        virus->SetAge(virusAge);
        virus->SetMalignancy(virusMalignancy);

        viruses.push_back(virus);
    }

    for(int day=1; day<=numberOfDay; day++)
    {
        cout << "Hari #" << day << endl;
        for(int i=0; i<(int)viruses.size(); i++)
        {
            viruses[i]->Update();
        }
    }
}
