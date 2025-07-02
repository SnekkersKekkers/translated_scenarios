BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040206101_02_000");
MsgDisp("Sassa","A lot of people here seem to be 
getting carried away.");
MsgSel("It's a bit scary","The one who has the most fun wins!","Everyone looks happy, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040206101_02_010");
    MsgDisp("Sassa","There's no need to be afraid.
Though it does make me uneasy seeing
half-naked delinquents.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040206101_02_020");
    MsgDisp("Sassa","Haha, you're getting carried
away too.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0,1);
    VoicePlay("B040206101_02_030");
    MsgDisp("Sassa","That way of looking at it is
I'll try to reconsider.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
