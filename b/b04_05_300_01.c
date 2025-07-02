BGOpen("bh510",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040530001_05_000");
MsgDisp("Hiiragi","There's a training room in here, 
And there's some members even live onsite.
It's always noisy, you know?");
MsgSel("It's quiet today huh?","Is this the only place where you can be alone,｛柊＊＊＊｝?","Do you memorize your lines in this room?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040530001_05_010");
    MsgDisp("Hiiragi","Maybe everyone is being considerate?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040530001_05_020");
    MsgDisp("Hiiragi","That's right, I'm not particularly
inconvenienced by it though.");
    MsgDispBGSksp(1,2);
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
    VoicePlay("B040530001_05_030");
    MsgDisp("Hiiragi","No, the lines come to me naturally.
It's different to studying for school?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
