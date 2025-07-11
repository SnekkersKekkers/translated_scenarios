BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506100_05_000");
MsgDisp("Hiiragi","Haa...
It's very hot.");
MsgSel("Should we race out into the sea?","Let's prepare our stomachs at the beach house first!","Let's search for pretty seashells");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,-1);
    VoicePlay("B040506100_05_010");
    MsgDisp("Hiiragi","Yes, it's better to stay in the water.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChMouth(5,3);
    ChMotion(5,3);
    ChEyeOpenLevel(5,-1);
    VoicePlay("B040506100_05_020");
    MsgDisp("Hiiragi","Agreed.
I am curious as to what we 
are eating for though.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMotion(5,0);
    ChEyeOpenLevel(5,-1);
    VoicePlay("B040506100_05_030");
    MsgDisp("Hiiragi","In the middle of this heat, looking down
while walking is dangerous.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
