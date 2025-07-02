switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("D140301101_03_000");
    MsgDisp("Honda","Ah, you got the same as me.
Could it be that you were 
also enticed by this?");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("D140301101_03_010");
    MsgDisp("Honda","We could have ordered different things
and swapped, but it's nice that now
we ordered the same thing, we can eat
together and share our thoughts.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("D140301101_03_020");
    MsgDisp("Honda","That's why, I'm super happy
we got the same thing!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
