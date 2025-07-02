switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,0,2,-1,-1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080100007_01_000");
    MsgDisp("Kazama","Are you not excited?");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,4,2,2,10,-1,0,1);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    VoicePlay("W080100007_01_010");
    MsgDisp("Kazama","I've got a bad feeling about this.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,4,2,10,-1,0,1);
    ScrFadeIn(0);
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("W080100007_01_020");
    MsgDisp("Kazama","I'd love to hear how you came up
with this combination.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(1,0,30);
ChClose(22,0,30);
