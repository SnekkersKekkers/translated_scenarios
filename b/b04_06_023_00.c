MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0);
VoicePlay("B040602300_06_000");
MsgDisp("Himuro","So.
What are we going to do?");
MsgSel("Look at the sea!","Let's talk about society.","Let's stare into each other's eyes");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602300_06_010");
    MsgDisp("Himuro","Well, we have no choice but to do that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602300_06_020");
    MsgDisp("Himuro","I think that's a bit too abstract.
Then, let's first decided on a theme to
talk about!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040602300_06_030");
    MsgDisp("Himuro","A staring contest? ...I'm good at it
though? I'll go along with it, so just try
to make me laugh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
