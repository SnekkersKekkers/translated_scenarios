BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040508401_05_000");
MsgDisp("Hiiragi","After the fireflies, 
the trees will begin to get lively.");
MsgSel("I like the autumn leaves more!","Lets collect the fallen leaves.","The firefly habitat is wonderful no matter which season.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040508401_05_010");
    MsgDisp("Hiiragi","Shh,
the fireflies will hear you!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040508401_05_020");
    MsgDisp("Hiiragi","That's right.
Let's take it home as a memento.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040508401_05_030");
    MsgDisp("Hiiragi","Are you the PR person here?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
