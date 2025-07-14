BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040123200_01_000");
MsgDisp("Kazama","It took it's time to go round, didn't it?");
MsgSel("We were able to enjoy some beautiful scenery♪","It felt so nice I fell asleep...","It was high up, cramped, and scary..");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040123200_01_010");
    MsgDisp("Kazama","That's right.
You could even see Hanegasaki beach.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123200_01_020");
    MsgDisp("Kazama","So that's why it suddenly got quiet
halfway through.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123200_01_030");
    MsgDisp("Kazama","So even you have things you're not good
with.
That's good intel.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
