switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0);
    VoicePlay("L040800001_08_000");
    MsgDisp("Shirahane","Ah, this is the fifth I got.
Thanks for the obligatory chocolate.");
    MsgDisp("主人公","(Hm,
well, that's how it is......)");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,0);
    VoicePlay("L040800001_08_010");
    MsgDisp("Shirahane","Ah, obligatory chocolate.");
    MsgDisp("主人公","Huh?");
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800001_08_020");
    MsgDisp("Shirahane","Looks delish though.
Thanks.");
    MsgDisp("主人公","(He seemed happy, I guess?)");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,0);
    ChEyeOpenLevel(8,10);
    ChCheek(8,4);
    VoicePlay("L040800001_08_030");
    MsgDisp("Shirahane","......Hm?");
    MsgDisp("主人公","Hm?");
    ChEye(8,2);
    ChMouth(8,1);
    VoicePlay("L040800001_08_040");
    MsgDisp("Shirahane","This, obligatory-");
    ChEye(8,2);
    ChMouth(8,2);
    ChMotion(8,4,1);
    VoicePlay("L040800001_08_050");
    MsgDisp("Shirahane","Nah, what am I sayin'.
It's good that I even got some......");
    MsgDisp("主人公","(He seems sad.
Maybe I should have given him
a better chocolate......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
