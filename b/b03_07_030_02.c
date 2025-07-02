BGOpen("wf300",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B030703002_07_000");
MsgDisp("Mikage","Well then, where to go.
Raise your hand for your choice.");
MsgSel("Raise your hand for the aquarium","Raise your hand for the Water Garden","Raise your hand for the Deep Sea Corner");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    MsgDispSksp(1,0);
    VoicePlay("B030703002_07_010");
    MsgDisp("Mikage","Alright, those going to the aquarium come
with me. We'll take turns looking at
different places, so other groups please
watch quietly.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    MsgDispSksp(1,0);
    VoicePlay("B030703002_07_020");
    MsgDisp("Mikage","Water Garden group's with me. We'll take
turns looking at different places, so
other groups please watch quietly.");
    MsgDispSksp(0);
    break ;
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    MsgDispSksp(1,0);
    VoicePlay("B030703002_07_030");
    MsgDisp("Mikage","I'm going to the Deep Sea Corner. We'll
take turns looking at different places, so
other groups please watch quietly.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
