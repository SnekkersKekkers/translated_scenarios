BGOpen("tr200",0);
MsgDispSksp(1,0);
ChSet(3,0,1);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("B030321001_03_000");
    MsgDisp("Honda","What, merch before seeing the real thing?
You must be one of those people who likes 
to save the best for last.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030321001_03_010");
    MsgDisp("Honda","Now then, the animals are waiting for us.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
