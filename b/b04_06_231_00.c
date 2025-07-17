BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623100_06_000");
MsgDisp("Himuro","It's been a while since I've rode on this.");
MsgSel("That was wonderful! I want to ride it more!","Ugh, that was scary...","I wanted a bit more thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623100_06_010");
    MsgDisp("Himuro","Ehhh, did you like it that much?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040623100_06_020");
    MsgDisp("Himuro","You won in a way didn't you?
Since this is an attraction for enjoying
the thrill.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623100_06_030");
    MsgDisp("Himuro","Even though you were screaming that much?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
