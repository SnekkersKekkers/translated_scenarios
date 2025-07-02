BGOpen("ne330",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040416001_04_000");
MsgDisp("Nanatsumori","You know the crane games.
The prizes are just toys, but 
I'm weirdly drawn to it?");
MsgSel("It's like a treasure within reach but you can't get to","wouldn't it be quicker to buy it?","It's because you're still a kid.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040416001_04_010");
    MsgDisp("Nanatsumori","Ahh...I see.
That analogy is super good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040416001_04_020");
    MsgDisp("Nanatsumori","Then, let's leave this place.
Since it's a waste of time and money.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040416001_04_030");
    MsgDisp("Nanatsumori","Well, we're still
not fully adults yet.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
