BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040822200_08_000");
MsgDisp("Shirahane","Doesn't it kinda feel 
like a class field trip?");
MsgSel("Do you not like history?","Wanna study something else?","It'll be fun to study it together");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(8,0,1);
    VoicePlay("B040822200_08_010");
    MsgDisp("Shirahane","It's not that I dislike it.
Hey, this is a date, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,2);
    ChMotion(8,2,1);
    ChCheek(8,5);
    VoicePlay("B040822200_08_020");
    MsgDisp("Shirahane","What do you mean∋
You shouldn't mess with 
people like that, ya know?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,3,1);
    ChCheek(8,3);
    VoicePlay("B040822200_08_030");
    MsgDisp("Shirahane","That's right!
Since I can't actually have a class
field trip with you.
Today is a simulation▼");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
