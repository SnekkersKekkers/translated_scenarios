BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040322100_03_000");
MsgDisp("Honda","Castle with surviving towers
like Habataki Castle are precious.");
MsgSel("As expected of Habataki City?","Seems like it was sturdily built.","The cracks in the floor are scary, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040322100_03_010");
    MsgDisp("Honda","Right right,
it's the pride of Habataki city!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040322100_03_020");
    MsgDisp("Honda","Hmm, maybe it's more accurate
to say it's flexible or supple
rather than sturdy");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040322100_03_030");
    MsgDisp("Honda","Yeah, the draft is strong, 
and the floor creaks a lot.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
