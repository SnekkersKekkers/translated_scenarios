BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040521201_05_000");
MsgDisp("Hiiragi","There's lots of plushies aren't there?");
MsgSel("That bear looks like it's looking this way","Is that a dog plush?","That purple fox is cute isn't it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040521201_05_010");
    MsgDisp("Hiiragi","Yes, it looks a little bit discontent.
I wonder if it has a problem 
with its hairstyle?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040521201_05_020");
    MsgDisp("Hiiragi","Umm, it looks like a wolf.
Its hair is peculiar and interesting");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040521201_05_030");
    MsgDisp("Hiiragi","I felt a bit of affinity to him,
so I'm happy.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
