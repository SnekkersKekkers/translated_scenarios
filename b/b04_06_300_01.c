BGOpen("bh610",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040630001_06_000");
MsgDisp("Himuro","What would you like to drink?");
MsgSel("Tea is fine","Do you have any fizzy juice?","Anything is fine.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040630001_06_010");
    MsgDisp("Himuro","I thought you'd say that, 
so I prepared some beforehand.
Wait a moment.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040630001_06_020");
    MsgDisp("Himuro","I do. Could it be
that you like it too?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040630001_06_030");
    MsgDisp("Himuro","That's quite a troublesome answer.
Then, I'll make you coffee.");
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
