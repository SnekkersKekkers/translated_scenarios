BGOpen("wf610",0);
ChLayout(1);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B040306201_03_000");
MsgDisp("Honda","Here's our chance!
It looks like there's no one around?");
MsgSel("Yay, we have the place to ourselves!","Alright Doctor, what experiment are we gonna do?","Shall we try shouting out loud?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040306201_03_010");
    MsgDisp("Honda","Yeah, listen closely.
When no one's talking, you can only hear
the sound of the waves echoing.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,9);
    VoicePlay("B040306201_03_020");
    MsgDisp("Honda","Alright then my assistant, please gather
up the wharf roaches.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040306201_03_030");
    MsgDisp("Honda","Three, two, one!
Blue～Blue Grotto!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
