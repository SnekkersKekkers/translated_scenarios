switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3,1);
    VoicePlay("D140201101_02_000");
    MsgDisp("Sassa","Oh, we're getting along
today aren't we?");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    VoicePlay("D140201101_02_010");
    MsgDisp("Sassa","Oh, you have the same as me.");
    MsgDisp("主人公","Hehe.
Yeah, we're quite similar.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("D140201101_02_020");
    MsgDisp("Sassa","Having similar tastes in food is
important... yeah.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
