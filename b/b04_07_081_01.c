BGOpen("fp210",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040708101_07_000");
MsgDisp("Mikage","The cherry blossoms are lit up at night
huh...");
MsgSel("I want to see it.","I want to see them in the sun","I wonder what they're like at night?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,4,1);
    VoicePlay("B040708101_07_010");
    MsgDisp("Mikage","They're more beautiful during the day.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040708101_07_020");
    MsgDisp("Mikage","You are always right.
Right, flowers should be seen with the
sun.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040708101_07_030");
    MsgDisp("Mikage","I'm guessing quite magical?
But, if I were a flower, it'd be too
bright, and I'd want them to stop.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
