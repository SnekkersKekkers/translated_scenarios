switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B060600011_06_000");
    MsgDisp("Himuro","Bye then.");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B060600011_06_010");
    MsgDisp("Himuro","Bye.");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B060600011_06_020");
    MsgDisp("Himuro","Take care then.
...... See you next time.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
