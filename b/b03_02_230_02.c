MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGOpen("tr410",1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030223002_02_000");
MsgDisp("Sassa","The Night Parade will be starting soon.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B030223002_02_010");
MsgDisp("Sassa","Want to watch it?");
MsgSel("Yeah, I want to watch","Sorry, not today...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B030223002_02_020");
    MsgDisp("Sassa","Sweet, let's go then.
We need to find a place where we can see
it easily.");
    MsgDispSksp(0);
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B030223002_02_030");
    MsgDisp("Sassa","Alright.
Then maybe another time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
