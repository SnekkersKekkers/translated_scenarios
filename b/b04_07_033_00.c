BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4,1);
ScrFadeIn(0);
VoicePlay("B040703300_07_000");
MsgDisp("Mikage","The residents here will show you how
living things adapt to their environment.");
MsgSel("I-It's so dark I can't see anything...","You mean how they overcome water pressure?","By environment, do you mean how they live on a boat?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040703300_07_010");
    MsgDisp("Mikage","It's dangerous to move about. Close your
eyes and count to ten. Adapt to the dark,
your eyes will get used to it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040703300_07_020");
    MsgDisp("Mikage","You got the answer on the first try.
How about enjoying it a bit more?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040703300_07_030");
    MsgDisp("Mikage","It's a sunken ship though, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
