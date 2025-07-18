BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040601001_06_000");
MsgDisp("Himuro","Huh...it's nice isn't it?
It suits you.");
MsgSel("Really, I might buy it!","I wonder about that...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040601001_06_010");
    MsgDisp("Himuro","...You're so accepting of that, that it's
worrying.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040601001_06_020");
    MsgDisp("Himuro","Well, that's a normal reaction.
That one isn't it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040601001_06_030");
    MsgDisp("Himuro","What, you fell for it?
Well, go you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
