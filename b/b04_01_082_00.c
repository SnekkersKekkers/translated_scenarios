BGOpen("fp200",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040108200_01_000");
MsgDisp("Kazama","I wonder if fireflies live here...");
MsgSel("I guess they aren't out right now","Please excuse our intrusion","Do you sense some mysterious power?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040108200_01_010");
    MsgDisp("Kazama","Just because you can't see them doesn't
mean they aren't there. This is about the
time they start to pupate in the ground.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108200_01_020");
    MsgDisp("Kazama","Excuse us for the intruuusion.
This is their home, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040108200_01_030");
    MsgDisp("Kazama","Oh, yeah, there are rumors like that.
If the amount of spring water suddenly
goes up, it's a spiritual hot spot, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
