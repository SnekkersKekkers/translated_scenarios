switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,2,3,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100004_01_000");
    MsgDisp("Kazama","Well, let's keep the noise level the same.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,4,2,#1,#1,0,1);
    ScrFadeIn(0);
    ChEye(1,0);
    VoicePlay("W080100004_01_010");
    MsgDisp("Kazama","Alright. We're just gonna have to ride
this.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,4,2,10,#1,0,1);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("W080100004_01_020");
    MsgDisp("Kazama","... What's the point of this.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(1,0,30);
ChClose(22,0,30);
