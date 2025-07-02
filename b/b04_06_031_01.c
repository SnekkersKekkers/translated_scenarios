BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603101_06_000");
MsgDisp("Himuro","Don't the fish look cramped in here?");
MsgSel("Yeah, it's pitiful...","Looks like there are a lot of fish!","Is that so?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040603101_06_010");
    MsgDisp("Himuro","It's an man-made environment 
so there's a limit...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040603101_06_020");
    MsgDisp("Himuro","It's a selfish but optimistic outlook.
I don't think I hate it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040603101_06_030");
    MsgDisp("Himuro","You look at it differently 
to me.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
