BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J010100000_01_000");
    MsgDisp("Kazama","Hello.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝?
Are you free to talk right now?");
    VoicePlay("J010100000_01_010");
    MsgDisp("Kazama","What's up?");
    MsgDisp("主人公","Well, umm......");
    break ;
    case 3:
    VoicePlay("J010100000_01_020");
    MsgDisp("Kazama","Hello?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝?
Are you busy right now?");
    VoicePlay("J010100000_01_030");
    MsgDisp("Kazama","I've got nothing going on. 
Even if it's just for a bit, I don't
mind!.");
    MsgDisp("主人公","Hehe, okay. Well...");
    break ;
    case 4:
    case 5:
    VoicePlay("J010100000_01_040");
    MsgDisp("Kazama","Hello.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝?
Do you have time?");
    VoicePlay("J010100000_01_050");
    MsgDisp("Kazama","Always for you. What's up?");
    MsgDisp("主人公","Thanks.
Well......");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
