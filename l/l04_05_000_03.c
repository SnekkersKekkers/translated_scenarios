switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,5,1);
    VoicePlay("L040500003_05_000");
    MsgDisp("Hiiragi","Wow...it's quite amazing.");
    MsgDisp("主人公","Hehe, it's handmade.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("L040500003_05_010");
    MsgDisp("Hiiragi","I see...it must have been difficult to
make something this elaborate.");
    ChMotion(5,3);
    VoicePlay("L040500003_05_020");
    MsgDisp("Hiiragi","I will savor each bite.
Thank you very much.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Thank goodness, it seemed like he liked
it!)");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500003_05_030");
    MsgDisp("Hiiragi","That's quite the elaborate decoration.
It was difficult, wasn't it?
Thank you.");
    MsgDisp("主人公","I'm glad you like it.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("L040500003_05_040");
    MsgDisp("Hiiragi","Of course I do.
You must have put a lot of effort into
choosing it.");
    MsgDisp("主人公","Yes, I'm glad I made it myself.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("L040500003_05_050");
    MsgDisp("Hiiragi","Yes, it's quite the masterpiece.
I almost want to decorate the theater with
it.");
    MsgDisp("主人公","What!?
That's no good.
Make sure to eat it.");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("L040500003_05_060");
    MsgDisp("Hiiragi","I see...
Then, I shall return and boast to everyone
in the theatre company before eating it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(I'm glad ｛柊＊＊＊｝ liked it!)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ChCheek(5,5);
    VoicePlay("L040500003_05_070");
    MsgDisp("Hiiragi","This is handmade, correct?");
    MsgDisp("主人公","Yes, I made it myself this time.
I put some effort in.");
    ChEye(5,2);
    ChMouth(5,3);
    ChMotion(5,2);
    ChCheek(5,0);
    VoicePlay("L040500003_05_080");
    MsgDisp("Hiiragi","Some?
Then, if you were to get more serious...
How frightening.");
    MsgDisp("主人公","Hehe, if I got serious, it wouldn't lose
even to the best chocolate!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("L040500003_05_090");
    MsgDisp("Hiiragi","This already wouldn't lose.
To me, for this to be any better...
It wouldn't just be a chocolate anymore.");
    MsgDisp("主人公","Then Valentine's wouldn't matter anymore.");
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("L040500003_05_100");
    MsgDisp("Hiiragi","Indeed. Well then, I will eat this quietly
by myself at home, such that I do not have
to share.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ seemed really happy!
It was worth the effort.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
