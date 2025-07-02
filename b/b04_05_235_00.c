BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B040523500_05_000");
MsgDisp("Hiiragi","Hmm, I have lots of different
thoughts about this... ...");
MsgSel("That was scary, but fun!","I think I'm paralyzed with fear...","The tricks were weak, no good no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040523500_05_010");
    MsgDisp("Hiiragi","If you enjoyed it
that is good enough.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040523500_05_020");
    MsgDisp("Hiiragi","Are you really?
Which part scared you?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523500_05_030");
    MsgDisp("Hiiragi","Yes.
I thought the same. I wish they'd 
made it a little more carefully.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
