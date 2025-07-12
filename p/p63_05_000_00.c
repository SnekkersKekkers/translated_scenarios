BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc722",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year's display is a cafe.
We prepared herb tea and cookies but...)");
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P630500000_05_000");
    MsgDisp("Hiiragi","Good day.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
You came.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500000_05_010");
    MsgDisp("Hiiragi","Yes. I heard I could
partake in some delicious tea.");
    MsgDisp("主人公","Yeah. Using the herbs the Horticulture
club grew, we made some herb tea and
cookies.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500000_05_020");
    MsgDisp("Hiiragi","You have cookies too?
I look forward to it.");
    MsgDisp("主人公","Yes, certainly!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year's display is a cafe.
We prepared herb tea and cookies but...)");
    MsgClose();
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    VoicePlay("P630500000_05_030");
    MsgDisp("Hiiragi","Pardon the intrusion.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
You came?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500000_05_040");
    MsgDisp("Hiiragi","Of course.
You painstakingly raised those herbs.
There must be some amazing effects.");
    MsgDisp("主人公","Hehe, it only has 
relaxing effects though?");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500000_05_050");
    MsgDisp("Hiiragi","Then, please let me relax.");
    MsgDisp("主人公","Yes.
One customer, this way please!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(5,0);
