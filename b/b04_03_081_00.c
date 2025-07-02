BGOpen("fp210",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308100_03_000");
MsgDisp("Honda","Yep, yep, everyone 
looks like they're having fun!");
MsgSel("｛本多＊＊｝ suits the falling cherry blossoms, huh","Being able to see the falling cherry blossoms is so fleeting...","I want to eat some delicious sakura mochi");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040308100_03_010");
    MsgDisp("Honda","You too, you too!");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040308100_03_020");
    MsgDisp("Honda","Is that so? After this, we'll be able to
enjoy the young green leaves after the
cherry blossoms have fallen. That gives me
a sense of strength.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040308100_03_030");
    MsgDisp("Honda","It's nice huh? That aroma of the pickled
sakura leaf is good.");
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
