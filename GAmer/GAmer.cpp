#include <iostream> 


using namespace std;

int main()
{
    int choice_1 = 0;
    int choice_2 = 0;
    int choice_3 = 0;
    int choice_4 = 0;
    int choice_5 = 0;
    int choice_6 = 0;
    int choice_7 = 0;

    // Начало  

    cout << "Diktor: You woke up early in the morning and went to have breackfast." << endl;
    cout << "        At the table, your dad asks you to go buy some bread." << endl;
    cout << "           -- You have three possible answers -- " << endl;

    // 

    // Выборы с ответом для Бати  

    do {

        cout << "        to select (Go for bread) write 1" << endl;
        cout << "        to select (Say that your head hurts) write 2" << endl;
        cout << "        to select (Tell him to go himself) write 3" << endl;

        cin >> choice_1;

        switch (choice_1)
        {
        case 1:
            cout << "Dictor: You got dressed and left the house." << endl;
            cout << "        On the street you met a friend" << endl;
            cout << "        to whom you owe money. " << endl;  break;

        case 2:
            cout << "Dad:    If it is not a temperatur, you can go anywhere." << endl; break;

        case 3:
            cout << "Dad:    I have a match on TV." << endl; break;

        default:
            cout << " try again " << endl; break;
        }
    } while (choice_1 > 3 || choice_1 < 0);


    if (choice_1 != 1)
    {
        cout << "Dictor: You got dressed and left the house." << endl;
        cout << "        On the street you met a friend" << endl;
        cout << "        to whom you owe money. " << endl;
    }

    // 

    cout << "           -- You have three possible answers -- " << endl;

    // Выборы при виде друга  

    do {

        cout << "        to select (Talk to him) write 1" << endl;
        cout << "        to select (Go back home and wait for him to pass) write 2" << endl;
        cout << "        to select (Try to pass without being noticed) write 3" << endl;

        cin >> choice_2;

        switch (choice_2)
        {
        case 1:
            cout << "Your friend: Hi! When will you return the debt? " << endl; break;

        case 2:
            cout << "Dictor: Your dad noticed you and spanked you with a belt because you didn't buy any bread." << endl; break;

        case 3:
            cout << "Dictor: He didn`t see you." << endl; break;

        default:
            cout << " try again " << endl; break;
        }
    } while (choice_2 > 3 || choice_2 < 0);

    // 

    // Путь если выбрал пойти и подождать пока друг пройдет  

    if (choice_2 == 2)
    {
        return 0;
    }

    // 

    // Путь если выбрал поговорить с другом 

    if (choice_2 == 1)
    {
        cout << "You:         Hi! I will give it back tomorrow." << endl;

        cout << "Your friend: Okay, but don't put it off for a long time, Otherwise it will be worse." << endl;

        cout << "Diktor: You bought some bread, came home gave bread to your dad, played for a lil bit and went in your bed" << endl;
    }

    // 


    // Путь если выбрал пройти мимо 

    if (choice_2 == 3)
    {
        cout << "Dictor: You went to the store, bought some bred and went home," << endl;
        cout << "        but on the way back you heard some noise around the corner. " << endl;
        cout << "            -- You have two possible answers -- " << endl;


        do {

            cout << "        to select (Go around the corner) write 1" << endl;
            cout << "        to select (Dad is waiting) write 2" << endl;

            cin >> choice_3;

            switch (choice_3)
            {
            case 1:
                cout << "Dictor: You turned the corner but " << endl;
                cout << "        saw nothing but a lonely amulet, " << endl;
                cout << "        which you took and put in your pocket. " << endl; break;

            case 2:
                cout << "Dictor: You came home, gave bread to your dad, played for a lil bit and went in your bed."; break;

            default:
                cout << " try again " << endl; break;
            }
        } while (choice_3 > 2 || choice_3 < 0);



        if (choice_3 == 1)
        {
            cout << "Dictor: You came home, gave bread to your dad, played for a lil bit and went in your bed." << endl;
        }
    }

    // 

     // Ты проснулся и собираешься в школу  

    cout << "Dictor: You woke up, washed yourself," << endl;
    cout << "        brushed your teeth and went to get ready for school." << endl;
    cout << "        You packed your bag and started choosing what to wear." << endl;
    cout << "            -- You have two possible answers-- " << endl; 

        cout << "        to select (dress for winter) write 1" << endl;
    cout << "        to select (dress for summer) write 2" << endl;

    cin >> choice_4;

    cout << "Dictor: You still have a little time" << endl;
    cout << "        left to do something." << endl;
    cout << "            -- You have two possible answers -- " << endl;

    cout << "        to select (Rewiew math for today's test) write 1" << endl;
    cout << "        to select (Prepare food for school) write 2" << endl;

    cin >> choice_5;

    // 

     // Время в школе 

    cout << "Dictor: You came to school and the first lesson was mathematics." << endl;

    do {

        switch (choice_5)
        {
        case 1:
            cout << "Dictor: You wrote the test easily and got a 5." << endl; break;
        case 2:
            cout << "Dictor: You did not know that to write and got a 2." << endl; break;
        default:
            cout << " try again " << endl; break;
        }
    } while (choice_5 > 2 || choice_5 < 0);

    // 

    // Перемена 

    cout << "Dictor: During the break you saw some boys bullying another boy." << endl;
    cout << "        After they pushed him," << endl;
    cout << "        he fell at your feet and " << endl;
    cout << "        you were asked to kick him back." << endl;
    cout << "            -- You have two possible answers -- " << endl;

    do {

        cout << "        to select (Help him) write 1" << endl;
        cout << "        to select (kick him) write 2" << endl;

        cin >> choice_6;

        switch (choice_6)
        {
        case 1:
            cout << "Dictor:  You helped him up and told them not to bully him." << endl; break;
        case 2:
            cout << "Dictor:  You kicked him after that, they told you that you were a good guy." << endl; break;
        default:
            cout << " try again " << endl; break;
        }
    } while (choice_6 > 2 || choice_6 < 0);



    if (choice_6 == 1)
    {
        cout << "Agrisive Boy: Feeling like a hero?" << endl;
        cout << "Agrisive Boy: Now let's see that you will do." << endl;

        cout << "Teacher: What is going on here!" << endl;
        cout << "         Quickly, everyone to their classes," << endl;
        cout << "         class is coming soon!" << endl;

        cout << "Agrisive Boy: This is not the end." << endl;

    }

    if (choice_6 == 2)
    {
        return 0;
    }

    // 

    // Посдный урок  

    cout << "Dictor: After the last lesson you met your friend." << endl;
    cout << "Friend: Hello are you ready to pay off the debt?" << endl;
    cout << "            -- You have two possible answers -- " << endl;


    do {

        cout << "        to select (Yes) write 1" << endl;
        cout << "        to select (No) write 2" << endl;

        cin >> choice_7;

        switch (choice_7)
        {
        case 1:
            cout << "Friend: Thank you," << endl;
            cout << "        I knew you were a good friend." << endl; break;

        case 2:
            cout << "Friend: I knew you were not a friend." << endl;
            cout << "        You are not my friend anymore." << endl; break;

        default:
            cout << " try again " << endl; break;
        }
    } while (choice_7 > 2 || choice_7 < 0);

    // 

    return 0;
}