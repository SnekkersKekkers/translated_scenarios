MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040112100_01_000");
MsgDisp("Kazama","A big auction house is great and all, but
this kind of thing is exciting too, right?");
MsgSel("Let's find some bargains!","Having your own stall would be fun.","It's an environmentally-friendly event, too.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040112100_01_010");
    MsgDisp("Kazama","If something sticks out and grabs your
eye, pick it up and take a good look at
it. That's like a chance encounter.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040112100_01_020");
    MsgDisp("Kazama","You think so? You should try it. People
seem to gather around you wherever you
are, anyway.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040112100_01_030");
    MsgDisp("Kazama","That's true.
One man's trash is another man's treasure,
right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
