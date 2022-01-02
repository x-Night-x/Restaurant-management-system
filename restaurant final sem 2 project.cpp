#include <bits/stdc++.h>
using namespace std;
class slow_display
{
    int i;
    public:
void slow()
{
    for (i = 0; i < 10000000; i++)
    {
        cout << "";
    }
}
void slow1()
{
    for (i = 0; i < 99999900; i++)
    {
        cout << "";
    }
}
};

class display_seats: public slow_display
{
    public:
        int x, y;
    int seat_matrix[7][7];// to display seats in retro!
    void seat_set()
    {
        int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if((i>=1 && i<=5) && (j>=1 && j<=5))
            seat_matrix[i][j] = 0;
            else
            seat_matrix[i][j] = 99;
        }
    }
    }
void seats() //seat matrix
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if ((i == 0 && j == 0) || (i == 6 && j == 0))
            {
                slow();
                cout << "\t =======";
            }
            else if (i == 0 || i == 6)
            {
                slow();
                cout << "=======";
            }
            else if (j == 0)
            {
                slow();
                cout << "\t||  ";
            }
            else if (j == 6)
            {
                slow();
                cout << "\t ||  ";
            }

            else
            {
                slow();
                cout << "\t" << seat_matrix[i][j];
            }
        }
        cout << "\n";
    }
another_choice:
    cout << "\tEnter row and column::";
    cin >> x >> y;
    if (seat_matrix[x][y] == 0)
        seat_matrix[x][y] = 1;
    else if((x<=0 || x>5 || y<=0 || y>5))
    {
        cout<<"\n\tThe seat number you are requesting does not exist."<<endl;
        goto another_choice;
    }
    else
    {
        cout << "\n\tSorry Sir ,this seat is already booked.\n\tPlease choose some other seat\n ";
        goto another_choice;
    }

    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if ((i == 0 && j == 0) || (i == 6 && j == 0))
            {
                slow();
                cout << "\t =======";
            }
            else if (i == 0 || i == 6)
            {
                slow();
                cout<<"=======";
            }
            else if ((i == x) && (j == y))
            {
                slow();
                cout << "\t" << seat_matrix[i][j];
            }

            else if (j == 0)
            {
                slow();
                cout << "\t||  ";
            }
            else if (j == 6)
            {
                slow();
                cout << "\t ||  ";
            }

            else
            {
                cout << "\t" << seat_matrix[i][j];
            }
        }
        cout << "\n";
    }
}
};
class menu_categories //to display menu
{
    public:
int Soup(int n, int m) //price of different soup
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Tomato Soup       " << m << "           |\n";

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Spinach Soup      " << m << "           |\n";

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Sweetcorn Soup    " << m << "           |\n";

