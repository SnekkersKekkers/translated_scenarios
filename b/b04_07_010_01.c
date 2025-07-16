BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,5);
ScrFadeIn(0);
VoicePlay("B040701001_07_000");
MsgDisp("Mikage","Oh.
Wouldn't this be nice?");
MsgSel("Really, I'll go buy it!","Is that so...?","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040701001_07_010");
    MsgDisp("Mikage","Wait wait, it seems like you didn't get
it.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040701001_07_020");
    MsgDisp("Mikage","Haha, I expected as much.
You didn't fall for it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040701001_07_030");
    MsgDisp("Mikage","Right.
I was playing too much.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
