BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_652");
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Welcome.
Ah, ｛柊＊＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoicePlay("I150500000_05_000");
    MsgDisp("Hiiragi","So you were working today.");
    MsgDisp("主人公","Yes.
Are you shopping, ｛柊＊＊＊｝?");
    ChMouth(5,4);
    VoicePlay("I150500000_05_010");
    MsgDisp("Hiiragi","Yes, our troupe is quite large, so there
is much we need.");
    MsgDisp("主人公","It seems hard.");
    ChMotion(5,4);
    VoicePlay("I150500000_05_020");
    MsgDisp("Hiiragi","Not at all, shopping is quite fun, is it
not?");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("I150500000_05_030");
    MsgDisp("Hiiragi","Incidentally, would you happen to have 10
hangers here?");
    MsgDisp("主人公","Hangers?
We don't carry household goods.");
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("I150500000_05_040");
    MsgDisp("Hiiragi","Ah, I see.
I had just heard of General Store Simon...");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("I150500000_05_050");
    MsgDisp("Hiiragi","Well then, please excuse me.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ looks busy.
...But it looks like he likes shopping?)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Welcome!");
    VoicePlay("I150500000_05_060");
    MsgDisp("Hiiragi","Good day.
You are working hard at your part-time
job.");
    MsgDisp("主人公","Yes.
Are you looking for something,
｛柊＊＊＊｝?");
    ChEye(5,4);
    VoicePlay("I150500000_05_070");
    MsgDisp("Hiiragi","No.
I'm having fun simply watching this shop.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("I150500000_05_080");
    MsgDisp("Hiiragi","Ah, but this may put a damper on the mood
of the store.");
    MsgDisp("主人公","Not at all, take your time looking around.");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("I150500000_05_090");
    MsgDisp("Hiiragi","Yes, thank you very much.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    VoicePlay("I150500000_05_100");
    MsgDisp("Hiiragi","Aroma diffuser?
I see, so you add fragrant oils in.
What a wonderful item...");
    MsgDisp("主人公","(Hehe.
｛柊＊＊＊｝ really likes shopping.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","｛柊＊＊＊｝, welcome!");
    VoicePlay("I150500000_05_110");
    MsgDisp("Hiiragi","Good day.
I'll be intruding for a bit.");
    MsgDisp("主人公","Are you looking for something specific
today?");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("I150500000_05_120");
    MsgDisp("Hiiragi","No, while I was out shopping, your face
suddenly came to my mind, and-");
    ChMotion(5,0);
    VoicePlay("I150500000_05_130");
    MsgDisp("Hiiragi","Before I realized, I was here.");
    MsgDisp("主人公","Um...");
    ChEye(5,3);
    VoicePlay("I150500000_05_140");
    MsgDisp("Hiiragi","Heheh, if you think about it, I suppose
you were the thing I was searching for?");
    MsgDisp("主人公","Huh!?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("I150500000_05_150");
    MsgDisp("Hiiragi","As I have fulfilled my objective, I will
go ahead and take a look around the store
before heading home.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝, does that mean he came to
see me??)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
