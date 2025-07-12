BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0,0,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
ChEyeOpenLevel(7,0);
ScrFadeIn(0);
VoicePlay("B040723201_07_000");
MsgDisp("Mikage","Standing with their feet firmly
planted onto the earth.
That's how humans should be.");
MsgSel("It shook quite  alot, huh?","It feels nicer up in the sky.","It's reassuring, right? ");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723201_07_010");
    MsgDisp("Mikage","It shook. I don't know if it was part of
the theatrics, but it creaked as well～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723201_07_020");
    MsgDisp("Mikage","That's incompatible with me. Different
values, different ways of living.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723201_07_030");
    MsgDisp("Mikage","That's right.
It suits me better to live with my roots
on the ground. We get along well.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
