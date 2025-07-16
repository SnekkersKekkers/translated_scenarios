switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("L040300001_03_000");
    MsgDisp("Honda","Ah, perfect for replenishing my sugar
levels.
Thanks!");
    MsgDisp("主人公","(Yeah......
That's how it is.)");
    break ;
    case 3:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("L040300001_03_010");
    MsgDisp("Honda","Ah, this!
My sister gave me the same one.");
    MsgDisp("主人公","Ah, we overlapped?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("L040300001_03_020");
    MsgDisp("Honda","It's fine, it's fine.
I already know it's delicious.
Thanks!");
    MsgDisp("主人公","(He seemed pleased, I guess.)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("L040300001_03_030");
    MsgDisp("Honda","......Oh?");
    MsgDisp("主人公","?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("L040300001_03_040");
    MsgDisp("Honda","That's weird.
Usually, I don't mind obligatory
chocolates......");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("L040300001_03_050");
    MsgDisp("Honda","Ah, but thanks!
I'll enjoy them.");
    ChClose(3);
    VoicePlay("L040300001_03_060");
    MsgDisp("Honda?","...... Da, I wonder what this is.
This uneasy feeling......");
    MsgDisp("主人公","(Maybe I should've given him a better
chocolate......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
