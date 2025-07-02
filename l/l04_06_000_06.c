switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600006_06_000");
    MsgDisp("Himuro","If you don't like making these,
you don't have to force yourself.");
    MsgDisp("主人公","Ugh...... I'm sorry.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600006_06_010");
    MsgDisp("Himuro","Well, I still appreciate
the time and effort, you know......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Really, I wanted to give
him a better chocolate......)");
    break ;
    case 3:
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600006_06_020");
    MsgDisp("Himuro","......How do I say this, do you want
an award for doing your best?");
    MsgDisp("主人公","Ugh, sorry......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("L040600006_06_030");
    MsgDisp("Himuro","If you don't like making them,
it's fine to buy them instead.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("L040600006_06_040");
    MsgDisp("Himuro","Well, I'll accept your feelings,
though.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Really, I wanted to give
him a better chocolate......)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2,1);
    VoicePlay("L040600006_06_050");
    MsgDisp("Himuro","Handmade...... handmade, huh......");
    MsgDisp("主人公","How is it?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600006_06_060");
    MsgDisp("Himuro","Even if you ask for my opinion......
I don't want to lie.");
    MsgDisp("主人公","S, sorry......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("L040600006_06_070");
    MsgDisp("Himuro","But, I'm happy you put in the
effort to make it.
Really.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("L040600006_06_080");
    MsgDisp("Himuro","......Later,
just pray I don't get a stomachache.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Really, I wanted to give
him a better chocolate......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
