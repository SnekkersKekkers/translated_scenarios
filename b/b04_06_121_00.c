MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040612100_06_000");
MsgDisp("Himuro","...There's surprisingly
more people than I thought.");
MsgSel("Let's find some bargains!","Setting up a store seems fun","It's an environmentally friendly event, isn't it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040612100_06_010");
    MsgDisp("Himuro","Can you find some
even within this crowd?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040612100_06_020");
    MsgDisp("Himuro","Maybe that won't be as tiring...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040612100_06_030");
    MsgDisp("Himuro","Hmm, how surprising.
I didn't think you were interested
in environmental issues.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
