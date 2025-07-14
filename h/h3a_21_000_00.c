switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc624",0);
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    Wait(15,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H3A2100000_21_000");
    MsgDisp("Michiru","Congratulations on winning!");
    MsgDisp("主人公","Thank you, ｛みちる＊｝!");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H3A2100000_21_010");
    MsgDisp("Michiru","Cute and strong.
Mari's an invincible girl, huh?");
    MsgDisp("主人公","(Hehe! I'm glad I worked so hard in the
judo club!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc624",0);
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    Wait(15,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,0);
    VoicePlay("H3A2100000_21_020");
    MsgDisp("Michiru","Mari......!");
    MsgDisp("主人公","Ah, ｛みちる＊｝. I won!");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("H3A2100000_21_030");
    MsgDisp("Michiru","I was watching.
I was very nervous, but......");
    MsgDisp("主人公","Hehe!");
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,1);
    VoicePlay("H3A2100000_21_040");
    MsgDisp("Michiru","You were very cool.
I think I've come to like you even more,
Mari.");
    MsgDisp("主人公","(Hehe! I'm glad I worked so hard in the
judo club!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
