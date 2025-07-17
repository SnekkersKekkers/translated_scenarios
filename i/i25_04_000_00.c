BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250400000_04_000");
    MsgDisp("Nanatsumori","...Ah.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
    VoicePlay("I250400000_04_010");
    MsgDisp("Nanatsumori","Working?");
    MsgDisp("主人公","Yeah.
Did you come to buy a book,
｛七ツ森＊｝?");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I250400000_04_020");
    MsgDisp("Nanatsumori","If there's something I like.
For now, I'll check out the new books.
Good luck with work.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4);
    SEWait();
    MsgDisp("主人公","(Did he come to check on me?)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250400000_04_030");
    MsgDisp("Nanatsumori","Yo.
Good work.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
    ChMotion(4,0,1);
    VoicePlay("I250400000_04_040");
    MsgDisp("Nanatsumori","Hey, where are all the magazines with
appendixes?");
    MsgDisp("主人公","I'll show you.
Please follow me.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("I250400000_04_050");
    MsgDisp("Nanatsumori","Thanks.
You're kinda cool.");
    MsgDisp("主人公","(I did it!
｛七ツ森＊｝ praised me.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(All the covers in the sweets magazine
cover are so cute.
They look delicious...)");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,1,4,4,#1,#1,0,0);
    VoicePlay("I250400000_04_060");
    MsgDisp("Nanatsumori","Come on.
Escaping reality while at work isn't
allowed, right?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("I250400000_04_070");
    MsgDisp("Nanatsumori","Haha.
Good work.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,2);
    VoicePlay("I250400000_04_080");
    MsgDisp("Nanatsumori","... Ah.
Aah, this is poison to my eyes.
Hm, poison, or heaven?");
    MsgDisp("主人公","...Right?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("I250400000_04_090");
    MsgDisp("Nanatsumori","Mm.
I'll buy this as an apology for saying too
much.");
    MsgDisp("主人公","Hehe, thank you very much!");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1);
    ChCheek(4,5);
    VoicePlay("I250400000_04_100");
    MsgDisp("Nanatsumori","... No prob.
Want to head to this specialty sweets shop
with me next time?");
    MsgDisp("主人公","(...
Is he inviting me on a date?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
