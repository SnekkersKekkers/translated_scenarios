BGOpen("tr300",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B030522000_05_000");
MsgDisp("Hiiragi","The grandeur of Habataki Castle.
It makes you want to improve your
own home.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B030522000_05_010");
MsgDisp("Hiiragi","Let's go.");
MsgSel("Let's go to the tower","Let's look at the exhibition");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B030522000_05_020");
    MsgDisp("Hiiragi","That's fine.
When you go up the castle, the first
thing that comes to mind is the tower.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Hehe, yeah.
I want to feel like a lord.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(5,4);
    VoicePlay("B030522000_05_030");
    MsgDisp("Hiiragi","There is so much to learn about the
history of Habataki City.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Yeah, let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
