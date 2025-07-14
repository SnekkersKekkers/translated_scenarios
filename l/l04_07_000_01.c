switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("L040700001_07_000");
    MsgDisp("Mikage","Haha.
Splendid obligatory chocolate.");
    MsgDisp("主人公","Is it no good......?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    ChEyeOpenLevel(7,7);
    VoicePlay("L040700001_07_010");
    MsgDisp("Mikage","No, it's fine.
It's interesting.");
    MsgDisp("主人公","(Hm...... Should I have given him a better
chocolate?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    ChEyeOpenLevel(7,#1);
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("L040700001_07_020");
    MsgDisp("Mikage","Ahー, this.
They're easy to open for a quick bite.");
    MsgDisp("主人公","Um, yes.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("L040700001_07_030");
    MsgDisp("Mikage","Thanks～");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    Wait(30);
    SEPlay("EV_SE_667");
    SEWait();
    VoicePlay("L040700001_07_040");
    MsgDisp("Mikage","Mm, yum.");
    MsgDisp("主人公","(Hm...... Should I have given him a better
chocolate?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700001_07_050");
    MsgDisp("Mikage","Oh, so it's this.
Thanks.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("L040700001_07_060");
    MsgDisp("Mikage","Hm, since everyone's giving me the same
thing, I'll get confused.");
    MsgDisp("主人公","Um......");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,2);
    VoicePlay("L040700001_07_070");
    MsgDisp("Mikage","Hold on, I'll add a mark on yours.
Now I can tell them apart.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700001_07_080");
    MsgDisp("Mikage","See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(Maybe I should've given him a better
chocolate......?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
