BGOpen("tr520",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
ScrFadeIn(0);
VoicePlay("B040224201_02_000");
MsgDisp("Sassa","Lunch is a meal specially made for camp!");
MsgSel("I'm super excited!","I'll make the rice, okay?","What's the catch of the day?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040224201_02_010");
    MsgDisp("Sassa","I won't betray your expectations.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040224201_02_020");
    MsgDisp("Sassa","Yeah.
This is nice.
There's a homely feel.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040224201_02_030");
    MsgDisp("Sassa","I bought it, so please bare with it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
