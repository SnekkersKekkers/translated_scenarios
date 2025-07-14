BGOpen("fp210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040208100_02_000");
MsgDisp("Sassa","Yeah, it's magnificent.");
MsgSel("｛颯砂＊＊｝, the flurry of falling cherry blossoms matches with you.","We can only see the cherry blossoms for such a fleeting amount of time...","I want to eat some tasty cherry blossom mochi.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040208100_02_010");
    MsgDisp("Sassa","Eh?
Which part? ");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040208100_02_020");
    MsgDisp("Sassa","Heeー, so that's how you see at it.
I feel like I only have to wait until next
year.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208100_02_030");
    MsgDisp("Sassa","That's nice.
Let's go buy some and eat it.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
