BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Welcome.");
    VoiceEVSPlay(5);
    VoicePlay("I250500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝, so you work
here.");
    MsgDisp("主人公","Yes, and you, ｛柊＊＊＊｝?");
    ChMotion(5,4);
    VoicePlay("I250500000_05_010");
    MsgDisp("Hiiragi","I was looking for a magazine that I had
done an interview for.");
    ChMotion(5,2);
    VoicePlay("I250500000_05_020");
    MsgDisp("Hiiragi","Aah, the entertainment corner...
Over there.
I shall go look.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(I see, ｛柊＊＊＊｝ is the
chairman of a theater company... I
can't believe I know such a great person.)");
    break ;
    case 3:
    MsgDisp("主人公","Welcome.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I250500000_05_030");
    MsgDisp("Hiiragi","｛主人公｝, so you were
working today.");
    MsgDisp("主人公","Yes, and you, ｛柊＊＊＊｝?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("I250500000_05_040");
    MsgDisp("Hiiragi","Hm?
Even if I cannot study, I can still read
books, no?");
    MsgDisp("主人公","Um...
I didn't mean...");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("I250500000_05_050");
    MsgDisp("Hiiragi","I was merely joking...
Was it difficult to understand?");
    MsgDisp("主人公","Hehe, maybe a little.");
    ChEye(5,3);
    VoicePlay("I250500000_05_060");
    MsgDisp("Hiiragi","I beg your pardon.
Well, when I think of a joke that is
easier to understand, I will return.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("I250500000_05_070");
    MsgDisp("Hiiragi","Well then, do work hard.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(...Hm? What did
｛柊＊＊＊｝ come for? Could it
be that he came to check on me?)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I250500000_05_080");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, welcome.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("I250500000_05_090");
    MsgDisp("Hiiragi","I came in order to buy a reference book
today.
Ah, I see it is over there.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Hehe, how admirable.
｛柊＊＊＊｝ is doing his best
studying.)");
    SEWait();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEPlay("EV_SE_865");
    SEWait();
    VoicePlay("I250500000_05_100");
    MsgDisp("Hiiragi","I will take this, please.");
    MsgClose();
    ChOpen(5,255,0,0,4,#1,#1,0,0,0,30);
    MsgDisp("主人公","Ah, so you found it.
Let me take that for you.");
    SEPlay("EV_SE_043");
    SEWait();
    MsgDisp("主人公","... Hm? \"
Habataki City Dating Guidebook\"?");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("I250500000_05_110");
    MsgDisp("Hiiragi","I will study this thoroughly.
I will leave it to you to grade me.");
    MsgDisp("主人公","Huh?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("I250500000_05_120");
    MsgDisp("Hiiragi","Well then, good luck with work.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(He said a reference book...
Could it be that he's going to ask me on a
date?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
