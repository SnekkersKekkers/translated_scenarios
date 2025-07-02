BGOpen("wf300",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B030703001_07_000");
MsgDisp("Mikage","Oh yeah, there's also the Water Garden.
Which do you all prefer?");
MsgSel("Raise your hand for the aquarium","Raise your hand for the Water Garden");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    MsgDispSksp(1,0);
    VoicePlay("B030703001_07_010");
    MsgDisp("Mikage","Alright, that's that. Well then, if you're
headed to the aquarium, follow me.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    MsgDispSksp(1,0);
    VoicePlay("B030703001_07_020");
    MsgDisp("Mikage","Alright, that's that.
Water Garden people over here.
I'm going this way, so follow me.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
