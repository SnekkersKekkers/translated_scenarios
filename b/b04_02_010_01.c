BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040201001_02_000");
MsgDisp("Sassa","This dress is nice.
It suits you a bit.");
MsgSel("You're right! I think I should buy it!","I guess so...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B040201001_02_010");
    MsgDisp("Sassa","Being open-minded is good but where would
you even wear this?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChEyeOpenLevel(2,9);
    VoicePlay("B040201001_02_020");
    MsgDisp("Sassa","Yeah, it suits you.
... Wait, are you seriously thinking
about it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040201001_02_030");
    MsgDisp("Sassa","Haha, right!
It feels good to get back at you like
this.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
