BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250600000_06_000");
    MsgDisp("Himuro","The reference book corner is......");
    MsgDisp("主人公","Hm, ｛氷室＊＊｝?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("I250600000_06_010");
    MsgDisp("Himuro","Oh, it's you.
You work here?");
    MsgDisp("主人公","Yeah. You're looking for the reference
book corner, right? I'll take you there.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_020");
    MsgDisp("Himuro","Ah, no, it's fine.
I know where it is.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(I thought he was looking for it, but
maybe I was wrong?)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250600000_06_030");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝! Are you shopping?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_040");
    MsgDisp("Himuro","Shopping, and visiting.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_050");
    MsgDisp("Himuro","You could also say I'm checking if there
are any people bothering you at work.");
    MsgDisp("主人公","Geez.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I250600000_06_060");
    MsgDisp("Himuro","But I was worried for nothing.
You seem to be doing well.");
    MsgDisp("主人公","I'm doing my best, but......
I still have a long way to go.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_070");
    MsgDisp("Himuro","That's a natural feeling when you're
learning. As long as it doesn't bother you
too much, you'll be fine.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I250600000_06_080");
    MsgDisp("Himuro","By the way, do you have that award-winning
novel?");
    MsgDisp("主人公","Ah, that novel has a special display next
to the entrance.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_090");
    MsgDisp("Himuro","Thanks.
Well, keep up the good work.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(He really did come to
shop and visit.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250600000_06_100");
    MsgDisp("Himuro","Hey, miss.");
    MsgDisp("主人公","Yes! Wait, ｛氷室＊＊｝?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("I250600000_06_110");
    MsgDisp("Himuro","Good response.
Looking good.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("I250600000_06_120");
    MsgDisp("Himuro","......By the way, how far are you planning
to carry all those books?");
    MsgDisp("主人公","Ah, um,
to the comic section.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I250600000_06_130");
    MsgDisp("Himuro","That's at the other end of the store.
You're taking it all the way there?");
    MsgDisp("主人公","Of course!
I wouldn't be doing my job if I didn't.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_140");
    MsgDisp("Himuro","Hm, guess you've been trained well?");
    MsgDisp("主人公","It's hard work, but it's worth doing, you
know?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I250600000_06_150");
    MsgDisp("Himuro","That's what's most important.
Well, good luck.");
    MsgDisp("主人公","Yeah, thanks!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I250600000_06_160");
    MsgDisp("Himuro","See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","(Did ｛氷室＊＊｝ just come to cheer me on?
Hehe, I'm happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
