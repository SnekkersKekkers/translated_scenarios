BGMPlay("BGM_PLACE_SHOP");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc723",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P630200001_02_000");
    MsgDisp("Sassa","｛主人公｝, You're selling fresh
vegetables?");
    MsgDisp("主人公","｛颯砂＊＊｝, welcome! Yes, we're selling
organic vegetables and herb tea.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("P630200001_02_010");
    MsgDisp("Sassa","The vegetables you grew with
Mikage-sensei, I'm guessing.
They must be delicious.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","They've grown beautifully, huh?
Mikage-sensei says that they're beauties.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P630200001_02_020");
    MsgDisp("Sassa","Then, I'll have a beauty that you grew,
and some herbal tea too, please.");
    MsgDisp("主人公","Yes.
One customer, this way～!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,#1);
    ChMouth(2,#1);
    ChCheek(2,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc723",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P630200001_02_030");
    MsgDisp("Sassa","｛主人公｝, These vegetables look
delicious.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝ you came.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("P630200001_02_040");
    MsgDisp("Sassa","I'm guessing these are vegetables you
grew?
I definitely want to eat it.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Yeah, it's like a child I raised under my
own care, huh?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("P630200001_02_050");
    MsgDisp("Sassa","Your own kid huh...
I see, it'll be hard to eat in one go.");
    MsgDisp("主人公","Ehh? Eat lots. They not only taste good,
but look pretty too.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P630200001_02_060");
    MsgDisp("Sassa","Then of course they take after their
parent huh?");
    MsgDisp("主人公","Eh...?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P630200001_02_070");
    MsgDisp("Sassa","Instead of saying \"Eh\", You should be
happy?");
    MsgDisp("主人公","Hehe, I see.
Thank you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200001_02_080");
    MsgDisp("Sassa","Then I'll have a vegetables that's like
you, and a herb tea please");
    MsgDisp("主人公","Hehe, yes.
Then, follow me to your table.");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,#1);
    ChMouth(2,#1);
    ChCheek(2,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
