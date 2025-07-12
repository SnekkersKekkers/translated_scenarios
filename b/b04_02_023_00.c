MsgClose();
ChOpen(2,255,0,0,4,#1,#1,0,0);
VoicePlay("B040202300_02_000");
MsgDisp("Sassa","Doesn't coming to the wharf really
make you feel like doing \"that\"?");
MsgSel("YAAHO!","You mean strike a cool pose?","Yeah, I'll join you.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040202300_02_010");
    MsgDisp("Sassa","Hey, that's for mountains.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040202300_02_020");
    MsgDisp("Sassa","You know me so well.
It's a common thing in old movies.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    VoicePlay("B040202300_02_030");
    MsgDisp("Sassa","Alright.
Put your foot on that ledge.
Now we both stare into the distance.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
