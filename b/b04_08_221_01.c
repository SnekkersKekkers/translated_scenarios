BGMPlay("BGM_PLACE_CASTLE",0.01);
BGOpen("tr320",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,4,1);
VoicePlay("B040822101_08_000");
MsgDisp("Shirahane","the scenery musta been completely
different to now
hundreds of years ago...");
MsgSel("It might change 10 years later too?","Maybe some relics still remain?","I can feel the flow of history.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040822101_08_010");
    MsgDisp("Shirahane","It's rapidly changin' day by day...
It's a bit sad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040822101_08_020");
    MsgDisp("Shirahane","I see.
The terrain might not have changed.
Maybe I'll be able to see
it if I look closely?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChMotion(8,0,1);
    ChCheek(8,3);
    VoicePlay("B040822101_08_030");
    MsgDisp("Shirahane","That's right.
It's moving to think that even now,
as we talk, it will someday
become a thing of the past.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
