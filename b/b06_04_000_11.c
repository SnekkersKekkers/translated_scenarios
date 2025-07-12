ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("B060400011_04_000");
    MsgDisp("Nanatsumori","Well then.");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("B060400011_04_010");
    MsgDisp("Nanatsumori","Thanks for your hard work today.
See ya.");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("B060400011_04_020");
    MsgDisp("Nanatsumori","Then, I'll see you?
Careful on your way back.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
