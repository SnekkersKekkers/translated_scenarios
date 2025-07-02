BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321201_03_000");
MsgDisp("Honda","Look look, paw manju!
They're so realistic.");
MsgSel("Interesting huh, what flavour?","Looks like a bear's paw","It's a bit pitiful?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040321201_03_010");
    MsgDisp("Honda","Yep yep, nice idea!
It says it's miso flavoured.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040321201_03_020");
    MsgDisp("Honda","Yep yep, cooked bear paw.
I've always wanted to try it onceー.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    ChEyeOpenLevel(3,-1);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040321201_03_030");
    MsgDisp("Honda","It's definitely a bit too realistic.");
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
