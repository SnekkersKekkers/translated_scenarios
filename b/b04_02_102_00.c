BGOpen("fp420",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040210200_02_000");
MsgDisp("Sassa","Ehhh, so you're interested in this kind of
thing?");
MsgSel("I wonder?","Is ｛颯砂＊＊｝ not interested?","Yeah, it's cool huh!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040210200_02_010");
    MsgDisp("Sassa","I'm the one asking.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040210200_02_020");
    MsgDisp("Sassa","I think it's cool, but I'm not that
interested.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040210200_02_030");
    MsgDisp("Sassa","Hーm The contrast between you and a big
motorcycle is nice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
