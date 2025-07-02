BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040301001_03_000");
MsgDisp("Honda","Do you think you could pull this off?");
MsgSel("I do, I might buy it!","I wonder about that...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,5);
    ChMouth(3,1);
    ChMotion(3,5);
    VoicePlay("B040301001_03_010");
    MsgDisp("Honda","Ahh, wait a sec!
I was joking.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040301001_03_020");
    MsgDisp("Honda","Right, there's a limit even to adventures.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040301001_03_030");
    MsgDisp("Honda","Oh no, you caught me?
It's hard to pull one over you!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
