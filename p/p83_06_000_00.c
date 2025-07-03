BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P830600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    VoicePlay("P830600000_48_000");
    MsgDisp("School Girl","Hey, wait.
Please prepare some tea!");
    MsgDisp("主人公","Ah, yes!
Ummm, tea...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600000_06_010");
    MsgDisp("Himuro","You're worked up huh?");
    MsgDisp("主人公","Yeah, everyone is busy, 
So I have to do my best!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600000_06_020");
    MsgDisp("Himuro","Hmmm.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P830600000_06_030");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    VoicePlay("P830600000_48_010");
    MsgDisp("School Girl","Hey, wait.
Please prepare some tea!");
    MsgDisp("主人公","Ah, yes!
Ummm, tea...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600000_06_040");
    MsgDisp("Himuro","You seem busy.");
    MsgDisp("主人公","That's right, this is the day of the
cultural festival, so I'm noisily running
around.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("P830600000_06_050");
    MsgDisp("Himuro","...Do you need help?");
    MsgDisp("主人公","It's alright, this is my job.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P830600000_06_060");
    MsgDisp("Himuro","Ah, I see.");
    MsgDisp("主人公","But, thank you for the thought.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("P830600000_06_070");
    MsgDisp("Himuro","...You're welcome.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