        break;
    }
    case 4:
    {
        cout << "\t\t|       4.Hot&Sour Soup     " << m << "           |\n";

        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Starter(int n, int m)//price of different starter
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Cocktail Samosa   " << m << "           |\n";

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Veg Patties       " << m << "           |\n";

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Veg Roll          " << m << "           |\n";

        break;
    }
    case 4:
    {
        cout << "\t\t|       4.Veg Manchurian    " << m << "           |\n";

        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Breads(int n, int m)//price of different breads
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Chapati           " << m << "           |\n";

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Paratha           " << m << "           |\n";

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Naan              " << m << "           |\n";

        break;
    }
    case 4:
    {
        cout << "\t\t|       4.Kulcha            " << m << "           |\n";

        break;
    }
    case 5:
    {
        cout << "\t\t|       5.Bhatura           " << m << "           |\n";

        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Vegetables(int n, int m)//price of different vegeatbles
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Veg Makhani       " << m << "           |\n";

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Paneer Kadhaai    " << m << "           |\n";

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Paneer Mattar     " << m << "           |\n";

        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Salad(int n, int m)//price of different salad
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Green Salad       " << m << "           |\n";

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Alu Chat          " << m << "           |\n";

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Russian Salad     " << m << "           |\n";

        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Sweet(int n, int m)//price of different sweet
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Gulaab Jaamun        " << m << "        |\n";

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Rasgulla          " << m << "           |\"<<m<<";

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Gaajar Halwa      " << m << "           |\n";

        break;
    }
    case 4:
    {
        cout << "\t\t|       4.Shri Kand         " << m << "           |\n";

        break;
    }
    case 5:
    {
        cout << "\t\t|       5.Jalebi            " << m << "           |\n";

        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Baverages(int n, int m)//price of different baverages
{
    cout << "\t\t *************************************** \n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|       Dish:-              Unit:-      |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Cold drink        " << m << "       |" << endl;

        break;
    }
    case 2:
    {
        cout << "\t\t|       2.Cold Coffee       " << m << "      |" << endl;

        break;
    }
    case 3:
    {
        cout << "\t\t|       3.Tea              " << m << "      | " << endl;

        break;
    }
    case 4:
    {
        cout << "\t\t|       4.Hot Coffee        " << m << "      |  " << endl;
        break;
    }
    default:
    {
        cout << "\t\t|=====Wrong input! Please try again=====|\n";
    }
    }
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t|                                       |\n";
    cout << "\t\t *************************************** \n";
    return 0;
}
int Icecream(int n, int m)//price of different ice cream
{
    cout << "\t\t *************************************************** \n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|       Dish:-                          Unit:-      |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    switch (n)
    {
    case 1:
    {
        cout << "\t\t|       1.Vanilla                       " << m << "      |";
            break;
    }
    case 2:
    {
        cout << "\t\t|       2.Strawberry                   " << m << "      |";

            break;
    }
    case 3:
    {
        cout << "\t\t|       3.Chocolate                    " << m << "      |";
            break;
    }
    case 4:
    {
        cout << "\t\t|       4.Vanilla with chocolate sauce    " << m << "      |";

            break;
    }
    default:
    {
        cout << "\t\t|===========Wrong input! Please try again===========|\n";
    }
    }
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t|                                                   |\n";
    cout << "\t\t *************************************************** \n";
    return 0;
}
};


