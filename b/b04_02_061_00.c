BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040206100_02_000");
MsgDisp("Sassa","All the heat and sand, it really
feels like summer.");
MsgSel("Want to race in the water?","Let's eat at the beach club!","Want to look for shells?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040206100_02_010");
    MsgDisp("Sassa","That sounds good. But let's not
swim too far out!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040206100_02_020");
    MsgDisp("Sassa","That first, then.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040206100_02_030");
    MsgDisp("Sassa","Okay, sounds good.
Make sure to wear your hat while we
look.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
