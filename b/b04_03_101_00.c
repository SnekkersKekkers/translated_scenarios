BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040310100_03_000");
MsgDisp("Honda","I'm happy that there's a museum in my
hometown.");
MsgSel("Habataki City's history is wonderful, huh?","That mask looks like someone...","I feel the romance of ancient times.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040310100_03_010");
    MsgDisp("Honda","Yes, the more research progresses, the
more interesting stories ariseー");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040310100_03_020");
    MsgDisp("Honda","Who's that someone? ...you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("B040310100_03_030");
    MsgDisp("Honda","Ancient times...that's too vague.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
