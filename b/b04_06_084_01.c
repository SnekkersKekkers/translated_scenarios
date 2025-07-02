BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
SEPlay("EV_SE_018");
MsgDisp("","(*GROWL*～)");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5,1);
ChCheek(6,10);
VoicePlay("B040608401_06_000");
MsgDisp("Himuro","Ah...");
MsgSel("Autumn stirs up your appetite huh","I heard that ▼","I'm also getting hungry.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040608401_06_010");
    MsgDisp("Himuro","...Right, maybe.
I've been feeling really hungry lately.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608401_06_020");
    MsgDisp("Himuro","And so what?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("B040608401_06_030");
    MsgDisp("Himuro","Good timing.
Let's drop by somewhere on the way home.
And think of what would be good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
