BGOpen("ne210",0);
ChLayout(1);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040314001_03_000");
MsgDisp("Honda","During the performance, people in the
audience were bumping into each other huh?");
MsgSel("That's how you enjoy it?","Were they fighting?","Shall we copy them next time?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040314001_03_010");
    MsgDisp("Honda","Ehh?
But then you won't hear the song or music.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040314001_03_020");
    MsgDisp("Honda","Yeah, that's how it looked for me too.
They have the same interests, so why can't
they just peacefully enjoy it together?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B040314001_03_030");
    MsgDisp("Honda","No way.
I don't want you to do that either.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
