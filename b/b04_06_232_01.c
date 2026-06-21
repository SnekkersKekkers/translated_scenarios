BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,2,0,0,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623201_06_000");
MsgDisp("Himuro","...I'm at a loss on what to talk about
when we're on this.");
MsgSel("Are you feeling awkward?","Talk more!","My heart is also racing...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623201_06_010");
    MsgDisp("Himuro","Yeah, I guess...somewhat.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040623201_06_020");
    MsgDisp("Himuro","Don't say that so simply.
I'm more sensitive than you think.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040623201_06_030");
    MsgDisp("Himuro","Stop, I'm getting embarrassed too.
Aah, come on.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
