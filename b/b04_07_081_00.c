BGOpen("fp210",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040708100_07_000");
MsgDisp("Mikage","The cherry blossoms here are
well-cared for.");
MsgSel("｛御影＊＊｝, the falling cherry blossoms suit you.","The time where you can see the falling cherry blossoms is so fleeting...","I want to eat some delicious sakura mochi.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040708100_07_010");
    MsgDisp("Mikage","It suits you as well?");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,4,1);
    VoicePlay("B040708100_07_020");
    MsgDisp("Mikage","Is that so?
You'll be able to see it again soon.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040708100_07_030");
    MsgDisp("Mikage","Were you really listening?
Well, but that's what I was thinking too.");
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
