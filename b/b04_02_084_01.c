BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040208401_02_000");
MsgDisp("Sassa","Are there no wild squirrels?");
MsgSel("Let's look!","There's lots of acorns, so maybe there are","｛颯砂＊＊｝ resembles one a little");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2,1);
    VoicePlay("B040208401_02_010");
    MsgDisp("Sassa","Shhh.
There, near the hole in the tree,
looking this way.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040208401_02_020");
    MsgDisp("Sassa","That's true.
There's lots of half-eaten ones?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040208401_02_030");
    MsgDisp("Sassa","Ehh?
There's no squirrels this big.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
