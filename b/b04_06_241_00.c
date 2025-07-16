BGOpen("tr510",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040624100_06_000");
MsgDisp("Himuro","Is it peaceful or stimulating...");
MsgSel("It feels nice to be surrounded by Mother Nature!","...There's nothing here, huh?","That sheep keeps looking this way...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040624100_06_010");
    MsgDisp("Himuro","The atmosphere is nice too.
I feel more refreshed than usual.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040624100_06_020");
    MsgDisp("Himuro","You really said that huh?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040624100_06_030");
    MsgDisp("Himuro","I'm sure they find us unusual too?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
