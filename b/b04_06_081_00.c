BGOpen("fp210",0);
ChLayout(1);
ChOpen(6,253,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040608100_06_000");
MsgDisp("Himuro","Amazing.
This was the best time to see them.");
MsgSel("｛氷室＊＊｝, you suit the falling cherry blossoms.","Seeing the falling cherry blossoms is so fleeting...","I want to eat some tasty sakura mochi");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040608100_06_010");
    MsgDisp("Himuro","What does that mean?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608100_06_020");
    MsgDisp("Himuro","Wow, you're surprisingly sensitive.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608100_06_030");
    MsgDisp("Himuro","Dumplings over flowers?
You're so easy to read.
Then, let's go eat some on the way home.");
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
