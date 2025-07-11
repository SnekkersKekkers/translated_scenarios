BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
ScrFadeIn(0);
VoicePlay("B040215100_02_000");
MsgDisp("Sassa","Now, let's have a contest!");
MsgSel("I won't lose!","｛颯砂＊＊｝'s ball looks heavy...'","Having a contest is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040215100_02_010");
    MsgDisp("Sassa","Seems like this'll be a good match?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040215100_02_020");
    MsgDisp("Sassa","On the opposite, If it's too light, 
I'll hurt my shoudler.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040215100_02_030");
    MsgDisp("Sassa","Eh, seriously?
We're just taking turns throwing?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
