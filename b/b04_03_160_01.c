BGOpen("ne330",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040316001_03_000");
MsgDisp("Honda","The skull bear in the crane game look like
it's in a position where I can grab it,
right?");
MsgSel("I want the skull bear!","It's a bit oversized huh?","It seems like you grab it, but you can't.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040316001_03_010");
    MsgDisp("Honda","Leave it to me!
I can do it in three tries.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040316001_03_020");
    MsgDisp("Honda","That's right, taking it home might be a
bit challenging.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040316001_03_030");
    MsgDisp("Honda","Oh yeah?
I hypothesis that I can get it.
But you don't believe in meー.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
