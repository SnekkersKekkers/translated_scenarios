MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("B040102300_01_000");
MsgDisp("Kazama","It's lively here.");
MsgSel("I can't seem to settle down","Seems popular with young people","The sound of the seagulls is amazing");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040102300_01_010");
    MsgDisp("Kazama","What, why can't you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,4);
    ChMotion(1,0);
    VoicePlay("B040102300_01_020");
    MsgDisp("Kazama","We're young too, aren't we?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102300_01_030");
    MsgDisp("Kazama","They're gathering all around you.
That attractive aura of yours even works
on birds.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
