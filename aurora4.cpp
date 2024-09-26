
#include <iostream>
#include <list>
#include <vector> 
#include <fstream>
using namespace std;

class Building
{

    string info;

public:


    Building()
    {
        //  cout << "General Building" << endl;

    }

    void setInfo(string buildinginfo) {
        info = buildinginfo;
    }

    string getInfo() {
        return info;
    }

    ~Building()
    {
        // cout << "Destructor called " << endl;
    }

};

class SingleStory : public  Building
{



public:

    //Default Constructor 
    SingleStory()
    {
        // cout << "Single story home" << endl;

    }


    ~SingleStory()
    {
        //  cout << "Destructor called" << endl;
    }

};

class TwoStory : public  Building
{



public:

    //Default Constructor 
    TwoStory()
    {
        //  cout << "Two story home" << endl;

    }



    ~TwoStory()
    {
        // cout << "Destructor called for id: " << endl;
    }

};

class ComercialBuilding : public  Building
{

public:


    ComercialBuilding()
    {
        //  cout << "Comercial Building" << endl;

    }

    ~ComercialBuilding()
    {
        //  cout << "Destructor called " << endl;
    }

};

class Employees
{

    string Qualification;
    string Availability;

public:

    Employees()
    {
        // cout << "General Employee" << endl;

    }

    void setQualification(string Qualificationinfo) {
        Qualification = Qualificationinfo;
    }

    string getQualification() {
        return Qualification;
    }

    void setAvailability(string Availabilityinfo) {
        Availability = Availabilityinfo;
    }

    string getAvailability() {
        return Availability;
    }

    ~Employees()
    {
        //  cout << "Destructor called" << endl;
    }

};

class CertifiedInstaller : public Employees
{

public:

    //Default Constructor 
    CertifiedInstaller()
    {
        //  cout << "CertifiedInstaller" << endl;

    }

    ~CertifiedInstaller()
    {
        // cout << "Destructor called " << endl;
    }

};

class InstallerPendingCertificate : public Employees
{

public:

    //Default Constructor 
    InstallerPendingCertificate()
    {
        //   cout << "InstallerPendingCertificate" << endl;
    }

    ~InstallerPendingCertificate()
    {
        //  cout << "Destructor called"<< endl;
    }

};

class Laborer : public Employees
{


public:

    //Default Constructor 
    Laborer()
    {
        //  cout << "Laborer" << endl;       
    }

    ~Laborer()
    {
        // cout << "Destructor called " << endl;
    }

};

class Job
{
    int gettypeofjob;
    SingleStory SS1;
    TwoStory TS1;
    ComercialBuilding CB1;

    CertifiedInstaller CI1;
    CertifiedInstaller CI2;
    InstallerPendingCertificate IP1;
    InstallerPendingCertificate IP2;

    Laborer L1;
    Laborer L2;
    Laborer L3;
    Laborer L4;


public:


    Job(int typeofjob)
    {
        gettypeofjob = typeofjob;
    }

