BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723501_07_000");
MsgDisp("Mikage","The haunted house is kinda like
the school festival. It's nice.");
MsgSel("There's a handmade feeling to it.","The ghosts weren't scary, right?","But you were scared, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040723501_07_010");
    MsgDisp("Mikage","I see, that's exactly it.
I felt like they were preparing 
with all their might.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,1);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040723501_07_020");
    MsgDisp("Mikage","I kind of sympathize with it.
The whole, \"I curse you～\" sorta thing.
I'm kind of the same way you know?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    ChEyeOpenLevel(7,8);
    VoicePlay("B040723501_07_030");
    MsgDisp("Mikage","I've been found out～
You're paying close attention, aren't you?
I was definitely startled.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
