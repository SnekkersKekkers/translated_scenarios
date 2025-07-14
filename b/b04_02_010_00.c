BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040201000_02_000");
MsgDisp("Sassa","This one is nice.
It seems like something you'd like.");
MsgSel("You're right, I should buy it!","I'm not sure......","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3,1);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040201000_02_010");
    MsgDisp("Sassa","Yeah, that's a good thing.
I feel like I completely understand your
tastes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040201000_02_020");
    MsgDisp("Sassa","Huh, is something wrong with it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040201000_02_030");
    MsgDisp("Sassa","I see.
If you're certain then it can't be helped.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
