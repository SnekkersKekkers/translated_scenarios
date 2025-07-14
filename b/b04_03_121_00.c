MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
ScrFadeIn(0);
VoicePlay("B040312100_03_000");
MsgDisp("Honda","From household goods to antique-like
things, it's fun to feel like there's a
bit of everything here.");
MsgSel("Let's find some bargains!","It looks like it'd be fun to set up a booth.","It's a very eco-friendly event.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040312100_03_010");
    MsgDisp("Honda","Yeah, it's like a treasure hunt!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040312100_03_020");
    MsgDisp("Honda","Nice. It might be more fun like that!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040312100_03_030");
    MsgDisp("Honda","I can't deny recycling, but is it really
that eco-friendly?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
