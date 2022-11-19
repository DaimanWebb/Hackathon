#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string a1 = "The Matrix is everywhere. It is all around us, even now in this very room. You can see it when you look out your window or when you turn on your television. You can feel it when you go to work, when you go to church, when you pay your taxes. It is the world that has been pulled over your eyes to blind you from the truth.";
string a2 = "The truth is that you are a slave, Neo. Like everyone else you were born into bondage, born into a prison that you cannot smell or taste or touch. A prison for your mind...Unfortunately, no one can be told what the Matrix is. You have to see it for yourself. This is your last chance. After this there is no turning back. You take the blue pill, the story ends, you wake up in your bed and believe whatever you want to believe. You take the red pill, you stay in Wonderland, and I show you how deep the rabbit hole goes...";
string a3 = "Remember, all I’m offering is the truth, nothing more...";

void typewriter1(string a) {
    int x=0;
    while ( a[x] != '\0')
    {
        cout << a[x];
        Sleep(250);
        x++;

    }
}

void typewriter(string a) {
    int x=0;
    while ( a[x] != '\0')
    {
        cout << a[x];
        Sleep(1);
        x++;

    }
}

void tulsa () {
    typewriter("\"I could see planes circling in mid-air. They grew in number and hummed, darted and dipped low. I could hear something like hail falling upon the top of my office building. Down East Archer, I saw the old Mid-Way hotel on fire, burning from it’s top, and another and another. It all began to burn.\"");
    cout << endl;
    cout << "     - Buck Colbert Franklin" << endl << endl;
    typewriter("Following the end of the Civil War and the abolition of slavery, blacks were allotted plots of land where they could begin their new lives as free men and women. This land allocation, with the help of wealthy black land owners, led to a boom in all-Black towns, the most successful of which being Tulsa Oklahoma, or better known as Black Wall-Street.");
    cout << endl << endl;
    typewriter("It was proven that blacks were not the incompetent savages that they had been made out to be. When given the opportunity, they were able to build wealth never before conceivable for the black race. And this simply could not be accepted.");
    cout << endl << endl;
    typewriter("Long standing racial tension building in the city had led to a breaking point, and over the course of two days, from May 31 – June 1, 1921, attackers (largely white) burned and destroyed more than 35 square blocks of the neighborhood, leaving 800 hospitalized and 36 dead. ");
    cout << endl << endl;
    typewriter("No whites were arrested. No whites were prosecuted. No reparations were given. The people stayed silent. Their trauma was lost to time and forgotten by those that came after. I tell this to you Neo so that you can free your mind from the narrative that the Matrix controls. But only you can make that choice. ");
    cout << endl;
}

void tusk () {
    typewriter("The Tuskegee Study of Untreated Syphilis in the Negro Male was a study conducted between 1932 and 1972 by the United States Public Health Service and the Centers for Disease Control and Prevention on a group of nearly 400 African Americans with syphilis. The purpose of the study was to observe the effects of the disease when untreated, and by the end of the study medical advancements meant it was entirely treatable. The men were not informed of the nature of the experiment, and more than 100 died as a result.");
    cout << endl << endl;
    typewriter("In the study, investigators enrolled a total of 600 impoverished African-American sharecroppers from Macon County, Alabama. Of these men, 399 had latent syphilis, with a control group of 201 men who were not infected. As an incentive for participation in the study, the men were promised free medical care. While the men were provided with both medical and mental care that they otherwise would not have received, they were deceived by the PHS, who never informed them of their syphilis diagnosis and provided disguised placebos, ineffective methods, and diagnostic procedures as treatment for \"bad blood\"");
    cout << endl << endl;
    typewriter("The men were initially told that the experiment was only going to last six months, but it was extended to 40 years. After funding for treatment was lost, the study was continued without informing the men that they would never be treated. None of the infected men were treated with penicillin despite the fact that, by 1947, the antibiotic was widely available and had become the standard treatment for syphilis.");
    cout << endl << endl;
    typewriter("The study continued, under numerous Public Health Service supervisors, until 1972, when a leak to the press resulted in its termination on November 16 of that year. By then, 28 patients had died directly from syphilis, 100 died from complications related to syphilis, 40 of the patients' wives were infected with syphilis, and 19 children were born with congenital syphilis.");
    cout << endl << endl;
    typewriter("On May 16, 1997, President Bill Clinton formally apologized on behalf of the United States to victims of the study, calling it shameful and racist. \"What was done cannot be undone, but we can end the silence,\" he said. \"We can stop turning our heads away. We can look at you in the eye, and finally say, on behalf of the American people, what the United States government did was shameful and I am sorry.\"");
    cout << endl << endl;
    typewriter("Isn’t that nice Neo? The president is sorry. He feels bad. But he couldn’t put his money where his mouth was. No reparations were given to the families of the innocent men who were left to die. That should make you angry Neo. The truth should make you very, very angry. But the truth is never finished. There is always more. It always goes deeper");
    cout << endl << endl;

}

int main()
{
    system("Color 0A");
    typewriter1("It's time to wake up Neo...");
    cout << endl;
    typewriter("Follow the black rabbit");
    string x;
    cin >> x;
    if (x == "...") {
        typewriter(a1);
        cout << endl << endl;
        typewriter(a2);
        cout << endl << endl;
        typewriter(a3);
    }

    typewriter("Press r for the red pill. Press b for the blue pill. Remember, you only get one choice.");
    cout << endl;
    char y;
    cin >> y;
    if (y == 'b') {
        typewriter("America is the greatest country on earth. Everyone gets along and is equal. There is no such thing as inequality here, just like there is no war in ba sing se. God bless my country. God bless America.");
        return 1;
    }

    cout << endl << endl;

    typewriter("So, you have chosen the red pill. Then come. Let us reveal what truly lies in the darkest reaches of forgotten history.");
    cout << endl << endl;
    char z = 'n';
    while (z == 'n') {
        typewriter("1 or 2: Tusla; Tuskegee");
        int a;
        cin >> a;
        if (a == 1) {
            tulsa();
            typewriter("Are you beginning to see it yet Neo? That which the enslaved mind cannot bear. That which men millions strong have spent every waking hour trying to destroy. Do you see the truth?");
            char a;
            cin >> a;
            if (a == 'n') {
                typewriter("You can't handle the truth.");
                cout << endl;
                cout << "TERMINATE PROGRAM";
                exit(1);
            }
            typewriter("Have you seen enough?");
            cout << endl;
            cin >> z;
        }

        else {
            tusk();
            typewriter("Are you beginning to see it yet Neo? That which the enslaved mind cannot bear. That which men millions strong have spent every waking hour trying to destroy. Do you see the truth?");
            char a;
            cin >> a;
            if (a == 'n') {
                typewriter("You can't handle the truth.");
                cout << endl;
                cout << "TERMINATE PROGRAM";
                exit(1);
            }
            typewriter("Have you seen enough?");
            cout << endl;
            cin >> z;
        }
    }

    typewriter("You’ve seen enough for now. But do not forget what I have shown you. There will come a day when your mind must be fully freed. Remember this day, for the truth does not seek. The truth must be sought.");

	return 0;
}
