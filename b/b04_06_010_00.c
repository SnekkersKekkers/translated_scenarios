BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040601000_06_000");
MsgDisp("Himuro","This would look good on you.");
MsgSel("You're right, I'll buy it！","I see……","It doesn't suit me！");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040601000_06_010");
    MsgDisp("Himuro","Good.
I'm looking forward to seeing you in it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040601000_06_020");
    MsgDisp("Himuro","What's with the hesitation? That
nonsense makes no sense.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040601000_06_030");
    MsgDisp("Himuro","What's with that, you don't care
about my opinion and just want me to
hang around?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
