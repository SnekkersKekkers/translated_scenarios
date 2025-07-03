BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc722",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year the Gardening Club's program
is a cafe. We prepared herb tea and
cookies, but...)");
    MsgClose();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630100000_01_000");
    MsgDisp("Kazama","You're working hard, huh.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Welcome!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("P630100000_01_010");
    MsgDisp("Kazama","I'm fussy about tea, you know?");
    MsgDisp("主人公","I have confidence in the 
Gardening Club's herbal tea!
I think we were able tomake a good blend.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P630100000_01_020");
    MsgDisp("Kazama","I look forwards to iーt.");
    MsgDisp("主人公","Entry for one customer please!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year the Gardening Club's program
is a cafe. We prepared herb tea and
cookies, but...)");
    MsgClose();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ChMotion(1,1);
    VoicePlay("P630100000_01_030");
    MsgDisp("Kazama","Hmm, a cafe huh?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Welcome!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100000_01_040");
    MsgDisp("Kazama","The poster girl makes an 
appearance huh?");
    MsgDisp("主人公","No, I'm the producer.
So we made tea and cookies with the herb 
tea the Gardening Club grew.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100000_01_050");
    MsgDisp("Kazama","Herbal tea that you grew and brewed, huh?
I look forward to it.");
    MsgDisp("主人公","Hehe.
Yes, please enjoy.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
