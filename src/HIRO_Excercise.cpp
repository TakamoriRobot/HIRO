#include <HIRO.h>
#include <HIRO_Functions.h>
#include <HIRO_Excercise.h>
#include <HIRO_Walk.h>

/*
HIRO Excercise Section 1 Sub 1: HIRO Stretch and Worm - Main Functions
*/

void sideToSideSetUp(HIRO &hiro, int speed)
{
    // Description: Moves the robot's legs to the side in prep for side to side worm or stretch
    sideToSideSet_LFL_RBL(hiro, 2);
    sideToSideSet_RFL_LBL(hiro, 2);
}

void sideToSideWorm(HIRO &hiro, int speed)
{
    // Description: Moves HIRO side to side in a worm like dance
    sideToSideSetUp(hiro, speed);
    for (int i = 0; i < 5; i++)
    {
        wormLeft(hiro, speed);
        wormRight(hiro, speed);
    }
}

void sideToSideStretch(HIRO &hiro, int speed)
{
    // Description: Moves HIRO side to side like a stretchj
    sideToSideSetUp(hiro, speed);
    for (int i = 0; i < 5; i++)
    {
        swayLeft(hiro, speed);
        swayRight(hiro, speed);
    }
}

/*
HIRO Excercise Section 1 Sub 2: HIRO Stretch and Worm - Main Functions
*/

void sideToSideSet_LFL_RBL(HIRO &hiro, int speed)
{
    raise_LFL_RBL(hiro, 60, speed);
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lfsb || !rbsb)
    {
        if (counter > 90)
        {
            break;
        }
        lfsb = move(hiro.lfs, (135), speed);
        rbsb = move(hiro.rbs, (135), speed);
        counter++;
        delay(5);
    }
    lower_LFL_RBL(hiro, 0, speed);
}

void sideToSideSet_RFL_LBL(HIRO &hiro, int speed)
{
    raise_RFL_LBL(hiro, 60, speed);
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rfsb || !lbsb)
    {
        if (counter > 90)
        {
            break;
        }
        lfsb = move(hiro.rfs, 45, speed);
        rbsb = move(hiro.lbs, 45, speed);
        counter++;
        delay(5);
    }
    lower_RFL_LBL(hiro, 0, speed);
}

void wormLeft(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb || !rblb || !lflb || !lblb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, (0), speed);
        rblb = move(hiro.rbl, (0), speed);
        lflb = move(hiro.lfl, (90), speed);
        lblb = move(hiro.lbl, (90), speed);
        counter++;
        delay(5);
    }
}

void wormRight(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb || !rblb || !lflb || !lblb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, (90), speed);
        rblb = move(hiro.rbl, (90), speed);
        lflb = move(hiro.lfl, (180), speed);
        lblb = move(hiro.lbl, (180), speed);
        counter++;
        delay(5);
    }
}

void swayLeft(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb || !rblb || !lflb || !lblb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, (0), speed);
        rblb = move(hiro.rbl, (0), speed);
        lflb = move(hiro.lfl, (135), speed);
        lblb = move(hiro.lbl, (135), speed);
        counter++;
        delay(10);
    }
}

void swayRight(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb || !rblb || !lflb || !lblb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, (45), speed);
        rblb = move(hiro.rbl, (45), speed);
        lflb = move(hiro.lfl, (180), speed);
        lblb = move(hiro.lbl, (180), speed);
        counter++;
        delay(10);
    }
}

/*
HIRO Excercise Section 2 Sub 1: HIRO Cabbage Patch - Main Functions
*/

void cabbagePatch(HIRO &hiro, int speed, int repetitions)
{
    for (int i = 0; i < repetitions; i++)
    {
        raiseLeftCabbagePatch(hiro, speed);
        returnLeftcabbagePatch(hiro, speed);
        raiseRightCabbagePatch(hiro, speed);
        returnRightcabbagePatch(hiro, speed);
    }
}

void cabbagePatch2(HIRO &hiro, int speed, int repetitions)
{
    for (int i = 0; i < repetitions; i++)
    {
        raiseLeftCabbagePatch2(hiro, speed);
        raiseRightCabbagePatch2(hiro, speed);
    }
}

/*
HIRO Excercise Section 2 Sub 2: HIRO Cabbage Patch - Supporting Functions
*/
void raiseLeftCabbagePatch(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lflb || !lbsb || !rbsb || !lfsb)
    {
        if (counter > 90)
        {
            break;
        }
        lflb = move(hiro.lfl, 0, speed);  // Left leg goes up
        lfsb = move(hiro.lfs, 40, speed); // left shoulder points front
        rbsb = move(hiro.rbs, 35, speed);
        lbsb = move(hiro.lbs, 35, speed);
        counter++;
        delay(10);
    }
}

