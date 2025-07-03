BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc723",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're serving herb tea and
selling vegetables. It would be nice if it
was well-received...)");
    MsgClose();
    ChOpen(3,254,1,0,3,-1,-1,0,0);
    VoicePlay("P630300001_03_000");
    MsgDisp("Honda","These are wondeful vegetables, huh!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝, welcome. Would you like
to take a look at the Gardening Club's
vegetables harvested in the morning?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P630300001_03_010");
    MsgDisp("Honda","Should I buy some as souvenirs to take
home?");
    MsgDisp("主人公","Hehe, absolutely!
The herb tea too.");
    ChSet(3,4);
    VoicePlay("P630300001_03_020");
    MsgDisp("Honda","Yep yep, then I'll have 
one cup to start with.");
    MsgDisp("主人公","Yes, one customer. 
This way please!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","((This year we're serving herb tea and
selling vegetables. It would be nice if it
was well-received...))");
    MsgClose();
    ChOpen(3,254,4,0,0,-1,-1,0,0);
    VoicePlay("P630300001_03_030");
    MsgDisp("Honda","Ahー,Fuuー...
The aroma of fresh herbs
is spreading, huh?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Welcome!");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P630300001_03_040");
    MsgDisp("Honda","Herbs and fresh vegetables... The
two-layer healing effect is amazing, huh?");
    MsgDisp("主人公","Hehe.
It's certainly healing, huh?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("P630300001_03_050");
    MsgDisp("Honda","No, that smile!
That'sーa triple effect～");
    MsgDisp("主人公","Umm...
Should I show you to a table first?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
