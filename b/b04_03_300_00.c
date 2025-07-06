BGOpen("bh310",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B040330000_03_000");
MsgDisp("Honda","Yes, let's go ahead.
Over here, over here.");
MsgSel("This is a wonderful room!","It's a very boyish room...","...It's a unique room huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040330000_03_010");
    MsgDisp("Honda","Is that so?
Maybe it's because there's
only things I like.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040330000_03_020");
    MsgDisp("Honda","Well, it is a guy's room.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040330000_03_030");
    MsgDisp("Honda","Really?
My younger sister's room is more amazing.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
