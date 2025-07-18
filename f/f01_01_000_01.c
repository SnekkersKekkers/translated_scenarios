switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛風真＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,254,0,0,2,8,#1,0,0);
    VoicePlay("F010100001_01_000");
    MsgDisp("Kazama","...it's no good.");
    MsgDisp("主人公","(Yep.
I guess I shouldn't call him that...)");
    break ;
    case 3:
    MsgDisp("主人公","｛風真＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,254,0,0,2,8,#1,0,0);
    ChMotion(1,1);
    VoicePlay("F010100001_01_010");
    MsgDisp("Kazama","What's up with that?
...Geez.");
    MsgDisp("主人公","(It doesn't seem like he likes being
called this.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛風真＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,254,0,2,2,#1,#1,0,0);
    VoicePlay("F010100001_01_020");
    MsgDisp("Kazama","Are you talking to me?
Why'd you say that?");
    MsgDisp("主人公","Huh?
I just wanted to see if I could...");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("F010100001_01_030");
    MsgDisp("Kazama","I don't like it at all.
I thought there might be a reason, but
there doesn't seem like there is.");
    MsgDisp("主人公","(Yeah, I shouldn't call him that...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
