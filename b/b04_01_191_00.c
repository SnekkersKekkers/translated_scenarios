BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,2);
    VoicePlay("B040119100_01_000");
    MsgDisp("Kazama","Story aside, the characters were super
charming.
I almost forgot it was a documentary film.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040119100_01_010");
    MsgDisp("Kazama","I guess documentaries aren't something you
should watch on a date huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040119100_01_020");
    MsgDisp("Kazama","Yeah, they totally missed the mark.
I was surprised because the content was
exactly what I expected.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
