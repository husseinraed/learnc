/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "../includes/helpers.h"

int main()
{
    srand(time(NULL));

    int agent_id = rand() % 100;
    char agent_name[33];

    printc(32, "Welcome To fbi case (no. 9043)\n\n");

    prompts("Whats Your Name? ", agent_name);
    printf("\n");

    if (strlen(agent_name) <= 2)
    {
        printc(31, "thats not a name your'e disqualified kid!\n\n");
        return -1;
    }

    printf("\e[36mWelcome %s from now on we will call you agent %i\e[0m\n\n", agent_name, agent_id);

    printc(32, "PRESS [ENTER] TO CONTINUE!");

    int enter = 0;

    do 
    {
        char c = getchar();

        if (c != '\n') enter = 0;

        enter++;
    } while (enter == 1);

    if (enter != 1) {
        clear();

        int err; // err variable for storing errors

        printc(35, "We will begin the questions!\n\n");

        // question 1
        int q1_answer;
        
        err = question("1. Whats your agent id? ", &q1_answer, agent_id);

        if (err) return -1;

        // the case
        printc(33, "the case is about a kid who want's to buy a lolipop\n");
        printc(33, "he goes to a shop called \"sonic candy\"\n");
        printc(33, "he wanted a green lolipop but he got a red one\n");
        printc(33, "he unwrapped the red lolipop and he found cheesecake!\n");
        printc(33, "how did the seller fit the cheesecake in the small package of a lolipop\n"); 
        printc(33, "however this is not our question\n");
        printc(33, "when the boy ate the cake he fainted\n");
        printc(33, "our question is how did he faint?\n\n");

        printc(32, "PRESS [ENTER] TO CONTINUE!");

        enter = 0;

        do 
        {
            char c = getchar();

            if (c != '\n') enter = 0;

            enter++;
        } while (enter == 1);

        if (enter != 1)
        {
            clear();

            // question 2
            int q2_answer;

            int err = question("2. Whats is the case about?\n(1) a kid who wants to buy a lolipop\t(2) a kid who lost his phone\t(3) a kid who got murdered\n> ", &q2_answer, 1);

            if (err) return -1;

            // question 3
            int q3_answer;

            err = question("3. which shop did the kid go to?\n(1) mario the stario\t(2) integer candy\t(3) sonic candy\n> ", &q3_answer, 3);

            if (err) return -1;

            // question 4
            int q4_answer;

            err = question("4. what lolipop color did the kid want?\n(1) green\t(2) blue\t(3) red\n> ", &q4_answer, 1);

            if (err) return -1;

            // question 5
            int q5_answer;

            err = question("5. what lolipop color did the kid get?\n(1) yellow\t(2) red\t(3) cyan\n> ", &q4_answer, 2);

            if (err) return -1;

            // question 6
            int question_6;

            err = question("6. when the kid unwrapped the lolipop what did he find?\n(1) cheese cake\t(2) snickers\t(3) pepsi\n> ", &q4_answer, 1);

            if (err) return -1;

            // question 7
            int question_7;

            err = question("7. why did the boy faint?\n(1) because he was very fat and exploded\t(2) because the cheese cake was poisned\t(3) because he is noob\n> ", &question_7, 2);

            if (err) return -1;

            printc(31, "congrats! you will be assinated in 4 days!\n\n");
        }

        return 0;
    }
}