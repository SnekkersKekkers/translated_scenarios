BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,2,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523400_05_000");
MsgDisp("Hiiragi","That was some terrific handling huh?");
MsgSel("I'm getting excited like a kid!","I could feel the centrifugal force","The world... is spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040523400_05_010");
    MsgDisp("Hiiragi","No no, 
The kids around us were surprised too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("B040523400_05_020");
    MsgDisp("Hiiragi","We were just like towels 
in the washing machine.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,0,1);
    VoicePlay("B040523400_05_030");
    MsgDisp("Hiiragi","Sit down for a bit.
I'll buy some water.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
