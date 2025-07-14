BGOpen("tr200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to check out the Gift Shop?","Let's go to Woof Meow House","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030521002_05_000");
    MsgDisp("Hiiragi","They may have some new products in stock.
Let's check it out!");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B030521002_05_010");
    MsgDisp("Hiiragi","Woof Meow.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Hehe, yeah.
Let's go see the cats and dogs!");
    MsgDispSksp(0);
    break ;
    case 2:
    VoicePlay("B030521002_05_020");
    MsgDisp("Hiiragi","Did you decide where we should go?
Come, let's go, then.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Okay!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