class start_prog : public display_seats //Choosing and reservation of seat
{
    int res_seat_x, res_seat_y;
    public:
int Price;
int cart;
        menu_categories* menu;
void start()
{
    cout << "\t\t\t\t\t\t\t*********************************\n";
    cout << "\t\t\t\t\t\t\tWelcome to Annapurna Restaurant \n";
    cout << "\t\t\t\t\t\t\t*********************************\n\n\n";
    cout << "\t�If more of us valued food and cheer and song above hoarded gold, it would be a merrier world.�\n\n";
    cout << "\n\n\tWelcome to our Restaurant.\n\n";
    seat_set();
    choose();

}
void choose() //function for reservation of seat
{
    cout << "\tWhat would you like to do:\n\n";
    cout << "\t1:Dine-in\n\t2:Reservation of seat\n\t3:Already Reserved\n\t4:About Us\n";
    int choice_1;
    cout << "\tEnter you choice::";
    cin >> choice_1;
    switch (choice_1)
    {
    case 1:
        cout << "\tFor Dine-in ,Please Choose Your Seat\n";
        seats();
        slow1();
        cout << "\tCongratulations! Your seat has been booked\n";
        slow1();
        slow1();
        slow1();
        slow1();
        show_menu();
        display();
        fflush(stdin);
        break;

    case 2:
        cout << "\tFor Reservation Please Choose Your Seats\n";
        seats();
        cout << "\tCongratulations! Your seat has been booked\n";
        fflush(stdin);
        choose();
        break;

    case 3:
        cout << "\tPlease tell your seat number::";
        cin >> res_seat_x >> res_seat_y;
        cout << "\tThank you Sir ,You Are On time\n";
        if (seat_matrix[res_seat_x][res_seat_y] == 1)
        {
            cout << "\n\tPlease Have Your Seat\n";
            slow1();
            slow1();
            slow1();
            show_menu();
            display();
        }
        else
        {
            cout << "\n\tSorry sir, but there is no seat booked with this number\n";
            cout << "\n\tPlease visit us again\n\n\n";
            start();
        }
        break;

    case 4:
        cout << "\n\n\t\t\t*********************************************************\n\n";
        cout << "\t\t\t\t<<<<<< || A N N A P U R N A || >>>>>>\t\t\t\t\n\n\n";

        cout << "\t\t\tDirector::Mr.Divyansh Govil \t\t  Estd : 1995\n";
        cout << "\t\t\tOwner::Mr.Piyush Gupta\n";
        cout << "\t\t\tCordinator::Ms.Anandita\n";
        cout << "\t\t\tTotal chefs::10\n";
        cout << "\t\t\tTotal Servants::20\n";
        cout << "\t\t\tManager::Mr.Gaurav Kesarwani\n\n";
        cout << "\t\t\t*********************************************************\n\n";
        cout << "\t\t"
                "We have been serving mouth-watering delicacies to our customers since 1995.\n\t\tWe always aspire to provide excellent services to our customers.\n\n\n\n";
        choose();
        break;

    default:
        cout << "\n\tSir, I think there must have been some misunderstanding. Kindly check the address again.\n";
        exit(0);
        break;
    }
}

void show_menu()//function to show menu card
{
    system("cls");
    cout << "\t\t\t\t\t\t\t*********************************\n";
    slow();
    cout << "\t\t\t\t\t\t\tWelcome to Annapurna Restaurant \n";
    slow();
    cout << "\t\t\t\t\t\t\t*********************************\n\n\n";
    slow();

    cout << " =============================================================Menu Card=============================================================\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                    Veg Soup:-                              Starters:-                          Indian Breads:-                    |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|           |Items:                 Price:   |      |Items:                 Price:   |      |Items:             Price:   |          |\n";
    slow();
    cout << "|           |1.Tomato Soup          Rs70/unit|      |1.Cocktail Samosa      Rs15/unit|      |1.Chapati          Rs10/unit|          |\n";
    slow();
    cout << "|           |2.Spinach Soup         Rs80/unit|      |2.Veg Pattice          Rs20/unit|      |2.Paratha          Rs15/unit|          |\n";
    slow();
    cout << "|           |3.Sweet Corn Soup      Rs90/unit|      |3.Veg Roll             Rs20/unit|      |3.Naan             Rs15/unit|          |\n";
    slow();
    cout << "|           |4.Hot&Sour Soup        Rs60/unit|      |4.Veg Manchurian       Rs25/unit|      |4.Kulcha           Rs18/unit|          |\n";
    slow();
    cout << "|                                                                                           |5.Bhatura          Rs20/unit|          |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                     Vegetable:-                               Salad:-                                 Sweet:-                     |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|           |Items:                 Price:    |     |Items:                 Price:    |     |Items:             Price:   |          |\n";
    slow();
    cout << "|           |1.Veg Makhani          Rs140/unit|     |1.Green Salad          Rs80/unit |     |1.Gualab Jamun     Rs30/unit|          |\n";
    slow();
    cout << "|           |2.Paneer Kadai         Rs150/unit|     |2.Alu Chat             Rs50/unit |     |2.Rasgulla         Rs30/unit|          |\n";
    slow();
    cout << "|           |3.Paneer Mattar        Rs140/unit|     |3.Russian Salad        Rs100/unit|     |3.Gajar Halwa      Rs40/unit|          |\n";
    slow();
    cout << "|                                                   |4.ShriKhand            Rs50/unit |                                             |\n";
    slow();
    cout << "|                                                   |5.Jalebi               Rs30/unit |                                             |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                               Beverages:-                                           Ice cream:-                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                     |Items:                 Price:   |            |Items:                             Price:   |                  |\n";
    slow();
    cout << "|                     |1.Cold-drink           Rs15/unit|            |1.Vanilla                          Rs30/unit|                  |\n";
    slow();
    cout << "|                     |2.Cold-Coffee          Rs40/unit|            |2.Strawberry                       Rs30/unit|                  |\n";
    slow();
    cout << "|                     |3.Tea                  Rs15/unit|            |3.Chocolate                        Rs30/unit|                  |\n";
    slow();
    cout << "|                     |4.Hot-Coffee           Rs20/unit|            |4.Vanilla with Chocolate Sauce     Rs50/unit|                  |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << "|                                                                                                                                   |\n";
    slow();
    cout << " ===================================================================================================================================\n";
    slow();
}

int choose_menu()//function to choose categories
{
    int n;
    cout << "\t\t\t*********************************\n";
    cout << "\t\t\t Welcome to Annapurna Restaurant \n";
    cout << "\t\t\t*********************************\n\n\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "\n\n\t\t\tCart:-\t"
         << cart;
    cout << "\t\t\tWhat do you want to have sir? \n";
    cout << "\t\t\t1.Veg Soup\n\t\t\t2.Starter\n\t\t\t3.Indian Breads.\n\t\t\t4.Vegeatbles\n\t\t\t5.Salad\n\t\t\t6.Sweet\n\t\t\t7.Baverages\n\t\t\t8.Ice Cream\n\t\t\t";
    cin >> n;
    system("cls");
    return n;
}

void display()//function to dislplay categories
{

    int n;
    int a, b, c, d, e, f, g, h;
    int choice;
    int soup[] = {70, 80, 90, 60};       //price of different soup
    int starter[] = {15, 20, 20, 25};    //price of different starter
    int breads[] = {10, 15, 15, 18, 20}; //price of different breads
    int vegetables[] = {140, 150, 140};  //price of different vegeatbles
    int salad[] = {80, 50, 100};         //price of different salad
    int sweet[] = {30, 30, 40, 50, 30};  //price of different sweet
    int baverages[] = {15, 40, 15, 20};  //price of different baverages
    int icecream[] = {30, 30, 30, 50};   //price of different ice cream

    switch(choose_menu())
        {

        case 1:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";

            cout << "\n\n\t\t**********************************\n";
            cout << "\n\t\t\t  Veg Soup:-\n\n";
            cout << "\n\n\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Tomato Soup\t\tRs70/unit\n";
            cout << "\t\t2.Spinach Soup\t\tRs80/unit\n";
            cout << "\t\t3.Sweet Corn Soup\tRs90/unit\n";
            cout << "\t\t4.Hot&Sour Soup\t\tRs60/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> a;
            cout << "\t\tQuantity :-";
            cin >> n;
            menu->Soup(a, n);
            Price = soup[a - 1] * n + Price;
            cout << "\n\t\t\t\tNet Worth=" << Price;
            cart += n;
            break;
        }
        case 2:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Starter:-\n\n";
            cout << "\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Cocktail Samosa\tRs15/unit\n";
            cout << "\t\t2.Veg Pattice\t\tRs20/unit\n";
            cout << "\t\t3.Veg Roll\t\tRs20/unit\n";
            cout << "\t\t4.Veg Manchurian\tRs25/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> b;
            cout << "\t\tQuantity :-";
            cin >> n;
            menu->Starter(b, n);
            Price = starter[b - 1] * n + Price;
            cout << "\n\t\t\t\tNet Worth=" << Price;

            cart += n;
            break;
        }
        case 3:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Indian Breads:-\n\n";
            cout << "\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Chapati\t\tRs10/unit\n";
            cout << "\t\t2.Paratha\t\tRs15/unit\n";
            cout << "\t\t3.Naan\t\t\tRs15/unit\n";
            cout << "\t\t4.Kulcha\t\tRs18/unit\n";
            cout << "\t\t5.Batura\t\tRs20/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> c;
            cout << "\t\tQuantity :-";
            cin >> n;
            Price = Price + breads[c - 1] * n;
            menu->Breads(c, n);
            cout << "\n\t\t\t\tNet Worth=" << Price;
            cart += n;
            break;
        }
        case 4:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Vegetables:-\n\n";
            cout << "\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Veg Makhani\t\tRs140/unit\n";
            cout << "\t\t2.Paneer Kadai\t\tRs150/unit\n";
            cout << "\t\t3.Paneer Mattar\t\tRs140/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> d;
            cout << "\t\tQuantity :-";
            cin >> n;
            Price = vegetables[d - 1] * n + Price;
            menu->Vegetables(d, n);
            cout << "\n\t\t\t\tNet Worth=" << Price;
            cart += n;
            break;
        }
        case 5:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Salad:-\n\n";
            cout << "\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Green Salad\t\tRs80/unit\n";
            cout << "\t\t2.Alu Chat\t\tRs50/unit\n";
            cout << "\t\t3.Russian Salad\t\tRs100/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> e;
            cout << "\t\tQuantity :-";
            cin >> n;
            Price = salad[e - 1] * n + Price;
            menu->Salad(e, n);
            cout << "\n\t\t\t\tNet Worth=" << Price;

            cart += n;
            break;
        }
        case 6:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Sweet:-\n\n";
            cout << "\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Gualab Jamun\t\tRs30/unit\n";
            cout << "\t\t2.Rasgulla\t\tRs30/unit\n";
            cout << "\t\t3.Gajar Halwa\t\tRs40/unit\n";
            cout << "\t\t4.ShriKhand\t\tRs50/unit\n";
            cout << "\t\t5.Jalebi\t\tRs30/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> f;
            cout << "\t\tQuantity :-";
            cin >> n;
            Price = sweet[f - 1] * n + Price;
            menu->Sweet(f, n);
            cout << "\n\t\t\t\tNet Worth=" << Price;
            cart += n;
            break;
        }
        case 7:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Baverages:-\n\n";
            cout << "\t\tItems:\t\t\tPrice:\n";
            cout << "\t\t1.Cold-drink\t\tRs15/unit\n";
            cout << "\t\t2.Cold-Coffee\t\tRs40/unit\n";
            cout << "\t\t3.Tea\t\t\tRs15/unit\n";
            cout << "\t\t4.Hot-Coffee\t\tRs20/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> g;
            cout << "\t\tQuantity :-";
            cin >> n;
            Price = baverages[g - 1] * n + Price;
            menu->Baverages(g, n);
            cout << "\n\t\t\t\tNet Worth=" << Price;
            cart += n;
            break;
        }

        case 8:
        {
            cout << "\n\n\t\t*********************************\n";
            cout << "\t\t Welcome to Annapurna Restaurant \n";
            cout << "\t\t*********************************\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\n\t\t\t  Ice Cream:-\n\n";
            cout << "\t\tItems:\t\t\t\tPrice:\n";
            cout << "\t\t1.Vanilla\t\t\tRs30/unit\n";
            cout << "\t\t2.Strawberry\t\t\tRs30/unit\n";
            cout << "\t\t3.Choclate\t\t\tRs30/unit\n";
            cout << "\t\t4.Vanilla with Choclate Sauce\tRs50/unit\n\n\n";
            cout << "\t\t**********************************\n\n\n";
            cout << "\t\tWhat you want to choose:-";
            cin >> h;
            cout << "\t\tQuantity :-";
            cin >> n;
            Price = icecream[h - 1] * n + Price;
            menu->Icecream(h, n);
            cout << "\n\t\t\t\tNet Worth=" << Price;
            cart += n;
            break;
        }
        default:
        {

            cout << "\n\t\t************ Wrong input!Please try again *************\n\n\n\n";
            display();
        }
        }
}

