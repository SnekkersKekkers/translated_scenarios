BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040709001_07_000");
MsgDisp("Mikage","Is that okay～? One sketch of something
that catches your eye. This is today's
assignment.");
MsgSel("I'll draw a pretty flower!","I'll sketch ｛御影＊＊｝'s hair!","Would a flying butterfly be okay?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040709001_07_010");
    MsgDisp("Mikage","I'm looking forwards to seeing your taste
depending on which one you choose.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040709001_07_020");
    MsgDisp("Mikage","My hair isn't made of vines.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040709001_07_030");
    MsgDisp("Mikage","That's fine but, I would want it to be a
plant.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
