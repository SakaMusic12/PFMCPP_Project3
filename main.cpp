/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};






/*
Thing 1) dictionary
5 properties:
    1) amount of ink used
    2) number of pages
    3) edition of book
    4) date of publication
    5) weight of book
3 things it can do:
    1) store word definitions
    2) weight another object down
    3) provide synonyms for a word
 */

/*
Thing 2) Airplane
5 properties:
    1) number of seats
    2) number of crewmembers
    3) length in miles to destination
    4) amount of fuel consumed per flight
    5) number of passengers per trip
3 things it can do:
    1) transport passengers
    2) feed passengers
    3) fly at high altitudes
 */

/*
Thing 3) production company
5 properties:
    1) amount of money fundraised
    2) amout of money spent on advertising per year
    3) number of employees
    4) amount of revenue per year
    5) number of cameras
3 things it can do:
    1) produce movies every year
    2) employ technical artists
    3) partner with entertainment company
 */

/*
Thing 4) drumset
5 properties:
    1) number of cymbals
    2) age of kit in years
    3) number of pieces
    4) snare drum diameter
    5) ride cymbal stand height
3 things it can do:
    1) break a drumhead 
    2) play music loudly (db)
    3) adjust the stool height
 */

/*
Thing 5) oscillator
5 properties:
    1) frequency control (hz)
    2) waveform bank
    3) pulse-width control
    4) FM input
    5) amplitude level
3 things it can do:
    1) produce an audible tone
    2) modulate another parameter at audio rates
    3) change timbre
 */

/*
Thing 6) filter
5 properties:
    1) cutoff frequency (hz)
    2) slope (db)
    3) filter bank
    4) resonance amount
    5) drive amount
3 things it can do:
    1) subtract harmonics from an oscillator
    2) self-oscillate
    3) modulate the cutoff frequency
 */

/*
Thing 7) envelope
5 properties:
    1) attack time (ms)
    2) hold time (ms)
    3) decay time (ms)
    4) sustain level (midi)
    5) release time (ms)
3 things it can do:
    1) shape the amplitude of an oscillator
    2) modulate other parameters with positive values
    3) play in one-shot mode, or cycle
 */

/*
Thing 8) compressor
5 properties:
    1) threshold level (db)
    2) ratio of compression
    3) attack time (ms)
    4) release time (ms)
    5) output gain (db)
3 things it can do:
    1) can sidechain compress audio
    2) can lower the dynamic level of the mix
    3) can distort audio
 */

/*
Thing 9) Sequencer
5 properties:
    1) number of tracks
    2) number of steps
    3) tempo control (bpm)
    4) glide control (ms)
    5) quantizer control (midi)
3 things it can do:
    1) pattern melodic sequences
    2) arpeggiate chords
    3) pattern drum beats
 */

/*
Thing 10) Synthesizer
5 properties:
    1) Oscillator
    2) Filter
    3) Envelope
    4) Compressor
    5) Sequencer
3 things it can do:
    1) synthesize sounds
    2) create music
    3) make people dance
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
