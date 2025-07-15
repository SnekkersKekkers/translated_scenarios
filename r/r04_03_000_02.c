MsgClose();
ScrFadeOut(0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R040300002_03_000");
    MsgDisp("Honda","Alright, I'm gonna explore the castle!");
    MsgDisp("主人公","Hehe, see you later!");
    break ;
    case 3:
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    SEPlay("EV_SE_018");
    MsgDisp("","(Rumble～)");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("R040300002_03_010");
    MsgDisp("Honda","Sniff...
That smell is ramen, isn't it∋");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("R040300002_03_020");
    MsgDisp("Honda","Sorry! I'm interested in this castle ramen
right now. I'm gonna go!");
    MsgDisp("主人公","Sure.
Okay then, see you later.");
    break ;
    case 4:
    case 5:
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    SEPlay("EV_SE_018");
    MsgDisp("","(Rumble～)");
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("R040300002_03_030");
    MsgDisp("Honda","Hey! Don't make noise in a place like
this! Bad belly!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R040300002_03_040");
    MsgDisp("Honda","Whew, even princes get hungry, so I'm
gonna eat a feast!");
    MsgDisp("主人公","Hehe!
See you later then.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
