switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,3,1);
    VoicePlay("L040500005_05_000");
    MsgDisp("Hiiragi","Thank you very much. It's handmade......
Ah.");
    MsgDisp("主人公","Hm?");
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("L040500005_05_010");
    MsgDisp("Hiiragi","Ah, no. Pay me no mind. I will have this
later. Farewell.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(I wonder if I put in something he doesn't
like......)");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500005_05_020");
    MsgDisp("Hiiragi","Ah, it's handmade.
Thank you.");
    MsgDisp("主人公","Yes!
I hope it suits your tastes.");
    ChEye(5,2);
    ChMouth(5,0);
    ChMotion(5,4);
    VoicePlay("L040500005_05_030");
    MsgDisp("Hiiragi","This...... is for me, correct?");
    MsgDisp("主人公","Hm?　What's wrong?");
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("L040500005_05_040");
    MsgDisp("Hiiragi","......I see, are you testing me? Though I
look like this, I quite enjoy a challenge.
I will accept gratefully.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(A challenge?
Did I add something he doesn't
like......?)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500005_05_050");
    MsgDisp("Hiiragi","It's handmade, is it?");
    MsgDisp("主人公","Yes!");
    ChEye(5,2);
    ChMotion(5,2);
    VoicePlay("L040500005_05_060");
    MsgDisp("Hiiragi","I see, this is......");
    ChEye(5,4);
    ChMouth(5,0);
    VoicePlay("L040500005_05_070");
    MsgDisp("Hiiragi","......This is surely due to a
miscommunication.
The fault is on me.");
    MsgDisp("主人公","Hm? What's wrong?");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("L040500005_05_080");
    MsgDisp("Hiiragi","Nothing, thank you.
You allowed me to realize something, and
gave me chocolate as well.");
    ChEye(5,0);
    VoicePlay("L040500005_05_090");
    MsgDisp("Hiiragi","Well then, farewell.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(......Something he realized?
Did I put in something he doesn't
like......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
