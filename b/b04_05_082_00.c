BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040508200_05_000");
MsgDisp("Hiiragi","This is a nice place.
What are fireflies doing in the spring?");
MsgSel("Aren't they awaiting their turn?","I wonder where they're hiding","There might be some hasty fireflies");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040508200_05_010");
    MsgDisp("Hiiragi","I see.
I wonder if it's similar to them standing
by on the stage wings.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040508200_05_020");
    MsgDisp("Hiiragi","In the grass or in the soil?
Let's take a look.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040508200_05_030");
    MsgDisp("Hiiragi","There are impatient ones everywhere in the
world aren't there?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
