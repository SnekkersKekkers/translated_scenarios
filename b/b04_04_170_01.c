BGOpen("ne340",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040417001_04_000");
MsgDisp("Nanatsumori","What will you sing next?");
MsgSel("A trendy pop song","Some tasteful enka","I want to take a little break.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040417001_04_010");
    MsgDisp("Nanatsumori","You're going for the safe bet.
Is it okay for me to join halfway in?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040417001_04_020");
    MsgDisp("Nanatsumori","Oh...
Looks like you have confidence in your
singing ability.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040417001_04_030");
    MsgDisp("Nanatsumori","Ahh, right.
But if we stop singing, the flow stops...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