void billGenerator()//Customer bill generator
{


    cout << "\n\n\t\t*********************************\n";
    cout << "\t\t Welcome to Annapurna Restaurant \n";
    cout << "\t\t*********************************\n\n\n";

    cout << "\n\t\t\tThank you Sir/Mam for Ordering \n\n\n";
    cout << "--------------------------------------------------------------------------------------------\n\n";
    time_t t;
    time(&t);
    string name;
    int mobno;
    int mode;
    string address;
    int gst = 8;
    float discount;
    int a;
    cout << "\t\tCustomer Details:-\n\n\n";
    cout << "\t\tCustomer Name::";
    fflush(stdin);
    getline(cin,name);
    fflush(stdin);
    cout << "\t\tMobile number::";
    cin >> mobno;
    cout << "\t\tAddress::";
    fflush(stdin);
    getline(cin,address);
    fflush(stdin);
paymo:
    cout << "\t\tSelect payment Mode::\n\t\t 1 for Cash\n\t\t 2 for Credit Card\n\t\t 3 for Debit Card\n\t\t";
    fflush(stdin);
    cin >> mode;
    if (mode != 1 && mode != 2 && mode != 3)
    {
        cout << "\t\tThe payment mode that you have selected is invalid. Please try again.";
        goto paymo;
    }
    fflush(stdin);
    cout << "\t\tDo you have any Coupon Code:-\n";
    cout << "\t\t1.for yes\n\t\t0.for no\n\t\t";
    cin >> a;
    if (a == 0)
    {
        goto next;
    }
    else if (a == 1)
    {
        cout << "\n\t\tYay!You have got 50% discount\n";
        discount = (Price * (float(0.5)));
    }
next:
    cout << "\n\n\n";
    cout << "\t\t\t *************************************************\n";
    slow1();
    cout << "\t\t\t                 Customer Receipt\n";
    slow1();
    cout << "\t\t\t             ************************\n";
    slow1();
    cout << "\t\t\t       <<<<<< || A N N A P U R N A || >>>>>>\n\n\n\n";
    slow1();
    fflush(stdin);
    cout << "\t\t\t\tName:: "<<name<<"\n\n";
    slow1();
    fflush(stdin);
    cout << "\t\t\t\tMob no:: " << mobno << "\n\n";
    slow1();
    fflush(stdin);
    cout << "\t\t\t\tAddress:: "<<address<<"\n\n";
    slow1();
    fflush(stdin);
    switch (mode)
    {
    case 1:
    {
        cout << "\t\t\t\tMode of Payment::Cash\n\n";
        slow1();
        break;
    }
    case 2:
    {
        cout << "\t\t\t\tMode of Payment::Credit Card\n\n";
        slow1();
        break;
    }
    case 3:
    {
        cout << "\t\t\t\tMode of Payment::Debit Card\n\n";
        slow1();
        break;
    }
    }
    fflush(stdin);

    cout << "\n\t\t\t\tTotal items in Cart:: " << cart << endl;
    slow1();
    cout << "\n\t\t\t\tTotal price:: Rs " << Price << endl;
    slow1();
    cout << "\n\t\t\t\tDiscount:: Rs "<< discount<<endl;
    slow1();
    cout << "\n\t\t\t\tTotal payable price:: Rs "<<(Price - discount)<<endl;
    slow1();
    cout<<"\n\t\t\t\tCurrent time:: "<<ctime(&t); slow1();
    cout<<"\n\n\t\t\t\t\tHave a nice day.\n\n\n\n"; slow1();

cout<<"\t\t\t *************************************************\n"; slow1();
    cout<<"\n\n\n--------------------------------------------------------------------------------*********-------------------------------------------------------------------------------------\n\n\n";
}
};

int main()//main function
{
    start_prog stp;
    system("color f1");
    int n;
    stp.Price=0;
    stp.cart=0;
    stp.start();
    int a;
    char b;
    char arr[] = {'n', 'y'};
    while (1)
    {
        cout << "\n\n\t\tDo you Want to choose again\n\t\t1 for yes \n\t\t0 for no\n\t\t";
        cin >> a;
        b = arr[a];
        if (b == 'y')
        {
            cout << "--------------------------------------------------------------------------------------------\n\n\n";
            system("cls");
            stp.display();
        }
        else if (b == 'n')
        {
            cout << "\n\t\t\t\tThank you Sir\n\n\n";
            cout << "--------------------------------------------------------------------------------------------\n\n";

            break;
        }
        else
        {
            cout << "Wrong Input";
        }
    }
    system("cls");
    stp.billGenerator();
    cout << "\t\t\tDo you want to close Restaurant or continue it\n\t\t\t0.Close \n\t\t\t1.Continue\n\t\t\t";
    cin >> n;
    if (n == 1)
    {
        system("cls");
        main();
    }
    else if (n == 0)
    {
        return 0;
    }
}
