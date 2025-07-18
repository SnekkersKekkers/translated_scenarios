BGOpen("sc101",0);
ScrFadeIn(0);
MsgDisp("主人公","Alright, let's join the student council!");
MsgClose();
ScrFadeOut(0);
BGOpen("sc605",0);
ScrFadeIn(0);
VoicePlay("H810000000_39_000");
MsgDisp("Teacher","It's quite a lot of work, but it's worth
doing.
Do your best.");
MsgDisp("主人公","(It seems hard, but I'll do my best!)");
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("H810000000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
I joined the student council today.
Let's work well together.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P810500000_05_010");
    MsgDisp("Hiiragi","Understood.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("I450500000_05_110");
    MsgDisp("Hiiragi","Good afternoon.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
I joined the student council today.
I look forward to working with you!");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    ChEyeOpenLevel(5,0);
    VoicePlay("I450500000_05_170");
    MsgDisp("Hiiragi","And I as well.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("I650500000_05_000");
    MsgDisp("Hiiragi","So it was you after all.");
    MsgDisp("主人公","Ah!
I joined the student council t-");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("F020500006_05_000");
    MsgDisp("Hiiragi","Yes, I am looking forward to it.");
    MsgDisp("主人公","Hehe!
Let's work well together,
｛柊＊＊＊｝.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    ChEyeOpenLevel(5,0);
    VoiceEVSPlay(5);
    VoicePlay("P810500000_05_020");
    MsgDisp("Hiiragi","｛主人公｝, let us both do our
best.");
    MsgDisp("主人公","(Yes, for the sake of Haba High's morals,
let's work hard with
｛柊＊＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
