BGOpen("ne340",0);
ChLayout(1);
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B040817001_08_000");
MsgDisp("Shirahane","It's no good...
Which one should I choose?");
MsgSel("Shall we take a break from singing and just talk?","Could I sing the next one too?","Hey, come on, sing?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040817001_08_010");
    MsgDisp("Shirahane","Nice, let's do that!
I'm not terribly good at singin'...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040817001_08_020");
    MsgDisp("Shirahane","Yay!
I definitely enjoy hearin' you sing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("B040817001_08_030");
    MsgDisp("Shirahane","Wait a second.
Even if ya say that...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
