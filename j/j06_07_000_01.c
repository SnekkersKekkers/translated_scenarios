ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
MsgDisp("主人公","(What shall I do? ......)");
SEStop("EV_SE_GAYA_017",1.5);
MsgSel("Raise your hand", "Don't raise your hand");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(Okay, let's join in!)");
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("J060700001_07_000");
    MsgDisp("Mikage","Wow.
You are pretty serious, aren't you?
I'm impressed.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("J060700001_07_010");
    MsgDisp("Mikage","I'll see those who're participating
on Sunday then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    Wait(30);
    SEPlay("EV_SE_GAYA_018");
    MsgDisp("主人公","(This Sunday huh ......
I'll try not to oversleep.)");
    SEStop("EV_SE_GAYA_018",1);
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("J060700001_07_020");
    MsgDisp("Mikage","Wow, that's not much, is it?
Well, I know how you guys feel.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("J060700001_07_030");
    MsgDisp("Mikage","Well, if you change your mind, let me
know.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    Wait(30);
    SEPlay("EV_SE_GAYA_018");
    MsgDisp("主人公","(Hmmm, maybe I should have gone.)");
    SEStop("EV_SE_GAYA_018",1);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
