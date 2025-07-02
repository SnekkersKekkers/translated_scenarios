BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040203301_02_000");
MsgDisp("Sassa","Hagfish......
......Amazing.");
MsgSel("Uwa, the mucus is so slimy","I wonder if you can eat it?","Let's look at something else");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040203301_02_010");
    MsgDisp("Sassa","Yuck, it gives me chills.
I don't want to look at it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040203301_02_020");
    MsgDisp("Sassa","You look at this and get that
kind of idea?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040203301_02_030");
    MsgDisp("Sassa","Completely agree.
Let's go quickly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
