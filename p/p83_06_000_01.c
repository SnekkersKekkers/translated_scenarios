BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    VoicePlay("P830600001_41_000");
    MsgDisp("Male Student","Excuse meー.
Could I get more cardboardー?");
    MsgDisp("主人公","Yes, understood!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("P830600001_06_000");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600001_06_010");
    MsgDisp("Himuro","I came to get another chair, 
but should I do that later?");
    MsgDisp("主人公","It's alright!
I'm doing things one by one.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600001_06_020");
    MsgDisp("Himuro","Ah, right.");
    MsgDisp("主人公","Umm, 
First things first, the cardboard——");
    VoicePlay("P830600001_48_000");
    MsgDisp("School Girl","Excuse me!
Do you have any spare duct tape?");
    MsgDisp("主人公","Yes, please wait a moment!");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    VoicePlay("P830600001_41_020");
    MsgDisp("Male Student","Excuse meー.
Could I get more cardboardー?");
    MsgDisp("主人公","Yes, I got it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,4,0,0,#1,#1,0,0);
    VoicePlay("P830600001_06_030");
    MsgDisp("Himuro","………");
    MsgDisp("主人公","Huh, ｛氷室＊＊｝?
What's wrong?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("P830600001_06_040");
    MsgDisp("Himuro","No, you seemed busy so I thought it 
was better to approach you after.");
    MsgDisp("主人公","You don't have to mind though.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600001_06_050");
    MsgDisp("Himuro","Is that right?
Then, could I get another chair?");
    MsgDisp("主人公","Of course!");
    VoicePlay("P830600001_48_010");
    MsgDisp("School Girl","Excuse me!
Do you have any spare duct tape?");
    MsgDisp("主人公","Yes, please wait a momentー!");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P830600001_06_060");
    MsgDisp("Himuro","You really do seem busy.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