    //All these information is only for the example but
    //it should be retrived from a DB
    void Jobtype(int gettypeofjob) {

        if (gettypeofjob == 1) {

            std::string info1 = "SingleStoryInfo";
            SS1.setInfo(info1);
            std::string qual1 = "Qualification1";
            std::string availa1 = "Availability1";
            CI1.setQualification(qual1);
            CI1.setAvailability(availa1);

        }
        else if (gettypeofjob == 2)
        {

            std::string info2 = "TwoStoryInfo";
            TS1.setInfo(info2);

            std::string info3 = "SingleStoryInfo2";
            SS1.setInfo(info3);

            std::string qual2 = "Qualification1";
            std::string availa2 = "Availability1";
            CI1.setQualification(qual2);
            CI1.setAvailability(availa2);


            std::string qual3 = "Qualification2";
            std::string availa3 = "Availability2";
            IP1.setQualification(qual3);
            IP1.setAvailability(availa3);

        }
        else if (gettypeofjob == 3) {

            std::string info4 = "ComercialBuildingInfo";
            CB1.setInfo(info4);

            std::string qual4 = "Qualification3";
            std::string availa4 = "Availability3";
            CI1.setQualification(qual4);
            CI1.setAvailability(availa4);

            std::string qual5 = "Qualification4";
            std::string availa5 = "Availability4";
            CI2.setQualification(qual5);
            CI2.setAvailability(availa5);


            std::string qual6 = "Qualification3";
            std::string availa6 = "Availability3";
            IP1.setQualification(qual6);
            IP1.setAvailability(availa6);

            std::string qual7 = "Qualification4";
            std::string availa7 = "Availability4";
            IP2.setQualification(qual7);
            IP2.setAvailability(availa7);

            std::string qual8 = "Qualification5";
            std::string availa8 = "Availability5";

            L1.setQualification(qual8);
            L1.setAvailability(availa8);

            std::string qual9 = "Qualification6";
            std::string availa9 = "Availability6";

            L2.setQualification(qual9);
            L2.setAvailability(availa9);

            std::string qual10 = "Qualification7";
            std::string availa10 = "Availability7";

            L3.setQualification(qual10);
            L3.setAvailability(availa10);

            std::string qual11 = "Qualification8";
            std::string availa11 = "Availability8";

            L4.setQualification(qual11);
            L4.setAvailability(availa11);


        }
    }

    void getinfoemployee() {

        if (gettypeofjob == 1) {

            string string1 = CI1.getQualification();
            cout << "Qualification1" << string1 << endl;
            string string2 = CI1.getAvailability();
            cout << "Availability1" << string2 << endl;

        }
        else if (gettypeofjob == 2)
        {
            string string3 = CI1.getQualification();
            cout << "Qualification2" << string3 << endl;
            string string4 = CI1.getAvailability();
            cout << "Availability2" << string4 << endl;

            string string5 = IP1.getQualification();
            cout << "Qualification3" << string5 << endl;
            string string6 = IP1.getAvailability();
            cout << "Availability3" << string6 << endl;
        }
        else if (gettypeofjob == 3) {

            string string7 = CI1.getQualification();
            cout << "Qualification4" << string7 << endl;
            string string8 = CI1.getAvailability();
            cout << "Availability4" << string8 << endl;

            string string9 = CI2.getQualification();
            cout << "Qualification5" << string9 << endl;
            string string10 = CI2.getAvailability();
            cout << "Availability5" << string10 << endl;

            string string11 = IP1.getQualification();
            cout << "Qualification6" << string11 << endl;
            string string12 = IP1.getAvailability();
            cout << "Availability6" << string12 << endl;

            string string13 = IP2.getQualification();
            cout << "Qualification7" << string13 << endl;
            string string14 = IP2.getAvailability();
            cout << "Availability7" << string14 << endl;


            string string15 = L1.getQualification();
            cout << "Qualification8" << string15 << endl;
            string string16 = L1.getAvailability();
            cout << "Availability8" << string16 << endl;

            string string17 = L2.getQualification();
            cout << "Qualification9" << string17 << endl;
            string string18 = L2.getAvailability();
            cout << "Availability9" << string18 << endl;

            string string19 = L3.getQualification();
            cout << "Qualification10" << string19 << endl;
            string string20 = L3.getAvailability();
            cout << "Availability10" << string20 << endl;

            string string21 = L4.getQualification();
            cout << "Qualification11" << string21 << endl;
            string string22 = L4.getAvailability();
            cout << "Availability11" << string22 << endl;

        }
    }

    //We could fill it up with info as above or retrived from a DB
    void getinfobuildings() {

        string string1 = SS1.getInfo();
        cout << "InfoBuilding" << string1 << endl;

    }

    ~Job()
    {
        //  cout << "Destructor called " << endl;
    }

};


class Calendar
{

    int id;
    int JobsMonday;
    vector<int> buildings{ 5, 2, 5 };
    vector<int> employees{ 20, 20, 20 };

public:

    //Default Constructor 
    Calendar()
    {

    }



