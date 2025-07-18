BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B040801100_08_000");
MsgDisp("Shirahane","This place is so stylish that I feel a
lil' embarrassed.");
MsgSel("Waa! I can see the horizon shining","I wonder if we can see ｛大地＊＊｝'s house from here?","It's so high that I can't move my legs...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040801100_08_010");
    MsgDisp("Shirahane","Aah...it's true.
It looks so vast from up high...
It's beautiful!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("B040801100_08_020");
    MsgDisp("Shirahane","I wonder?
Let's look for it together.
Maybe it's over there.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("B040801100_08_030");
    MsgDisp("Shirahane","I'm feelin' so intimidated by the stylish
place that my legs are frozen...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
