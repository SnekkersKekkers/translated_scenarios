BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,3,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623302_06_000");
MsgDisp("Himuro","Seems like we might trigger
the suspension bridge effect.");
MsgSel("Because your heart is pounding?","Suspension bridge effect?","You're joking right? ");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040623302_06_010");
    MsgDisp("Himuro","Yeah.
I might mistakenly think I'm in love 
with you. What about you? 
Would you be mistaken?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623302_06_020");
    MsgDisp("Himuro","It's not really something 
to dig further into.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623302_06_030");
        MsgDisp("Himuro","Can I not tell a joke?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623302_06_040");
        MsgDisp("Himuro","Seems like it
didn't have any effect...");
        MsgDisp("主人公","Did you want
your heart to flutter?");
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        ChCheek(6,10);
        VoicePlay("B040623302_06_050");
        MsgDisp("Himuro","Not really.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623302_06_060");
        MsgDisp("Himuro","The suspension bridge effect is merely the
brain being mistaken, you'll snap out of
it before long.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040623302_06_070");
        MsgDisp("Himuro","If you think about it, 
There's no value in an excitement
that's only limited to a moment.");
        MsgDisp("主人公","What if it wasn't 
limited to a moment?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,5);
        VoicePlay("B040623302_06_080");
        MsgDisp("Himuro","I'll keep quiet about that.
You'ree free to come up with your own 
conclusions based off the situation.");
        MsgDisp("主人公","I see... so, 
did your heart race, ｛氷室＊＊｝?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040623302_06_090");
        MsgDisp("Himuro","Unfortunately, 
I won't fall for the 
suspension bridge effect.");
        MsgDisp("主人公","So that's how it is...");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        ChCheek(6,10);
        VoicePlay("B040623302_06_100");
        MsgDisp("Himuro","...Well, it's a bit late 
for that anyways.");
        MsgDisp("主人公","Eh? Did you say something?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040623302_06_110");
        MsgDisp("Himuro","Nothing.");
        MsgDisp("主人公","？？？");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