    int result(int JMonday) {
        //Entries in these two vectors represent the number # of buildings and employees
        //buildings[0] : Certified installer
        //buildings[1] : Installer pending certification
        //buildings[2] : Laborers
        //employees[0] : Single story homes
        //employees[1] : Two story homes
        //employees[2] : Comercial building
        //the implementation of the input depends on the necessity of the application

        ofstream myfile;
        myfile.open("result.txt");


        vector<int> buildings{ 5, 2, 5 };
        vector<int> employees{ 20, 20, 20 };

        vector<Job> JobsTuesday;
        vector<Job> JobsWednesday;
        vector<Job> JobsThursday;
        vector<Job> JobsFriday;


        /*
        WholeWeek.push_back(JobsMonday);
        WholeWeek.push_back(JobsTuesday);
        WholeWeek.push_back(JobsWednesday);
        WholeWeek.push_back(JobsThursday);
        WholeWeek.push_back(JobsFriday);
        */
        //counters

        int iemployees = employees[0];
        int jemployees = employees[1];
        int kemployees = employees[2];
        //Total number of building we have to make
        int ibuildings = buildings[0] + buildings[1] + buildings[2];

        vector<vector<Job>> WholeWeek;
        vector<Job> JobsMonday;
        Job J1(1);


        int ii = buildings[0];
        int ii2 = buildings[1];
        int ii3 = buildings[2];




        while (iemployees > 1 && jemployees > 1 && kemployees > 1) {

            int buildings0done = 0;

            for (int i = 1; i <= buildings[0]; i++) {


                JobsMonday.push_back(J1);
                iemployees--;
                myfile << "iemployees=" << iemployees << "   jemployees=" << jemployees << "   kemployees=" << kemployees << endl;

                if (iemployees < 1 || jemployees < 1 || kemployees < 1)
                {
                    myfile << "Error: No more personnel available" << endl;

                    myfile << "buildings[0] done = " << i << endl;

                    i = ii;

                }

                buildings0done++;

            }
            myfile << "buildings[0] done = " << buildings0done << endl;

            myfile << "JobsMonday.size()=" << JobsMonday.size() << endl;

            Job J2(2);

            int buildings1done = 0;

            for (int i = 1; i <= buildings[1]; i++) {

                JobsMonday.push_back(J2);
                iemployees--;
                jemployees--;
                myfile << "iemployees=" << iemployees << "   jemployees=" << jemployees << "   kemployees=" << kemployees << endl;

                if (iemployees < 1 || jemployees < 1 || kemployees < 1)
                {
                    myfile << "Error: No more personnel available" << endl;

                    myfile << "buildings[1] done = " << i << endl;

                    i = ii2;
                }

                buildings1done++;

            }

            myfile << "buildings[1] done = " << buildings1done << endl;

            myfile << "JobsMonday.size()=" << JobsMonday.size() << endl;



            Job J3(3);

            int buildings2done = 0;

            for (int i = 1; i <= buildings[2]; i++) {

                JobsMonday.push_back(J3);
                iemployees--;
                jemployees--;
                kemployees--;
                myfile << "iemployees=" << iemployees << "    jemployees=" << jemployees << "    kemployees=" << kemployees << endl;

                if (iemployees < 1 || jemployees < 1 || kemployees < 1)
                {
                    myfile << "Error: No more personnel available" << endl;

                    myfile << "buildings[2] done = " << i << endl;

                    i = ii3;
                }

                buildings2done++;
            }

            myfile << "buildings[2] done = " << buildings2done << endl;

            myfile << "JobsMonday.size()=" << JobsMonday.size() << endl;

            JMonday = static_cast<int>(JobsMonday.size());

            WholeWeek.push_back(JobsMonday);

            myfile << "WholeWeek.size()=" << WholeWeek.size() << endl;

        }


        // cout << "WholeWeek.size()=" << WholeWeek.size() << endl;

         //cout << "WholeWeek.size()=" << WholeWeek[0][0].getinfobuildings() << endl;

        WholeWeek[0][0].getinfobuildings();

        return JMonday;
        myfile.close();

    }


    ~Calendar()
    {

    }

};



int main()
{
    Calendar Cal;

    Cal.result(0);
}

