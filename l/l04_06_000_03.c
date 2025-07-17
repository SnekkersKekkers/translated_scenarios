switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5,1);
    VoicePlay("L040600003_06_000");
    MsgDisp("Himuro","...I didn't think it'd be handmade.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("L040600003_06_010");
    MsgDisp("Himuro","And with my favorite topping.
Nice.");
    MsgDisp("主人公","I did my best!");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600003_06_020");
    MsgDisp("Himuro","Thanks.
I'll have a taste.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(｛氷室＊＊｝ seemed really happy!)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600003_06_030");
    MsgDisp("Himuro","You went through the trouble of making it?");
    MsgDisp("主人公","How is it?");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600003_06_040");
    MsgDisp("Himuro","It looks really good.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("L040600003_06_050");
    MsgDisp("Himuro","I'll eat it carefully.
Thanks for the snack.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(｛氷室＊＊｝ seemed really happy!)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5,1);
    VoicePlay("L040600003_06_060");
    MsgDisp("Himuro","Wah, handmade...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("L040600003_06_070");
    MsgDisp("Himuro","And... my taste.");
    MsgDisp("主人公","How is it?");
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,1);
    ChCheek(6,10);
    VoicePlay("L040600003_06_080");
    MsgDisp("Himuro","How is it?
You're pretty confident, aren't you?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600003_06_090");
    MsgDisp("Himuro","It'd be weird if you weren't.
Something this perfect is hard to make.");
    MsgDisp("主人公","Um...
You're complimenting me, right?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("L040600003_06_100");
    MsgDisp("Himuro","Ah... yeah.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600003_06_110");
    MsgDisp("Himuro","I'll savor it later.
Thanks for the snack.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(｛氷室＊＊｝ seemed really happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
