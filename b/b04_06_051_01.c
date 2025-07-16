BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040605101_06_000");
MsgDisp("Himuro","Aren't the shapes of the constellations
kind of forced? ?");
MsgSel("The power of imagination is important!","It is quite unreasonable","People in ancient times were amazing huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040605101_06_010");
    MsgDisp("Himuro","Definitely.
If you didn't have a strong imagination,
you wouldn't think of it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040605101_06_020");
    MsgDisp("Himuro","Right.
How does that look like a bear or a human?
I seriously don't get it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040605101_06_030");
    MsgDisp("Himuro","Well yeah.
In a way, I respect it.
How much have they thought of those stars?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
