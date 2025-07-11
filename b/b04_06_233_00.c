BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,3,3,0,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623300_06_000");
MsgDisp("Himuro","Ahaha! This is the best!");
MsgSel("I could get used to this thrill!","Hey, that's enough...","That was a very interesting experience...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040623300_06_010");
    MsgDisp("Himuro","I get it.
It's a feeling you wouldn't experience 
in everyday life. It feels super good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623300_06_020");
    MsgDisp("Himuro","How unfortunate.
Seems like you didn't get what
was so good about it huh...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040623300_06_030");
    MsgDisp("Himuro","Your eyes are darting about you know.
Even if you put on a brave front,
I can see through it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
