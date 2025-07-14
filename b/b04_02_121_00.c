MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040212100_02_000");
MsgDisp("Sassa","The flea market is popular, huh?");
MsgSel("Let's find some bargains!","It seems fun to set up a store.","It's an environmentally-friendly event.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040212100_02_010");
    MsgDisp("Sassa","I'll help out, but be more detailed with
what you want.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040212100_02_020");
    MsgDisp("Sassa","Yeah, it would be.
What kind of store would you set up?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("B040212100_02_030");
    MsgDisp("Sassa","Well yeah.
But a lot of second hand clothes sized
don't fit me...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
