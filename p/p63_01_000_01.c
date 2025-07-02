BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc723",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChOpen(1,254,0,4,3,-1,-1,0,0);
    VoicePlay("P630100001_01_000");
    MsgDisp("Kazama","Pardon the intrusion.
I came to enjoy some herbal tea.");
    MsgDisp("主人公","Ah,｛風真＊＊｝!
Welcome. This year we're also 
doing a vegetable sale.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("P630100001_01_010");
    MsgDisp("Kazama","Heeh, your vegetables, huh?
Somehow, I think I can tell 
which it is just by looking.");
    MsgDisp("主人公","Yes, because the person who 
grew them is written down.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100001_01_020");
    MsgDisp("Kazama","Even without that, I could tell.
Well, I'll have a look.");
    MsgDisp("主人公","Hehe, by all means.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ChEye(1,4);
    ChMotion(1,3);
    VoicePlay("P630100001_01_030");
    MsgDisp("Kazama","Business is thriving, huh?
Are there still the vegetables you grew?");
    MsgDisp("主人公","Ah,｛風真＊＊｝!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100001_01_040");
    MsgDisp("Kazama","I came in because I was interested in
the herbs and vegetables you grew.");
    MsgDisp("主人公","Welcome.
You can drink herb tea here, though
the vegetables are sold.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100001_01_050");
    MsgDisp("Kazama","Understood.
I'll buy some vegetables as a 
souvenir for my Grandpa.");
    MsgDisp("主人公","Yeah, I hope he likes it.");
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
