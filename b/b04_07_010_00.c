BGMPlay("BGM_PLACE_SHOP",0.01);
ChSet(7,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040701000_07_000");
MsgDisp("Mikage","Oh, apparently this sort of thing is
stylish.
I think it would suit you.");
MsgSel("Really, I'll go buy it!","Is that so...?","It would not suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040701000_07_010");
    MsgDisp("Mikage","Cool, cool.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040701000_07_020");
    MsgDisp("Mikage","It is so?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040701000_07_030");
    MsgDisp("Mikage","Uh Ohー.
Is it no good?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
