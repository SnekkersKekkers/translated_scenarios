BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040501100_05_000");
MsgDisp("Hiiragi","Everything which can be 
seen here is Habataki CIty.");
MsgSel("Waa! The horizon appears as if it's shining!","Can we see｛柊＊＊＊｝'s home?'","The height has me frozen in fear...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("B040501100_05_010");
    MsgDisp("Hiiragi","It is truly beautiful isn't it.
It was my dream to live in 
a town with a beach.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040501100_05_020");
    MsgDisp("Hiiragi","Unfortunately, I do not know in which
direction it even is.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("B040501100_05_030");
    MsgDisp("Hiiragi","Are you bad with high places?
Then, it's best you do not look down.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
