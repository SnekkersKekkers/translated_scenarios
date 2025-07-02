ScrFadeIn(0);
MsgDisp("主人公","Alright, let's go home.
......Ah!");
MsgDisp("主人公","Come to think of it,
it's almost Valentine's day,
but I don't have any chocolate yet!");
MsgDisp("主人公","Let's go to the store and look.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ScrFadeOut(0);
SEWait();
BGOpen("ex150",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ScrFadeIn(0);
VoicePlay("L010000000_46_000");
MsgDisp("Clerk","Welcome!");
MsgDisp("主人公","What should I do?");
MsgSel("Premium chocolate　　10 Rich","Obligatory chocolate　　1 Rich","Actually, I'll go home.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    case 2:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
