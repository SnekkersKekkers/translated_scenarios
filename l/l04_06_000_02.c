switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600002_06_000");
    MsgDisp("Himuro","You went all out, huh.");
    MsgDisp("主人公","Because you're usually looking out for me.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600002_06_010");
    MsgDisp("Himuro","Ah, is that so.
Then, I'll take it.
Thanks for the snack.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(He seemed happy!
I'm glad I splurged!)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600002_06_020");
    MsgDisp("Himuro","Expensive-looking chocolate.
This kind of thing shouldn't be about the
price.");
    MsgDisp("主人公","...Is, is that bad?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600002_06_030");
    MsgDisp("Himuro","Not really.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("L040600002_06_040");
    MsgDisp("Himuro","It just shows how much you cared.
...Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(He seemed happy!
I'm glad I splurged!)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4,1);
    VoicePlay("L040600002_06_050");
    MsgDisp("Himuro","...Is it really fine if I have this?");
    MsgDisp("主人公","Of course.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600002_06_060");
    MsgDisp("Himuro","Even though it's expensive?");
    MsgDisp("主人公","I spent the money for you, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,5);
    VoicePlay("L040600002_06_070");
    MsgDisp("Himuro","Ah, is that so...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("L040600002_06_080");
    MsgDisp("Himuro","...Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(He seemed happy!
I'm glad I splurged!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
