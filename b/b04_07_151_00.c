BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040715100_07_000");
MsgDisp("Mikage","Let's have a contest.
I'll show you the fruits of my shadowing
practice.");
MsgSel("I won't lose!","｛Mikage＊＊｝'s ball seems heavy.","A competition is kinda...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040715100_07_010");
    MsgDisp("Mikage","Course you won't. I'd be worried if you went
down that easy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040715100_07_020");
    MsgDisp("Mikage","The heavier pins go down. Adults win with
their brains, see.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040715100_07_030");
    MsgDisp("Mikage","What's that, you're quitting while you're
ahead?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