void returnLeftcabbagePatch(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lflb)
    {
        if (counter > 90)
        {
            break;
        }
        lflb = move(hiro.lfl, 180, speed); // Left leg goes down
        counter++;
        delay(10);
    }
}

void raiseRightCabbagePatch(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb || !rfsb || !rbsb || !lbsb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, 180, speed); // Left leg goes up
        rfsb = move(hiro.rfs, 140, speed); // left shoulder points front
        rbsb = move(hiro.rbs, 145, speed);
        lbsb = move(hiro.lbs, 145, speed);
        counter++;
        delay(10);
    }
}

void returnRightcabbagePatch(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, 0, speed); // Left leg goes down
        counter++;
        delay(10);
    }
}

void raiseLeftCabbagePatch2(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lflb || !lfsb || !rblb || !lblb || !rfsb || !rflb)
    {
        if (counter > 90)
        {
            break;
        }
        lflb = move(hiro.lfl, 0, speed);   // Left leg goes up
        lfsb = move(hiro.lfs, 40, speed);  // left shoulder points front
        rblb = move(hiro.rbl, 20, speed);  // move back leg out for counter balance
        lblb = move(hiro.lbl, 180, speed); // move other back leg back to original position
        rfsb = move(hiro.rfs, 90, speed);  // move right front shoulder back
        rflb = move(hiro.rfl, 0, speed * 3);
        counter++;
        delay(10);
    }
}

void raiseRightCabbagePatch2(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rflb || !rfsb || !lblb || !rblb || !lfsb || !lflb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, 180, speed); // Left leg goes up
        rfsb = move(hiro.rfs, 140, speed); // left shoulder points front
        lblb = move(hiro.lbl, 160, speed); // move back leg out for counter balance
        rblb = move(hiro.rbl, 0, speed);   // move other back leg back to original position
        lfsb = move(hiro.lfs, 90, speed);  // move right front shoulder back
        lflb = move(hiro.lfl, 180, speed * 3);
        counter++;
        delay(10);
    }
}

/*
HIRO Excercise Section 3 Sub 1: HIRO Push Ups - Main Functions
*/

void pushUps(HIRO &hiro, int speed, int repetitions)
{
    setPushUp(hiro, speed);
    for (int i = 0; i < repetitions; i++)
    {
        pushDown(hiro, speed);
        pushUp(hiro, speed);
    }
}

/*
HIRO Excercise Section 3 Sub 2: HIRO Push Ups - Supporting Functions
*/

void setPushUp(HIRO &hiro, int speed)
{
    raise_LFL_RBL(hiro, 60, speed);
    setPushUp_LFL_RBL(hiro, speed);
    lower_LFL_RBL(hiro, 0, speed);
    raise_RFL_LBL(hiro, 60, speed);
    setPushUp_RFL_LBL(hiro, speed);
    lower_RFL_LBL(hiro, 0, speed);
    setPushUpBackLegs(hiro, speed);
}

void setPushUp_LFL_RBL(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!rbsb || !lfsb)
    {
        if (counter > 90)
        {
            break;
        }
        rbsb = move(hiro.rbs, (45), speed);
        lfsb = move(hiro.lfs, (140), speed);
        counter++;
        delay(10);
    }
}

void setPushUp_RFL_LBL(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lbsb || !rfsb)
    {
        if (counter > 90)
        {
            break;
        }
        rfsb = move(hiro.rfs, (40), speed);
        lbsb = move(hiro.lbs, (135), speed);
        counter++;
        delay(10);
    }
}

void setPushUpBackLegs(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lblb || !rblb)
    {
        if (counter > 90)
        {
            break;
        }
        rblb = move(hiro.rbl, 45, speed);
        lblb = move(hiro.lbl, 135, speed);
        counter++;
        delay(10);
    }
}

void pushUp(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lflb || !rflb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, 0, speed);
        lflb = move(hiro.lfl, 180, speed);
        counter++;
        delay(10);
    }
}

void pushDown(HIRO &hiro, int speed)
{
    bool rfsb = false;
    bool rflb = false;
    bool rbsb = false;
    bool rblb = false;
    bool lfsb = false;
    bool lflb = false;
    bool lbsb = false;
    bool lblb = false;
    int counter = 0;
    while (!lflb || !rflb)
    {
        if (counter > 90)
        {
            break;
        }
        rflb = move(hiro.rfl, 45, speed);
        lflb = move(hiro.lfl, 135, speed);
        counter++;
        delay(10);
    }
}