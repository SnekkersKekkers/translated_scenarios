BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040109001_01_000");
MsgDisp("Kazama","With this many plants, it must be a real
pain to pollinate them all.");
MsgSel("Want to get some honey from here as a souvenir?","Are there a lot of bugs here?","Are there butterflies hard at work here?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040109001_01_010");
    MsgDisp("Kazama","Oh, that's a great idea.
Natural honey sounds delicious.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040109001_01_020");
    MsgDisp("Kazama","A lot of bugs here...
Well, you're probably right.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040109001_01_030");
    MsgDisp("Kazama","That's probably right. You can see a lot
of insects around here too, not just
plants.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
