BGOpen("fp210",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
VoicePlay("B040508100_05_000");
MsgDisp("Hiiragi","This is a present limited to only this
time of year.
Let's enjoy it.");
MsgSel("｛本多＊＊｝ suits the falling cherry blossoms, huh?","Being able to see the falling cherry blossoms is so fleeting...","I want to eat some delicious cherry blossom mochi");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040508100_05_010");
    MsgDisp("Hiiragi","Thank you.
Those are the joys of being an actor.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    VoicePlay("B040508100_05_020");
    MsgDisp("Hiiragi","Hehe.
You're a bit different to usual too.
The power of cherry blossoms are amazing.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040508100_05_030");
    MsgDisp("Hiiragi","Yes, that sounds nice.
For me it's yakisoba.");
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
