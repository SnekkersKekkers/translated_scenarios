BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040522201_05_000");
MsgDisp("Hiiragi","Unlike the castle tower, this place is
empty.");
MsgSel("It's because it's a bit dull isn't it?","If you're a Habataki citizen you'll have come here many times for ages.","Looks like it's just the two of us!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("B040522201_05_010");
    MsgDisp("Hiiragi","Hey, don't say that
even if you think so.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040522201_05_020");
    MsgDisp("Hiiragi","I see, I want to join that circle soon.
Until then, could you come with me many
more times?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040522201_05_030");
    MsgDisp("Hiiragi","That's a refreshing way to look at it.
I like it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
