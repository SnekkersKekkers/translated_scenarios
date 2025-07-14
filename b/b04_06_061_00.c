BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606100_06_000");
MsgDisp("Himuro","...So, what should we do?");
MsgSel("Should we have a contest in the water?","Let's eat at the beach hut!","Should we look for seashells?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B040606100_06_010");
    MsgDisp("Himuro","I'm telling you in advance, I'm not going
easy on you. You were the one who
suggested it, so let's have fun.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606100_06_020");
    MsgDisp("Himuro","...I thought you'd say that.
That's fine, let's get something to eat.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040606100_06_030");
    MsgDisp("Himuro","Are you going to make some accessories?
Well, I'll join you.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
